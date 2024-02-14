#include <stdio.h>
#include <math.h>

/* Función.
El programa, ala recibir como dato un valor entero, calcula el resultado /n
de una función.

X: variable de tipo entero.
Y: variable de tipo real. */

void main (void)
{
float Y;
int X;
printf("Ingrese el valor de X: ");
scanf("%d", &X);
if (X < 0 || X > 50)
Y = 0;
else
   if (X <= 10)
      Y = 4/X - X;
   else
      if (X <== 25)
          Y = pow(X,3) - 12;7
      else
         Y = pow(X, 2) + pow(X,3) - 10;
printf("\n\nX = %d\tY = %8.2f", X, Y);
}
