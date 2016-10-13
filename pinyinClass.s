	.file	"pinyinClass.cc"
	.text
	.align 2
	.globl	_ZN6Pinyin7prepareEPKc
	.type	_ZN6Pinyin7prepareEPKc, @function
_ZN6Pinyin7prepareEPKc:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_ZN6Pinyin7prepareEPKc, .-_ZN6Pinyin7prepareEPKc
	.align 2
	.globl	_ZN6Pinyin8romanizeEPKcb
	.type	_ZN6Pinyin8romanizeEPKcb, @function
_ZN6Pinyin8romanizeEPKcb:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	%edx, %eax
	movb	%al, -20(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ZN6Pinyin8romanizeEPKcb, .-_ZN6Pinyin8romanizeEPKcb
	.align 2
	.globl	_ZN6Pinyin14convertSurnameEPKc
	.type	_ZN6Pinyin14convertSurnameEPKc, @function
_ZN6Pinyin14convertSurnameEPKc:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	_ZN6Pinyin14convertSurnameEPKc, .-_ZN6Pinyin14convertSurnameEPKc
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
