#include <stdio.h>

/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada /n
en acres, la convierte en hectáreas.

ECA: variable de tipo real. */
 void  main (void)
{
float ECA;
printf("Ingrese la extensión de la estancia: ");
scanf("%f", &ECA);
ECA =ECA * 4047 / 10000;
printf("\nExtensión de la estancia en hectáreas: %5.2f", ECA);
}
