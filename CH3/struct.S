	.file	"struct.c"
	.text
	.globl	foo
	.type	foo, @function
foo:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	foo, .-foo
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -60(%rbp)
	movl	$5, -48(%rbp)
	leaq	-60(%rbp), %rax
	movq	%rax, -40(%rbp)
	movb	$97, -32(%rbp)
	movabsq	$8751732647482651489, %rax
	movq	%rax, -31(%rbp)
	movabsq	$7378718580335539302, %rax
	movq	%rax, -23(%rbp)
	movl	$1717986918, -15(%rbp)
	movb	$101, -26(%rbp)
	movl	$8, %edi
	call	malloc
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movl	$5, (%rax)
	movq	-56(%rbp), %rax
	leaq	-60(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-56(%rbp), %rax
	movb	$97, 16(%rax)
	movl	-60(%rbp), %eax
	movl	%eax, %edi
	call	foo
	movq	-56(%rbp), %rax
	addq	$17, %rax
	movabsq	$7595996290029482849, %rcx
	movq	%rcx, (%rax)
	movabsq	$7022068847027319407, %rsi
	movq	%rsi, 8(%rax)
	movb	$0, 16(%rax)
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L4
	call	__stack_chk_fail
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
