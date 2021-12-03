/* prog2.c */
#include <stdio.h>
#include <stdlib.h>


    
unsigned char bytecode [] = "\x55\x89\xe5\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80\x5d\xc3\x90\x90";
int main (int argc, char * argv[]) 
{
	printf("Este programa ejecuta ini desde un puntero a caracteres definido en el .c\n");
		
	int (*pt_func)() = (int(*)())bytecode;
	pt_func();
	
	printf("Y esto no se imprime nunca\n");
    return 0;
} /* end main */ 



