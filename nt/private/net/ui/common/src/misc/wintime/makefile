# @@ COPY_RIGHT_HERE
# @@ ROADMAP :: The Makefile the product-wide header files

UI=..\..\..\..

!include rules.mk


!ifdef NTMAKEENV

!include $(NTMAKEENV)\makefile.def

!else # NTMAKEENV


#MEMBER intlprof.cxx
#MEMBER ctime.cxx


all:: win

os2: $(OS2_OBJS)

win: $(WIN_OBJS)

clean:
    -del $(CXX_INTERMED)
    -del $(OS2_OBJS) $(WIN_OBJS)
    -del depend.old

clobber:	clean
    echo Nothing else to do

tree:
    @echo Not yet implemented

test::


DEPEND_WIN = TRUE
DEPEND_OS2 = TRUE
!include $(UI)\common\src\uidepend.mk


# DO NOT DELETE THE FOLLOWING LINE
!include depend.mk


!endif # NTMAKEENV
