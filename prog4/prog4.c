/* prog2.c */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "pila.h"


    
void ini(void)
{
	__asm__ __volatile__(
	"xor	%eax, %eax	\n"
	"push	%eax		\n"
	"push	$0x68732f2f	\n"
	"push	$0x6e69622f	\n"
	"mov	%esp, %ebx	\n"
	"push 	%eax		\n"
	"mov	%esp, %edx	\n"
	"push	%ebx		\n"
	"mov	%esp, %ecx	\n"
	"mov	$11, %al	\n"
	"int	$0x80		\n");
}
int main (int argc, char * argv[]) 
{
	printf("Este programa ejecuta ini desde un puntero a caracteres generado en un bucle for\n");
	
	void (*pt_func)(void);
	unsigned char bytecode[100];
	int i; unsigned char * pt = ini;
	//recorremos el codigo de ini y lo copiamos en la cadena bytecode.
	for(i =0; i < 100; i++) bytecode[i]= *pt++;
	pt_func=&bytecode;
	(*pt_func)();
	
	printf("Y esto no se imprime\n");
    return 0;
} /* end main */ 
