/*Codificar un programa para ingresar la altura, el ancho y largo de una caja y los 
almacene en una estructura. Luego calcular y presentar por pantalla el volumen de la caja.*/

#include<stdio.h>

typedef struct
{
    float alto;
    float ancho;
    float largo;
}caja;

int main(int argc, char*argv[])
{
    caja una_caja;
    float volumen;
    printf("\nIngrese la altura de la caja:\n    cm.\b\b\b\b\b\b\b");
    scanf("%f",&una_caja.alto);
    printf("\nIngrese el ancho de la caja:\n    cm.\b\b\b\b\b\b\b");
    scanf("%f",&una_caja.ancho);
    printf("\nIngrese el largo de la caja:\n    cm.\b\b\b\b\b\b\b");
    scanf("%f",&una_caja.largo);
    printf("\nEl volumen de la caja es %.1f  cm\v",una_caja.alto*una_caja.ancho*una_caja.largo);
    return 0;
}