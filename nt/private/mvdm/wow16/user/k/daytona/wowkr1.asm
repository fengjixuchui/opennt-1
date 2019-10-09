	TITLE	..\wow.c
	.386P
include listing.inc
if 1 ;  @Version gt 510
; .model NOTHING
else
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
_DATA	SEGMENT DWORD USE16 PUBLIC 'DATA'
_DATA	ENDS
CONST	SEGMENT DWORD USE16 PUBLIC 'CONST'
CONST	ENDS
_BSS	SEGMENT DWORD USE16 PUBLIC 'BSS'
_BSS	ENDS
$$SYMBOLS	SEGMENT BYTE USE16 'DEBSYM'
$$SYMBOLS	ENDS
$$TYPES	SEGMENT BYTE USE16 'DEBTYP'
$$TYPES	ENDS
_TLS	SEGMENT DWORD USE16 PUBLIC 'TLS'
_TLS	ENDS
;	COMDAT ??_C@_0DE@PGCI@Assertion?5failed?3?50?5?$CG?$CG?5?$CCPtoHq?5re@
CONST	SEGMENT DWORD USE16 PUBLIC 'CONST'
CONST	ENDS
;	COMDAT ??_C@_0BE@DPMO@?4?4?2?4?4?2?4?4?2inc?2user?4h?$AA@
CONST	SEGMENT DWORD USE16 PUBLIC 'CONST'
CONST	ENDS
;	COMDAT _NtCurrentTeb@0
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT _RtlConvertLongToLargeInteger@4
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT @HMValidateHandle@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT @HMValidateHandleNoRip@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT _MNLookUpItem@16
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __GetMenuState@12
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT _GetPrevPwnd@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __GetWindow@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __GetParent@4
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __GetSubMenu@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __IsChild@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __IsWindowVisible@4
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __ClientToScreen@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __GetClientRect@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __GetWindowRect@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
;	COMDAT __ScreenToClient@8
_TEXT	SEGMENT PARA USE16 PUBLIC 'CODE'
_TEXT	ENDS
; NOTHING	GROUP _DATA, CONST, _BSS
	ASSUME	CS: NOTHING, DS: FLAT, SS: FLAT
endif
PUBLIC	@HMValidateHandle@8
; EXTRN	_wow16gpsi:DWORD
;	COMDAT @HMValidateHandle@8
_TEXT	SEGMENT
; File ..\..\wow.c
@HMValidateHandle@8 PROC FAR				; COMDAT
; Line 259
	push	esi
	mov	eax, DWORD PTR _wow16gpsi
	push	edi
	mov	esi, 65535				; 0000ffffH
; Line 282
	mov	edi, ecx
	mov	eax, DWORD PTR [eax]
	and	edi, esi
	cmp	DWORD PTR [eax+4], edi
	jbe	SHORT $L14393
	shl	edi, 4
	mov	eax, DWORD PTR _wow16gpsi
	shr	ecx, 16					; 00000010H
	mov	eax, DWORD PTR [eax+4]
	add	eax, edi
	cmp	WORD PTR [eax+10], cx
	je	SHORT $L14395
	test	cx, cx
	je	SHORT $L14395
	cmp	cx, si
	jne	SHORT $L14393
$L14395:
	cmp	BYTE PTR [eax+8], dl
	je	SHORT $L14397
	cmp	dl, 255					; 000000ffH
	jne	SHORT $L14393
$L14397:
	mov	edx, DWORD PTR [eax]
	mov	eax, DWORD PTR fs:24
	mov	ecx, DWORD PTR [eax+92]
	add	eax, 68					; 00000044H
	cmp	DWORD PTR [ecx], edx
	ja	SHORT $L14400
	cmp	DWORD PTR [ecx+4], edx
	jbe	SHORT $L14400
	sub	edx, DWORD PTR [eax+28]
$L14400:
	mov	eax, edx
	jmp	SHORT $L14388
$L14393:
; Line 323
	xor	eax, eax
