/*Leer un valor decimal (float) por teclado y luego presentar por pantalla un mensaje y el
valor del número. Por ejemplo, si el número es 15.8, deberá presentar “El valor ingresado
es 15.8”*/

#include<stdio.h>

int main()
{
    float numero;
    printf("\nIngrese un numero decimal:\t");
    scanf("%f",&numero);
    printf("\nEl valor ingresado es: %.1f\n\n", numero);
    return 0;
}