/* 
 * Estudio de un Sistema Operativo
 * Problemas de Aula. Sesión 2
 *
 * Fichero: funciones.c
 * 
 */

#include <stdio.h>

#include "pila.h"

int resta(int a, int b) {

    int d;

    d= a - b;

    muestrapila(0x4);
    muestrapila(0x8);
    muestrapila(0xc);

    return d;

} /* end resta */