; Line 324
$L14388:
	pop	edi
	pop	esi
	ret	0
@HMValidateHandle@8 ENDP
_TEXT	ENDS
PUBLIC	@HMValidateHandleNoRip@8
;	COMDAT @HMValidateHandleNoRip@8
_TEXT	SEGMENT
@HMValidateHandleNoRip@8 PROC FAR			; COMDAT
; Line 330
	push	esi
	mov	eax, DWORD PTR _wow16gpsi
	push	edi
	mov	esi, 65535				; 0000ffffH
; Line 337
	mov	edi, ecx
	mov	eax, DWORD PTR [eax]
	and	edi, esi
	cmp	DWORD PTR [eax+4], edi
	jbe	SHORT $L14418
	shl	edi, 4
	mov	eax, DWORD PTR _wow16gpsi
	shr	ecx, 16					; 00000010H
	mov	eax, DWORD PTR [eax+4]
	add	eax, edi
	cmp	WORD PTR [eax+10], cx
	je	SHORT $L14420
	test	cx, cx
	je	SHORT $L14420
	cmp	cx, si
	jne	SHORT $L14418
$L14420:
	cmp	BYTE PTR [eax+8], dl
	je	SHORT $L14422
	cmp	dl, 255					; 000000ffH
	jne	SHORT $L14418
$L14422:
	mov	edx, DWORD PTR [eax]
	mov	eax, DWORD PTR fs:24
	mov	ecx, DWORD PTR [eax+92]
	add	eax, 68					; 00000044H
	cmp	DWORD PTR [ecx], edx
	ja	SHORT $L14425
	cmp	DWORD PTR [ecx+4], edx
	jbe	SHORT $L14425
	sub	edx, DWORD PTR [eax+28]
$L14425:
	mov	eax, edx
	jmp	SHORT $L14414
$L14418:
; Line 338
	xor	eax, eax
; Line 339
$L14414:
	pop	edi
	pop	esi
	ret	0
@HMValidateHandleNoRip@8 ENDP
_TEXT	ENDS
PUBLIC	_MNLookUpItem@16
;	COMDAT _MNLookUpItem@16
_TEXT	SEGMENT
_pMenu$ = 8
_wCmd$ = 12
_fByPosition$ = 16
_ppMenuItemIsOn$ = 20
_pItemMaybe$ = -12
_pMenuMaybe$ = -4
_i$ = -8
_MNLookUpItem@16 PROC FAR				; COMDAT
; Line 363
	push	ebp
	xor	eax, eax
	mov	ebp, esp
	sub	esp, 12					; 0000000cH
	push	ebx
	mov	DWORD PTR _pMenuMaybe$[bp], eax
	push	esi
	push	edi
; Line 370
	mov	esi, DWORD PTR _ppMenuItemIsOn$[bp]
	cmp	esi, eax
	je	SHORT $L14436
; Line 371
	mov	DWORD PTR [esi], eax
; Line 373
$L14436:
	mov	edi, DWORD PTR _pMenu$[bp]
	test	edi, edi
	je	$L14580
	mov	ecx, DWORD PTR [edi+40]
	test	ecx, ecx
	je	$L14580
	cmp	DWORD PTR _wCmd$[bp], -1
	je	$L14580
; Line 381
	cmp	DWORD PTR _fByPosition$[bp], 0
	je	SHORT $L14439
; Line 382
	cmp	ecx, DWORD PTR _wCmd$[bp]
	jbe	$L14580
; Line 383
	mov	eax, DWORD PTR [edi+56]
	mov	ecx, DWORD PTR _wCmd$[bp]
	shl	ecx, 6
	sub	eax, DWORD PTR [edi+12]
	add	eax, ecx
	add	eax, edi
; Line 384
	test	esi, esi
	je	 $L14578
; Line 385
	mov	DWORD PTR [esi], edi
	jmp	 $L14578
; Line 400
$L14439:
; Line 401
	mov	eax, DWORD PTR [edi+56]
	sub	eax, DWORD PTR [edi+12]
	test	ecx, ecx
	mov	DWORD PTR _i$[bp], 0
	lea	ebx, DWORD PTR [eax+edi]
	jle	SHORT $L14577
