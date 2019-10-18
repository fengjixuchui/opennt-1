package VSS;

require Exporter;
use strict;

our %EXPORT_TAGS = ( 'all' => [ qw() ] );
our @EXPORT_OK   = ( @{ $EXPORT_TAGS{'all'} } );
our @EXPORT      = qw();
our $VERSION     = '0.1';

use Data::Dumper;

#
# Simple subs to make it clear when we're testing for BOOL values
#
sub TRUE   {return(1);} # BOOLEAN TRUE
sub FALSE  {return(0);} # BOOLEAN FALSE

# -----------------------------------------------------------------------------
# Create a new blessed reference that will maintain state for this instance of indexing
# -----------------------------------------------------------------------------
sub new {
    my $proto = shift;
    my $class = ref($proto) || $proto;
    my $self  = {};
    bless($self, $class);

    # We always use guest to access the server and when writing
    # the stream data.
    $$self{'SSUSER'} = "guest";

    if ( defined $ENV{'SSROOT'} ) {
        $$self{'SSROOT'} = $ENV{'SSROOT'};
    } else {
        $$self{'SSROOT'} = `cd`;
        chomp $$self{'SSROOT'};
    }

    # Allow environment overrides for these settings.
    $$self{'SSDIR'}     = $ENV{'SSDIR'}     if (defined $ENV{'SSDIR'});
    $$self{'SSLABEL'}   = $ENV{'SSLABEL'}   if (defined $ENV{'SSLABEL'});
    $$self{'SSPROJECT'} = $ENV{'SSPROJECT'} if (defined $ENV{'SSPROJECT'});

    $$self{'SSDEBUGMODE'} = 0;

    $$self{'FILE_LOOKUP_TABLE'} = ();

    # Block for option parsing.
    PARSEOPTIONS: {
        my @unused_opts;
        my @opt;

        foreach (@ARGV) {
            # handle command options
            if (substr($_, 0, 1) =~ /^[\/-]$/) {
                # options that set values
                if ( (@opt = split(/=/, $_))==2 ) {
                    block: {
                        if ( uc substr($opt[0], 1) eq "ALLROOT"  ) {
                            $$self{'SSROOT'}  = $opt[1];
                            last;
                        }

                        $$self{'SSDIR'}     = $opt[1], last if ( uc substr($opt[0], 1) eq "SERVER"  );
                        $$self{'SSROOT'}    = $opt[1], last if ( uc substr($opt[0], 1) eq "CLIENT"  );
                        $$self{'SSPROJECT'} = $opt[1], last if ( uc substr($opt[0], 1) eq "PROJECT" );
                        $$self{'SSLABEL'}   = $opt[1], last if ( uc substr($opt[0], 1) eq "LABEL"   );
                        # Remember this was unused
                        push(@unused_opts, $_);
                        1;
                    }
                # options that are just flags
                } else {
                    block: {
                        $$self{'SSOFFLINE'} = TRUE, last if ( uc substr($_, 1, 5) eq "OFFLINE");
                        # Remember this was unused
                        push(@unused_opts, $_);
                        1;
                    }
                }
            } else {
                # Remember this was unused
                push(@unused_opts, $_);
            }
        }

        # Fixup @ARGV to only contained unused options so SSIndex.cmd
        # can warn the user about them if necessary.
        @ARGV = @unused_opts;
    }

    # It seems SSPROJECT can contain forward slashes.  Create a DOS-like SSPROJECT
    # for use in file path checking.
    if ( defined $$self{'SSPROJECT'} ) {
        $$self{'SSPROJECT_DOSLIKE'} = $$self{'SSPROJECT'}
        $$self{'SSPROJECT_DOSLIKE'} =~ s/\//\\/g;
    }

    return($self);
}

# -----------------------------------------------------------------------------
# Display module internal option state.
# -----------------------------------------------------------------------------
sub DisplayVariableInfo {
    my $self = shift;

    ::status_message("%-15s: %s\n",
                     "VSS Server",
                     $$self{'SSDIR'});

    ::status_message("%-15s: %s\n",
                     "VSS Client Root",
                     $$self{'SSROOT'});

    ::status_message("%-15s: %s\n",
                     "VSS Project",
                     $$self{'SSPROJECT'} ? $$self{'SSPROJECT'} : "<N/A>");

    ::status_message("%-15s: %s\n",
                     "VSS Label",
                     $$self{'SSLABEL'} ? $$self{'SSLABEL'} : "<N/A>");

}

