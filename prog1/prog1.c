/* Tentts | snell191198@gmail.com */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{


	double valor;
    	printf("Argumento 1 (texto): %s\n", argv[1]);   
    	valor= atof(argv[1]);
    	printf("Argumento 1 (número): %.2f\n", valor);
    	printf("Función: sqrt(%.2f) = %.2f\n", valor, sqrt(valor));    
    	return 0;

}