$L14443:
	mov	ecx, DWORD PTR [ebx+12]
	mov	eax, DWORD PTR _wCmd$[bp]
; Line 406
	test	ecx, ecx
; Line 414
	je	SHORT $L14446
	cmp	DWORD PTR [ebx+8], eax
	jne	SHORT $L14447
; Line 415
	mov	DWORD PTR _pMenuMaybe$[bp], edi
	mov	DWORD PTR _pItemMaybe$[bp], ebx
; Line 419
$L14447:
; Line 420
	push	esi
	mov	eax, edi
	push	dword ptr 0
	sub	eax, DWORD PTR [edi+12]
	push	DWORD PTR _wCmd$[bp]
	add	eax, ecx
	push	eax
	call	_MNLookUpItem@16
; Line 421
	test	eax, eax
	je	SHORT $L14444
	jmp	SHORT $L14578
; Line 423
$L14446:
	cmp	DWORD PTR [ebx+8], eax
	je	SHORT $L14575
; Line 401
$L14444:
	add	ebx, 64					; 00000040H
	inc	DWORD PTR _i$[bp]
	mov	eax, DWORD PTR _i$[bp]
	cmp	DWORD PTR [edi+40], eax
	jg	SHORT $L14443
$L14577:
; Line 434
	cmp	DWORD PTR _pMenuMaybe$[bp], 0
	je	SHORT $L14580
; Line 437
	test	esi, esi
	je	SHORT $L14453
; Line 438
	mov	eax, DWORD PTR _pMenuMaybe$[bp]
	mov	DWORD PTR [esi], eax
; Line 439
$L14453:
	mov	eax, DWORD PTR _pItemMaybe$[bp]
	jmp	SHORT $L14578
; Line 422
$L14575:
; Line 428
	test	esi, esi
	je	SHORT $L14451
; Line 429
	mov	DWORD PTR [esi], edi
; Line 430
$L14451:
	mov	eax, ebx
	jmp	SHORT $L14578
$L14580:
; Line 375
	xor	eax, eax
; Line 443
$L14578:
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	16					; 00000010H
_MNLookUpItem@16 ENDP
_TEXT	ENDS
PUBLIC	__GetMenuState@12
;	COMDAT __GetMenuState@12
_TEXT	SEGMENT
_pMenu$ = 8
_wId$ = 12
_dwFlags$ = 16
__GetMenuState@12 PROC FAR				; COMDAT
; Line 459
	push	ebp
	mov	eax, DWORD PTR _dwFlags$[esp]
	mov	ebp, esp
	and	eax, 1024				; 00000400H
	push	esi
; Line 466
	push	dword ptr 0
	push	eax
	mov	esi, DWORD PTR _pMenu$[bp]
	push	DWORD PTR _wId$[bp]
	push	esi
	call	_MNLookUpItem@16
	mov	ecx, eax
	test	ecx, ecx
	jne	SHORT $L14460
; Line 467
	mov	eax, -1
	jmp	SHORT $L14461
; Line 469
$L14460:
	mov	eax, DWORD PTR [ecx+4]
	or	eax, DWORD PTR [ecx]
	mov	ecx, DWORD PTR [ecx+12]
; Line 471
	test	ecx, ecx
	je	SHORT $L14461
; Line 478
	sub	esi, DWORD PTR [esi+12]
	and	eax, 239				; 000000efH
	or	al, 16					; 00000010H
	mov	ecx, DWORD PTR [esi+ecx+40]
	shl	ecx, 8
	add	eax, ecx
; Line 481
$L14461:
; Line 482
	pop	esi
	pop	ebp
	ret	12					; 0000000cH
