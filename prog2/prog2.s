	.file	"prog2.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"resta(%d,%d) = %d\n"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	$100, %ecx
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$60, %edx
	andl	$-16, %esp
#APP
	pushl %ebx
pushl %ecx
pushl %edx

#NO_APP
	movl	%edx, %eax
#APP
	push %eax

#NO_APP
	movl	%ecx, %eax
#APP
	push %eax

	call resta
add $0x8, %esp

	popl %edx
popl %ecx
popl %ebx

#NO_APP
	movl	%eax, 12(%esp)
	movl	$100, %edx
	movl	$60, %eax
	movl	%eax, 8(%esp)
	movl	%edx, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
	movl	%ebp, %esp
	xorl	%eax, %eax
	popl	%ebp
	ret
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
	.ident	"GCC: (GNU) 3.3.4 (Debian 1:3.3.4-9ubuntu5)"
