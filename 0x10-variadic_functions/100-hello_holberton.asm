	.file	"100-hello_holberton.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Hello, Holberton\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$18, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	write
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