__GetMenuState@12 ENDP
_TEXT	ENDS
PUBLIC	_GetPrevPwnd@8
;	COMDAT _GetPrevPwnd@8
_TEXT	SEGMENT
_pwndList$ = 8
_pwndFind$ = 12
_GetPrevPwnd@8 PROC FAR				; COMDAT
; Line 497
	push	ebp
	mov	eax, DWORD PTR _pwndList$[esp]
	mov	ebp, esp
	test	eax, eax
; Line 500
	jne	SHORT $L14467
; Line 501
	xor	eax, eax
	jmp	SHORT $L14464
; Line 503
$L14467:
	mov	edx, DWORD PTR [eax+24]
	test	edx, edx
	jne	SHORT $L14468
; Line 504
	xor	eax, eax
	jmp	SHORT $L14464
; Line 506
$L14468:
	cmp	edx, 2147418111				; 7ffeffffH
	jbe	SHORT $L14585
	sub	edx, DWORD PTR [eax+12]
	add	edx, eax
$L14585:
	mov	eax, DWORD PTR [edx+28]
; Line 507
	cmp	eax, 2147418111				; 7ffeffffH
	jbe	SHORT $L14587
	sub	edx, DWORD PTR [edx+12]
	add	edx, eax
	jmp	SHORT $L14588
$L14587:
	mov	edx, eax
$L14588:
; Line 508
	xor	ecx, ecx
; Line 510
	test	edx, edx
	je	SHORT $L14595
$L14470:
; Line 511
	cmp	edx, DWORD PTR _pwndFind$[bp]
	je	SHORT $L14595
; Line 513
	mov	ecx, edx
	mov	eax, DWORD PTR [edx+20]
; Line 514
	cmp	eax, 2147418111				; 7ffeffffH
	jbe	SHORT $L14589
	sub	edx, DWORD PTR [edx+12]
	add	edx, eax
	jmp	SHORT $L14594
$L14589:
	mov	edx, eax
$L14594:
; Line 515
	test	edx, edx
	jne	SHORT $L14470
$L14595:
; Line 517
	sub	edx, DWORD PTR _pwndFind$[bp]
	cmp	edx, 1
	sbb	eax, eax
	and	eax, ecx
; Line 518
$L14464:
	pop	ebp
	ret	8
_GetPrevPwnd@8 ENDP
_TEXT	ENDS
PUBLIC	__GetWindow@8
; EXTRN	_GetAppCompatFlags@4:FAR
;	COMDAT __GetWindow@8
_TEXT	SEGMENT
_pwnd$ = 8
_cmd$ = 12
__GetWindow@8 PROC FAR					; COMDAT
; Line 534
	push	ebp
	mov	ebp, esp
	push	ebx
	push	esi
	push	edi
; Line 536
	xor	edi, edi
	mov	esi, DWORD PTR _pwnd$[bp]
; Line 542
	movzx	eax, WORD PTR [esi+122]
	and	ah, -193				; ffffff3fH
	cmp	eax, 669				; 0000029dH
	jne	SHORT $L14606
; Line 543
	cmp	DWORD PTR _cmd$[bp], 5
	je	SHORT $L14606
; Line 548
	xor	eax, eax
	jmp	$L14475
$L14606:
; Line 557
	xor	ebx, ebx
	mov	eax, DWORD PTR _cmd$[bp]
; Line 558
	cmp	eax, ebx
	je	SHORT $L14490
	cmp	eax, 1
	je	$L14497
	cmp	eax, 2
	je	$L14489
	cmp	eax, 3
	je	$L14498
	cmp	eax, 4
	je	$L14499
	cmp	eax, 5
	je	$L14500
; Line 598
	xor	eax, eax
	jmp	$L14475
; Line 564
$L14490:
	mov	eax, DWORD PTR [esi+24]
; Line 565
	test	eax, eax
	je	 $L14486
; Line 566
	mov	ebx, eax
	cmp	eax, 2147418111				; 7ffeffffH
	jbe	SHORT $L14598
	sub	eax, DWORD PTR [esi+12]
	lea	ebx, DWORD PTR [eax+esi]
$L14598:
	mov	eax, DWORD PTR [ebx+28]