# -----------------------------------------------------------------------------
# Given our init data and a local source path, create a lookup table that can
# return individual stream data for each source file.
# -----------------------------------------------------------------------------
sub GatherFileInformation {
    my $self       = shift;
    my $SourceRoot = shift;
    my $ServerRefs = shift;

    my %FileMapHash;

    #
    # Enforce expected directory relations.
    #
    if ( lc substr($SourceRoot, 0, length($$self{'SSROOT'})) ne
         lc $$self{'SSROOT'} ) {
        ::fatal_error("Source path ($SourceRoot) must be a child of the ".
                      "client view ($$self{'SSROOT'}).");
    }

    if ( ! defined $$self{'SSDIR'} ) {
        die("Server must be set via the command line or in the environment.\n");
    }

    if ( defined $$ServerRefs{uc $$self{'SSDIR'}} ) {
        $$self{'SSSERVERVAR'} = $$ServerRefs{uc $$self{'SSDIR'}};
    } else {
        die("$$self{'SSDIR'} missing from SrcSrv.ini\n");
    }

    # The path we index files from must be a subdirectory of the client's
    # root directory.
    if ( uc substr($SourceRoot, 0, length $$self{'SSROOT'}) ne uc $$self{'SSROOT'} ) {
        die("$SourceRoot isn't a subpath of $$self{'SSROOT'}");
    }

    # Translate SOURCEPATH to expected VSS syntax (e.q. dollar path)
    substr($SourceRoot, 0, length($$self{'SSROOT'})) = "\$";

    $SourceRoot =~ s/\\/\//g;
    $SourceRoot .= "/" if ($SourceRoot eq "\$");

    # Handle CLIENT being the driver root which causes the above substition the change
    # "c:\foo" into "$foo" instead of "$/foo".
    if ( substr($SourceRoot, 0, 2) ne "\$/" ) {
        substr($SourceRoot, 0, 1) = "\$/";
    }

    if ( defined $$self{'SSPROJECT'} ) {
        # SourcePath needs to end in a '/' or VSS_PROJECT support won't work.
        $SourceRoot .= "/" if ( substr($SourceRoot, -1, 1) ne "/");
        $SourceRoot .= "$$self{'SSPROJECT'}";
    }

    #
    # Create a hash that maps files on the client to files on the server
    #
    my $hProcess;

    if ( ! open($hProcess, "ss.exe properties -I- -R \"$SourceRoot\"|") ) {
        warn_message("Unable to start ss.exe: $!");
        return();
    }

    my $curline;

    ::status_message("Processing ss.exe properties output ...");

    # Loop on "File:" entries
    while ($curline = <$hProcess>) {
        chomp $curline;
        next if ($curline =~ /^\s*$/);

        my $curfile;
        # Parse new file
        if ( $curline =~ m/^File:[\s\t]*(.*)$/i ) {
            $curfile = $1;

            # Loop through the file details
            while ($curline = <$hProcess>) {
                chomp $curline;
                next if ($curline =~ /^\s*$/);
                # Parse version line
                if ( $curline =~ m/^[\s\t]*Version:\s*(\d*)/i ) {
                    my $Version = $1;
                    my $LocalFile = lc $curfile;

                    # Substiture out the root path
                    $LocalFile =~ s/\//\\/g;
                    $LocalFile =~ s/^\$/$$self{'SSROOT'}/i;

                    # If the root directory really points to a project, do some re-mapping
                    # so we end up with valid local file paths.
                    if ( defined $$self{'SSPROJECT'} ) {
                        $LocalFile =~ s/^\Q$$self{'SSROOT'}\E\\\Q$$self{'SSPROJECT_DOSLIKE'}\E/$$self{'SSROOT'}/i;
                    }

                    # Ensure that this file is really mapped since VSS
                    # doesn't make that distinction for us.
                    if ( -e $LocalFile ) {
                        # This could be more optimally placed to avoid the entire second
                        # while() loop when using labels, but while we're still testing,
                        # here's a reasonable place for it.
                        if ( defined $$self{'SSLABEL'} ) {
                            $Version = $$self{'SSLABEL'};
                        }

                        $curfile =~ s/\$\///i; # remove leading "$/"

                        # In the file lookup table, we create an array.  The first element is a hash
                        # of file-specific variables (always the same for VSS) and the second element
                        # is the actual file line for the given file.
                        @{$$self{'FILE_LOOKUP_TABLE'}{lc $LocalFile}} = ( { "$$self{'SSSERVERVAR'}" => "$$self{'SSDIR'}" },
                                                                          "$$self{'SSSERVERVAR'}*$curfile*$Version");
                    }
                    last;
                } # End parse version line
            } # End loop through the file details
        } # End parse new file
    } # End loop on "File:" entries

    # close the handle
    close($hProcess);

    # return true if any files were found
    return( keys %{$$self{'FILE_LOOKUP_TABLE'}} != 0 );
}

