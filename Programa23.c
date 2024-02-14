#include <stdio.h>

/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en /n
cuenta la distancia entre las dos ciudade y el tiempo de permanencia /n
de pasajero.

DIS y TIE: bariables de tipo entero.
BIL: variable de tipo real. */

void main (void)
{
int DIS, TIE;
float BIL;
printf("Ingrese la destancia entre las ciudades y el tiempo de estancia: ");
scanf("%d %d", &DIS, &TIE);
if ((DIS*2 > 500) && (TIE > 10))
BIL = DIS * 2 * 0.19 * 0.8;
else
BIL = DIS * 2 * 0.19;
printf("\n\nCosto del billete: %7.2f", BIL);
}