; Line 567
	cmp	eax, 2147418111				; 7ffeffffH
	jbe	SHORT $L14600
	sub	ebx, DWORD PTR [ebx+12]
	add	ebx, eax
	jmp	SHORT $L14601
$L14600:
	mov	ebx, eax
$L14601:
; Line 568
	push	dword ptr 0
	call	_GetAppCompatFlags@4
	test	al, 8
	je	SHORT $L14486
; Line 569
	test	ebx, ebx
	je	SHORT $L14502
$L14494:
; Line 570
	test	BYTE PTR [ebx+164], 8
	je	SHORT $L14486
	mov	eax, DWORD PTR [ebx+20]
; Line 572
	cmp	eax, 2147418111				; 7ffeffffH
	jbe	SHORT $L14602
	sub	ebx, DWORD PTR [ebx+12]
	add	ebx, eax
	jmp	SHORT $L14605
$L14602:
	mov	ebx, eax
$L14605:
; Line 573
	test	ebx, ebx
	jne	SHORT $L14494
	jmp	SHORT $L14486
; Line 578
$L14497:
; Line 579
	push	dword ptr 0
	push	esi
	call	_GetPrevPwnd@8
	mov	ebx, eax
; Line 580
	jmp	SHORT $L14486
; Line 559
$L14489:
; Line 560
	mov	ebx, DWORD PTR [esi+20]
	jmp	SHORT $L14608
; Line 582
$L14498:
; Line 583
	push	esi
	push	esi
	call	_GetPrevPwnd@8
	mov	ebx, eax
; Line 584
	jmp	SHORT $L14486
; Line 586
$L14499:
; Line 587
	mov	ebx, DWORD PTR [esi+32]
	jmp	SHORT $L14608
; Line 591
$L14500:
; Line 592
	mov	ebx, DWORD PTR [esi+28]
$L14608:
; Line 593
	mov	edi, 1
; Line 599
$L14486:
; Line 601
	test	ebx, ebx
	je	SHORT $L14502
	test	edi, edi
	je	SHORT $L14502
; Line 602
	sub	ebx, DWORD PTR [esi+12]
	add	ebx, esi
; Line 604
$L14502:
	mov	eax, ebx
; Line 605
$L14475:
	pop	edi
	pop	esi
	pop	ebx
	pop	ebp
	ret	8
__GetWindow@8 ENDP
_TEXT	ENDS
PUBLIC	__GetParent@4
;	COMDAT __GetParent@4
_TEXT	SEGMENT
_pwnd$ = 8
__GetParent@4 PROC FAR					; COMDAT
; Line 620
	push	ebp
	mov	eax, DWORD PTR _pwnd$[esp]
	mov	ebp, esp
	mov	cl, BYTE PTR [eax+171]
	and	cl, 192					; 000000c0H
; Line 627
	je	SHORT $L14505
; Line 628
	cmp	cl, 64					; 00000040H
	jne	SHORT $L14506
	mov	ecx, DWORD PTR [eax+24]
; Line 629
	cmp	ecx, 2147418111				; 7ffeffffH
	jbe	SHORT $L14611
	sub	eax, DWORD PTR [eax+12]
	add	eax, ecx
	jmp	SHORT $L14504
$L14611:
	mov	eax, ecx
; Line 630
	jmp	SHORT $L14504
$L14506:
	mov	ecx, DWORD PTR [eax+32]
; Line 631
	cmp	ecx, 2147418111				; 7ffeffffH
	jbe	SHORT $L14613
	sub	eax, DWORD PTR [eax+12]
	add	eax, ecx
	jmp	SHORT $L14504
$L14613:
	mov	eax, ecx
; Line 632
	jmp	SHORT $L14504
; Line 639
$L14505:
	xor	eax, eax
; Line 640
$L14504:
	pop	ebp
	ret	4