# -----------------------------------------------------------------------------
# Return ths SRCSRV stream data for a single file.
# -----------------------------------------------------------------------------
sub GetFileInfo {
    my $self        = shift;
    my $file        = shift;
    my $name_in_pdb = shift;

    if ( ! defined $name_in_pdb ) {
        $name_in_pdb = $file;
    }

    # We stored the necessary information when GatherFileInformation() was
    # called so we just need to return that information.
    if ( defined $$self{'FILE_LOOKUP_TABLE'}{lc $file} ) {
        return( ${$$self{'FILE_LOOKUP_TABLE'}{lc $file}}[0],
                "$name_in_pdb*${$$self{'FILE_LOOKUP_TABLE'}{lc $file}}[1]" );
    } else {
        return(undef);
    }
}

# -----------------------------------------------------------------------------
# The long name that should be written the SRCSRV stream to describe
# the source control system being indexed.
# -----------------------------------------------------------------------------
sub LongName {
    return("Visual Source Safe");
}

# -----------------------------------------------------------------------------
# Set the debug level for output.
# -----------------------------------------------------------------------------
sub SetDebugMode {
    my $self = shift;
    $$self{'SSDEBUGMODE'} = shift;
}

# -----------------------------------------------------------------------------
# Return the SCS specific stream variables.
# -----------------------------------------------------------------------------
sub SourceStreamVariables {
    my $self = shift;
    my @stream;
    push(@stream, "SSDIR=$$self{'SSDIR'}");
    push(@stream, "SRCSRVENV=SSDIR=%$$self{'SSSERVERVAR'}%");
    push(@stream, "SSUSER=guest");
    push(@stream, "VSSTRGDIR=%targ%\\%var2%\\%fnbksl%(%var3%)\\%var4%");
    push(@stream, "VSS_EXTRACT_CMD=ss.exe get -Y%SSUSER% ".
                                   "-GL\"%vsstrgdir%\" -GF- -I- ".
                                   "-W \"\$/%var3%\" -V%var4%");
    push(@stream, "VSS_EXTRACT_TARGET=".
                  "%targ%\\%var2%\\%fnbksl%(%var3%)\\%var4%\\%fnfile%(%var1%)");
    return(@stream);
}

# -----------------------------------------------------------------------------
# Loads previously saved file information.
# -----------------------------------------------------------------------------
sub LoadFileInfo {
    my $self = shift;
    my $dir  = shift;

    if ( -e "$dir\\vss_files.dat" ) {
        our $FileData1;
        require "$dir\\vss_files.dat";
        $$self{'FILE_LOOKUP_TABLE'} = $FileData1;
    } else {
        ::status_message("No VSS information saved in $dir.\n");
    }

    return();
}

# -----------------------------------------------------------------------------
# Saves current file information.
# -----------------------------------------------------------------------------
sub SaveFileInfo {
    my $self = shift;
    my $dir  = shift;

    my $fh;
    if ( open($fh, ">$dir\\vss_files.dat") ) {
        $Data::Dumper::Varname = "FileData";
        $Data::Dumper::Indent  = 0;
        print $fh Dumper($$self{'FILE_LOOKUP_TABLE'});
        close($fh);
    } else {
        ::status_message("Failed to save data to $dir.\n");
    }

    return();
}

# -----------------------------------------------------------------------------
# Simple usage ('-?')
# -----------------------------------------------------------------------------
sub SimpleUsage {
print<<VSS_SIMPLE_USAGE;
Visual Source Safe specific settings:

     NAME            SWITCH      ENV. VAR        Default
  -----------------------------------------------------------------------------
  A) VSS Server      Server      SSDIR            <N/A>
  B) VSS Client      Client      SSROOT           <Current directory>
  C) VSS Project     Project     SSPROJECT        <N/A>
  D) VSS Label       Label       SSLABEL          <N/A>

Note:
  SSUSER is ignored.  The user written to the source stream is always 'GUEST'
  and source information gathering is always done as the user 'GUEST'.
VSS_SIMPLE_USAGE
}

# -----------------------------------------------------------------------------
# Verbose usage (-??)
# -----------------------------------------------------------------------------
sub VerboseUsage {
print<<VSS_VERBOSE_USAGE;
(A)  VSS Dir - The VSS server to use. It corresponds to the environment variable
     SSDIR which is used to execute ss.exe from the command line.

(B)  VSS Client - Points to the local directory that is the root of your source
     enlistment. This corresponds to \$/ (\$/<project> if the project option is
     used).

(C)  VSS Project - Corresponds to the VSS project that the source comes from. If
     the source comes from more than one project, the local directory names must
     match the VSS project names on the server.  If the source all comes from
     the same project, the project option tells the script to assume that the
     client directory corresponds to \$/<project> instead of \$/.

(D)  VSS Label - Causes the script to replace individual file versions with the
     given label.  The script does not verify that the label exists.
VSS_VERBOSE_USAGE
}

1;
__END__
