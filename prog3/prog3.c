/* prog2.c */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "pila.h"


int main (int argc, char * argv[]) 
{
    int e;
    int p1, p2;
	
	/*
    p1= atoi(argv[1]);
    p2= atoi(argv[2]);
    e= resta(p1,p2);
    printf("resta(%d,%d) = %d\n", p1, p2, e);
	*/

    p1=100;
    p2=60;
	printf("Este programa se salta un printf\n");
	guarda_registros();
	parametro(p2);
	parametro(p1);
	salto(resta, salida);
	
	printf("Esto no se imprime\n");
	
	destino(salida, e);
	recupera_registros();

    printf("resta(%d,%d) = %d\n", p1, p2, e);



    return 0;
} /* end main */ 