__GetParent@4 ENDP
_TEXT	ENDS
PUBLIC	__GetSubMenu@8
;	COMDAT __GetSubMenu@8
_TEXT	SEGMENT
_pMenu$ = 8
_nPos$ = 12
__GetSubMenu@8 PROC FAR				; COMDAT
; Line 655
	push	ebp
	xor	eax, eax
	mov	ebp, esp
	push	esi
	push	edi
; Line 662
	mov	edx, DWORD PTR _pMenu$[bp]
	mov	ecx, DWORD PTR _nPos$[bp]
	cmp	DWORD PTR [edx+40], ecx
	jbe	SHORT $L14513
	shl	ecx, 6
	mov	esi, DWORD PTR [edx+12]
; Line 663
	mov	edi, DWORD PTR [edx+56]
	sub	edi, esi
	add	edi, ecx
	mov	ecx, DWORD PTR [edi+edx+12]
; Line 664
	test	ecx, ecx
	je	SHORT $L14513
; Line 665
	sub	edx, esi
	lea	eax, DWORD PTR [edx+ecx]
; Line 669
$L14513:
; Line 670
	pop	edi
	pop	esi
	pop	ebp
	ret	8
__GetSubMenu@8 ENDP
_TEXT	ENDS
PUBLIC	__IsChild@8
;	COMDAT __IsChild@8
_TEXT	SEGMENT
_pwndParent$ = 8
_pwnd$ = 12
__IsChild@8 PROC FAR					; COMDAT
; Line 685
	push	ebp
	mov	eax, DWORD PTR _pwnd$[esp]
	mov	ebp, esp
; Line 690
$L14519:
	test	eax, eax
	je	SHORT $L14624
; Line 691
	mov	cl, BYTE PTR [eax+171]
	and	cl, 192					; 000000c0H
	cmp	cl, 64					; 00000040H
	jne	SHORT $L14624
	mov	ecx, DWORD PTR [eax+24]
; Line 694
	cmp	ecx, 2147418111				; 7ffeffffH
	jbe	SHORT $L14619
	sub	eax, DWORD PTR [eax+12]
	add	eax, ecx
	jmp	SHORT $L14620
$L14619:
	mov	eax, ecx
$L14620:
; Line 695
	cmp	eax, DWORD PTR _pwndParent$[bp]
	jne	SHORT $L14519
; Line 696
	mov	eax, 1
	jmp	SHORT $L14517
$L14624:
; Line 698
	xor	eax, eax
; Line 699
$L14517:
	pop	ebp
	ret	8
__IsChild@8 ENDP
_TEXT	ENDS
PUBLIC	__IsWindowVisible@4
;	COMDAT __IsWindowVisible@4
_TEXT	SEGMENT
_pwnd$ = 8
__IsWindowVisible@4 PROC FAR				; COMDAT
; Line 718
	push	ebp
	mov	ecx, DWORD PTR _pwnd$[esp]
	mov	ebp, esp
	test	ecx, ecx
; Line 725
	jne	SHORT $L14633
	jmp	SHORT $L14634
; Line 733
$L14627:
	mov	ecx, eax
; Line 734
$L14633:
; Line 729
	test	BYTE PTR [ecx+171], 16			; 00000010H
	je	SHORT $L14631
; Line 731
	movzx	eax, WORD PTR [ecx+122]
	and	ah, -193				; ffffff3fH
	cmp	eax, 669				; 0000029dH
	je	SHORT $L14634
	mov	eax, DWORD PTR [ecx+24]
; Line 733
	cmp	eax, 2147418111				; 7ffeffffH
	jbe	SHORT $L14627
	sub	ecx, DWORD PTR [ecx+12]
	add	ecx, eax
	jmp	SHORT $L14633
$L14631:
; Line 730
	xor	eax, eax
	jmp	SHORT $L14524
$L14634:
; Line 736
	mov	eax, 1
; Line 737
$L14524:
	pop	ebp
	ret	4
__IsWindowVisible@4 ENDP
_TEXT	ENDS
PUBLIC	__ClientToScreen@8
;	COMDAT __ClientToScreen@8
_TEXT	SEGMENT
_pwnd$ = 8
_ppt$ = 12
__ClientToScreen@8 PROC FAR				; COMDAT
; Line 752
	push	ebp
	mov	eax, DWORD PTR _pwnd$[esp]
	mov	ebp, esp
