#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.

NUM: variable de tipo entero. */

void main (void)
{
int NUM;
printf("Ingrese el número: ");
scanf("%d", &NUM);
if (NUM == 0)
printf("\nNUlo");
else
if (pow (-1, NUM) > 0)
printf("\nPar");
else 
printf("\nImpar");
}
