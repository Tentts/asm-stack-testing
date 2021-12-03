	.file	"funciones.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"ebp + 0x%x= 0x%x\n"
	.text
	.p2align 4,,15
.globl resta
	.type	resta, @function
resta:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	%ebx, -4(%ebp)
	movl	12(%ebp), %edx
	movl	8(%ebp), %ebx
	subl	%edx, %ebx
#APP
	mov (0x4)(%ebp), %ecx

#NO_APP
	movl	%ecx, 8(%esp)
	movl	$4, %edx
	movl	%edx, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
#APP
	mov (0x8)(%ebp), %ecx

#NO_APP
	movl	%ecx, 8(%esp)
	movl	$8, %eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
#APP
	mov (0xc)(%ebp), %edx

#NO_APP
	movl	%edx, 8(%esp)
	movl	$12, %edx
	movl	%edx, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
	movl	%ebx, %eax
	movl	-4(%ebp), %ebx
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	resta, .-resta
	.section	.note.GNU-stack,"",@progbits
	.ident	"GCC: (GNU) 3.3.4 (Debian 1:3.3.4-9ubuntu5)"