; Line 753
	mov	ecx, DWORD PTR [eax+56]
	mov	edx, DWORD PTR _ppt$[bp]
	pop	ebp
	add	DWORD PTR [edx], ecx
; Line 754
	mov	eax, DWORD PTR [eax+60]
	add	DWORD PTR [edx+4], eax
; Line 756
	mov	eax, 1
; Line 757
	ret	8
__ClientToScreen@8 ENDP
_TEXT	ENDS
PUBLIC	__GetClientRect@8
;	COMDAT __GetClientRect@8
_TEXT	SEGMENT
_pwnd$ = 8
_prc$ = 12
__GetClientRect@8 PROC FAR				; COMDAT
; Line 772
	push	ebp
	mov	edx, DWORD PTR _pwnd$[esp]
	mov	ebp, esp
; Line 779
	test	BYTE PTR [edx+171], 32			; 00000020H
	je	SHORT $L14537
	test	BYTE PTR [edx+160], 128			; 00000080H
	jne	SHORT $L14537
; Line 782
	mov	ecx, DWORD PTR _prc$[bp]
	mov	DWORD PTR [ecx], 0
; Line 783
	mov	edx, DWORD PTR _wow16gpsi
	mov	eax, DWORD PTR [edx]
	mov	edx, DWORD PTR [eax+596]
	mov	WORD PTR [ecx+4], dx
; Line 784
	mov	eax, DWORD PTR _wow16gpsi
	mov	edx, DWORD PTR [eax]
	mov	eax, DWORD PTR [edx+600]
	jmp	SHORT $L14639
; Line 792
$L14537:
; Line 795
	mov	ecx, DWORD PTR _prc$[bp]
	mov	DWORD PTR [ecx], 0
; Line 796
	mov	eax, DWORD PTR [edx+64]
	sub	ax, WORD PTR [edx+56]
	mov	WORD PTR [ecx+4], ax
; Line 797
	mov	eax, DWORD PTR [edx+68]
	sub	ax, WORD PTR [edx+60]
$L14639:
	mov	WORD PTR [ecx+6], ax
	pop	ebp
; Line 805
	mov	eax, 1
; Line 806
	ret	8
__GetClientRect@8 ENDP
_TEXT	ENDS
PUBLIC	__GetWindowRect@8
;	COMDAT __GetWindowRect@8
_TEXT	SEGMENT
_pwnd$ = 8
_prc$ = 12
__GetWindowRect@8 PROC FAR				; COMDAT
; Line 821
	push	ebp
	mov	ebp, esp
	push	esi
	push	edi
; Line 822
	mov	esi, DWORD PTR _pwnd$[bp]
	add	esi, 40					; 00000028H
	mov	edi, DWORD PTR _prc$[bp]
	movsd
	movsd
	movsd
	movsd
; Line 824
	mov	eax, 1
	pop	edi
; Line 825
	pop	esi
	pop	ebp
	ret	8
__GetWindowRect@8 ENDP
_TEXT	ENDS
PUBLIC	__ScreenToClient@8
;	COMDAT __ScreenToClient@8
_TEXT	SEGMENT
_pwnd$ = 8
_ppt$ = 12
__ScreenToClient@8 PROC FAR				; COMDAT
; Line 839
	push	ebp
	mov	eax, DWORD PTR _pwnd$[esp]
	mov	ebp, esp
; Line 840
	mov	ecx, DWORD PTR [eax+56]
	mov	edx, DWORD PTR _ppt$[bp]
	pop	ebp
	sub	DWORD PTR [edx], ecx
; Line 841
	mov	eax, DWORD PTR [eax+60]
	sub	DWORD PTR [edx+4], eax
; Line 843
	mov	eax, 1
; Line 844
	ret	8
__ScreenToClient@8 ENDP
_TEXT	ENDS
END
