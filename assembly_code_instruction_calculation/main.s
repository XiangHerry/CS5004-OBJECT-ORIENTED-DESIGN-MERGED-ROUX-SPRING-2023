	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 1
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #128
	stp	x28, x27, [sp, #32]             ; 16-byte Folded Spill
	stp	x26, x25, [sp, #48]             ; 16-byte Folded Spill
	stp	x24, x23, [sp, #64]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #80]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #96]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #112]            ; 16-byte Folded Spill
	add	x29, sp, #112
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	.cfi_offset w27, -88
	.cfi_offset w28, -96
	mov	x0, #0
	bl	_time
                                        ; kill: def $w0 killed $w0 killed $x0
	bl	_srand
	bl	_rand
	mov	w22, #26215
	movk	w22, #26214, lsl #16
	smull	x8, w0, w22
	lsr	x9, x8, #63
	asr	x8, x8, #34
	add	w8, w8, w9
	mov	w23, #10
	msub	w24, w8, w23, w0
	add	w25, w24, #1
	str	wzr, [sp, #28]
Lloh0:
	adrp	x19, l_str.14@PAGE
Lloh1:
	add	x19, x19, l_str.14@PAGEOFF
	mov	x0, x19
	bl	_puts
Lloh2:
	adrp	x0, l_str.13@PAGE
Lloh3:
	add	x0, x0, l_str.13@PAGEOFF
	bl	_puts
	mov	x0, x19
	bl	_puts
	mov	w21, #0
	ldr	w8, [sp, #28]
	cmp	w8, w25
	b.eq	LBB0_7
; %bb.1:
	mov	w21, #1
Lloh4:
	adrp	x19, l_.str.2@PAGE
Lloh5:
	add	x19, x19, l_.str.2@PAGEOFF
	add	x26, sp, #28
Lloh6:
	adrp	x20, l_.str.3@PAGE
Lloh7:
	add	x20, x20, l_.str.3@PAGEOFF
Lloh8:
	adrp	x27, l_str.17@PAGE
Lloh9:
	add	x27, x27, l_str.17@PAGEOFF
Lloh10:
	adrp	x28, l_str.16@PAGE
Lloh11:
	add	x28, x28, l_str.16@PAGEOFF
	b	LBB0_3
LBB0_2:                                 ;   in Loop: Header=BB0_3 Depth=1
	bl	_puts
	ldr	w8, [sp, #28]
	add	w21, w21, #1
	cmp	w8, w25
	b.eq	LBB0_6
LBB0_3:                                 ; =>This Inner Loop Header: Depth=1
	mov	x0, x19
	bl	_printf
	str	x26, [sp]
	mov	x0, x20
	bl	_scanf
	ldr	w8, [sp, #28]
	mov	x0, x27
	cmp	w8, w24
	b.le	LBB0_2
; %bb.4:                                ;   in Loop: Header=BB0_3 Depth=1
	mov	x0, x28
	cmp	w8, w25
	b.gt	LBB0_2
; %bb.5:
Lloh12:
	adrp	x0, l_str.15@PAGE
Lloh13:
	add	x0, x0, l_str.15@PAGEOFF
	bl	_puts
	b	LBB0_7
LBB0_6:
	mov	w21, #0
LBB0_7:
	bl	_rand
	smull	x8, w0, w22
	lsr	x9, x8, #63
	asr	x8, x8, #34
	add	w8, w8, w9
	msub	w23, w8, w23, w0
	add	w24, w23, #1
	str	wzr, [sp, #28]
Lloh14:
	adrp	x19, l_str.14@PAGE
Lloh15:
	add	x19, x19, l_str.14@PAGEOFF
	mov	x0, x19
	bl	_puts
Lloh16:
	adrp	x0, l_str.13@PAGE
Lloh17:
	add	x0, x0, l_str.13@PAGEOFF
	bl	_puts
	mov	x0, x19
	bl	_puts
	ldr	w8, [sp, #28]
	cmp	w8, w24
	b.ne	LBB0_11
LBB0_8:
	mov	x22, x21
LBB0_9:
	bl	_rand
	mov	w20, #26215
	movk	w20, #26214, lsl #16
	smull	x8, w0, w20
	lsr	x9, x8, #63
	asr	x8, x8, #34
	add	w8, w8, w9
	mov	w24, #10
	msub	w25, w8, w24, w0
	add	w26, w25, #1
	str	wzr, [sp, #28]
Lloh18:
	adrp	x19, l_str.14@PAGE
Lloh19:
	add	x19, x19, l_str.14@PAGEOFF
	mov	x0, x19
	bl	_puts
Lloh20:
	adrp	x0, l_str.13@PAGE
Lloh21:
	add	x0, x0, l_str.13@PAGEOFF
	bl	_puts
	mov	x0, x19
	bl	_puts
	ldr	w8, [sp, #28]
	cmp	w8, w26
	b.ne	LBB0_16
; %bb.10:
	mov	x23, x22
	b	LBB0_23
LBB0_11:
	add	w22, w21, #1
Lloh22:
	adrp	x19, l_.str.2@PAGE
Lloh23:
	add	x19, x19, l_.str.2@PAGEOFF
	add	x25, sp, #28
Lloh24:
	adrp	x20, l_.str.3@PAGE
Lloh25:
	add	x20, x20, l_.str.3@PAGEOFF
Lloh26:
	adrp	x26, l_str.17@PAGE
Lloh27:
	add	x26, x26, l_str.17@PAGEOFF
Lloh28:
	adrp	x27, l_str.16@PAGE
Lloh29:
	add	x27, x27, l_str.16@PAGEOFF
	b	LBB0_13
LBB0_12:                                ;   in Loop: Header=BB0_13 Depth=1
	bl	_puts
	ldr	w8, [sp, #28]
	add	w22, w22, #1
	cmp	w8, w24
	b.eq	LBB0_8
LBB0_13:                                ; =>This Inner Loop Header: Depth=1
	mov	x0, x19
	bl	_printf
	str	x25, [sp]
	mov	x0, x20
	bl	_scanf
	ldr	w8, [sp, #28]
	mov	x0, x26
	cmp	w8, w23
	b.le	LBB0_12
; %bb.14:                               ;   in Loop: Header=BB0_13 Depth=1
	mov	x0, x27
	cmp	w8, w24
	b.gt	LBB0_12
; %bb.15:
Lloh30:
	adrp	x0, l_str.15@PAGE
Lloh31:
	add	x0, x0, l_str.15@PAGEOFF
	bl	_puts
	b	LBB0_9
LBB0_16:
	add	w23, w22, #1
Lloh32:
	adrp	x19, l_.str.2@PAGE
Lloh33:
	add	x19, x19, l_.str.2@PAGEOFF
	add	x27, sp, #28
Lloh34:
	adrp	x20, l_.str.3@PAGE
Lloh35:
	add	x20, x20, l_.str.3@PAGEOFF
Lloh36:
	adrp	x28, l_str.17@PAGE
Lloh37:
	add	x28, x28, l_str.17@PAGEOFF
Lloh38:
	adrp	x21, l_str.16@PAGE
Lloh39:
	add	x21, x21, l_str.16@PAGEOFF
	b	LBB0_18
LBB0_17:                                ;   in Loop: Header=BB0_18 Depth=1
	bl	_puts
	ldr	w8, [sp, #28]
	add	w23, w23, #1
	cmp	w8, w26
	b.eq	LBB0_21
LBB0_18:                                ; =>This Inner Loop Header: Depth=1
	mov	x0, x19
	bl	_printf
	str	x27, [sp]
	mov	x0, x20
	bl	_scanf
	ldr	w8, [sp, #28]
	mov	x0, x28
	cmp	w8, w25
	b.le	LBB0_17
; %bb.19:                               ;   in Loop: Header=BB0_18 Depth=1
	mov	x0, x21
	cmp	w8, w26
	b.gt	LBB0_17
; %bb.20:
Lloh40:
	adrp	x0, l_str.15@PAGE
Lloh41:
	add	x0, x0, l_str.15@PAGEOFF
	bl	_puts
	b	LBB0_22
LBB0_21:
	mov	x23, x22
LBB0_22:
	mov	w20, #26215
	movk	w20, #26214, lsl #16
LBB0_23:
	bl	_rand
	smull	x8, w0, w20
	lsr	x9, x8, #63
	asr	x8, x8, #34
	add	w8, w8, w9
	msub	w22, w8, w24, w0
	add	w24, w22, #1
	str	wzr, [sp, #28]
Lloh42:
	adrp	x19, l_str.14@PAGE
Lloh43:
	add	x19, x19, l_str.14@PAGEOFF
	mov	x0, x19
	bl	_puts
Lloh44:
	adrp	x0, l_str.13@PAGE
Lloh45:
	add	x0, x0, l_str.13@PAGEOFF
	bl	_puts
	mov	x0, x19
	bl	_puts
	ldr	w8, [sp, #28]
	cmp	w8, w24
	b.ne	LBB0_28
LBB0_24:
	mov	x21, x23
LBB0_25:
	bl	_rand
	mov	w8, #26215
	movk	w8, #26214, lsl #16
	smull	x8, w0, w8
	lsr	x9, x8, #63
	asr	x8, x8, #34
	add	w8, w8, w9
	mov	w9, #10
	msub	w23, w8, w9, w0
	add	w24, w23, #1
	str	wzr, [sp, #28]
Lloh46:
	adrp	x19, l_str.14@PAGE
Lloh47:
	add	x19, x19, l_str.14@PAGEOFF
	mov	x0, x19
	bl	_puts
Lloh48:
	adrp	x0, l_str.13@PAGE
Lloh49:
	add	x0, x0, l_str.13@PAGEOFF
	bl	_puts
	mov	x0, x19
	bl	_puts
	ldr	w8, [sp, #28]
	cmp	w8, w24
	b.ne	LBB0_33
LBB0_26:
	mov	x22, x21
LBB0_27:
Lloh50:
	adrp	x19, l_str.11@PAGE
Lloh51:
	add	x19, x19, l_str.11@PAGEOFF
	mov	x0, x19
	bl	_puts
Lloh52:
	adrp	x0, l_str.10@PAGE
Lloh53:
	add	x0, x0, l_str.10@PAGEOFF
	bl	_puts
	mov	x0, x19
	bl	_puts
	stp	xzr, x22, [sp]
Lloh54:
	adrp	x19, l_.str.9@PAGE
Lloh55:
	add	x19, x19, l_.str.9@PAGEOFF
	mov	x0, x19
	bl	_printf
	mov	w8, #1
	stp	x8, x22, [sp]
	mov	x0, x19
	bl	_printf
	mov	w8, #2
	stp	x8, x22, [sp]
	mov	x0, x19
	bl	_printf
	mov	w8, #3
	stp	x8, x22, [sp]
	mov	x0, x19
	bl	_printf
	mov	w8, #4
	stp	x8, x22, [sp]
	mov	x0, x19
	bl	_printf
	mov	w0, #0
	ldp	x29, x30, [sp, #112]            ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #96]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #80]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #64]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #48]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #128
	ret
LBB0_28:
	add	w21, w23, #1
Lloh56:
	adrp	x19, l_.str.2@PAGE
Lloh57:
	add	x19, x19, l_.str.2@PAGEOFF
	add	x25, sp, #28
Lloh58:
	adrp	x20, l_.str.3@PAGE
Lloh59:
	add	x20, x20, l_.str.3@PAGEOFF
Lloh60:
	adrp	x26, l_str.17@PAGE
Lloh61:
	add	x26, x26, l_str.17@PAGEOFF
Lloh62:
	adrp	x27, l_str.16@PAGE
Lloh63:
	add	x27, x27, l_str.16@PAGEOFF
	b	LBB0_30
LBB0_29:                                ;   in Loop: Header=BB0_30 Depth=1
	bl	_puts
	ldr	w8, [sp, #28]
	add	w21, w21, #1
	cmp	w8, w24
	b.eq	LBB0_24
LBB0_30:                                ; =>This Inner Loop Header: Depth=1
	mov	x0, x19
	bl	_printf
	str	x25, [sp]
	mov	x0, x20
	bl	_scanf
	ldr	w8, [sp, #28]
	mov	x0, x26
	cmp	w8, w22
	b.le	LBB0_29
; %bb.31:                               ;   in Loop: Header=BB0_30 Depth=1
	mov	x0, x27
	cmp	w8, w24
	b.gt	LBB0_29
; %bb.32:
Lloh64:
	adrp	x0, l_str.15@PAGE
Lloh65:
	add	x0, x0, l_str.15@PAGEOFF
	bl	_puts
	b	LBB0_25
LBB0_33:
	add	w22, w21, #1
Lloh66:
	adrp	x19, l_.str.2@PAGE
Lloh67:
	add	x19, x19, l_.str.2@PAGEOFF
	add	x25, sp, #28
Lloh68:
	adrp	x20, l_.str.3@PAGE
Lloh69:
	add	x20, x20, l_.str.3@PAGEOFF
Lloh70:
	adrp	x26, l_str.17@PAGE
Lloh71:
	add	x26, x26, l_str.17@PAGEOFF
Lloh72:
	adrp	x27, l_str.16@PAGE
Lloh73:
	add	x27, x27, l_str.16@PAGEOFF
	b	LBB0_35
LBB0_34:                                ;   in Loop: Header=BB0_35 Depth=1
	bl	_puts
	ldr	w8, [sp, #28]
	add	w22, w22, #1
	cmp	w8, w24
	b.eq	LBB0_26
LBB0_35:                                ; =>This Inner Loop Header: Depth=1
	mov	x0, x19
	bl	_printf
	str	x25, [sp]
	mov	x0, x20
	bl	_scanf
	ldr	w8, [sp, #28]
	mov	x0, x26
	cmp	w8, w23
	b.le	LBB0_34
; %bb.36:                               ;   in Loop: Header=BB0_35 Depth=1
	mov	x0, x27
	cmp	w8, w24
	b.gt	LBB0_34
; %bb.37:
Lloh74:
	adrp	x0, l_str.15@PAGE
Lloh75:
	add	x0, x0, l_str.15@PAGEOFF
	bl	_puts
	b	LBB0_27
	.loh AdrpAdd	Lloh2, Lloh3
	.loh AdrpAdd	Lloh0, Lloh1
	.loh AdrpAdd	Lloh10, Lloh11
	.loh AdrpAdd	Lloh8, Lloh9
	.loh AdrpAdd	Lloh6, Lloh7
	.loh AdrpAdd	Lloh4, Lloh5
	.loh AdrpAdd	Lloh12, Lloh13
	.loh AdrpAdd	Lloh16, Lloh17
	.loh AdrpAdd	Lloh14, Lloh15
	.loh AdrpAdd	Lloh20, Lloh21
	.loh AdrpAdd	Lloh18, Lloh19
	.loh AdrpAdd	Lloh28, Lloh29
	.loh AdrpAdd	Lloh26, Lloh27
	.loh AdrpAdd	Lloh24, Lloh25
	.loh AdrpAdd	Lloh22, Lloh23
	.loh AdrpAdd	Lloh30, Lloh31
	.loh AdrpAdd	Lloh38, Lloh39
	.loh AdrpAdd	Lloh36, Lloh37
	.loh AdrpAdd	Lloh34, Lloh35
	.loh AdrpAdd	Lloh32, Lloh33
	.loh AdrpAdd	Lloh40, Lloh41
	.loh AdrpAdd	Lloh44, Lloh45
	.loh AdrpAdd	Lloh42, Lloh43
	.loh AdrpAdd	Lloh48, Lloh49
	.loh AdrpAdd	Lloh46, Lloh47
	.loh AdrpAdd	Lloh54, Lloh55
	.loh AdrpAdd	Lloh52, Lloh53
	.loh AdrpAdd	Lloh50, Lloh51
	.loh AdrpAdd	Lloh62, Lloh63
	.loh AdrpAdd	Lloh60, Lloh61
	.loh AdrpAdd	Lloh58, Lloh59
	.loh AdrpAdd	Lloh56, Lloh57
	.loh AdrpAdd	Lloh64, Lloh65
	.loh AdrpAdd	Lloh72, Lloh73
	.loh AdrpAdd	Lloh70, Lloh71
	.loh AdrpAdd	Lloh68, Lloh69
	.loh AdrpAdd	Lloh66, Lloh67
	.loh AdrpAdd	Lloh74, Lloh75
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str.2:                               ; @.str.2
	.asciz	"Make a guess:"

l_.str.3:                               ; @.str.3
	.asciz	"%d"

l_.str.9:                               ; @.str.9
	.asciz	"Game %d took you %d gusses\n"

l_str.10:                               ; @str.10
	.asciz	"|Here are the results of your guessing abilities|"

l_str.11:                               ; @str.11
	.asciz	"================================================="

l_str.13:                               ; @str.13
	.asciz	"CPU Says: Pick a number 1-10"

l_str.14:                               ; @str.14
	.asciz	"=========================="

l_str.15:                               ; @str.15
	.asciz	"You got it!"

l_str.16:                               ; @str.16
	.asciz	"No guess lower!"

l_str.17:                               ; @str.17
	.asciz	"No guess higher!"

.subsections_via_symbols
