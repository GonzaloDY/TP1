/*Ingresar un número entero, luego utilizando una variable tipo puntero, presentar por pantalla el valor 
ingresado, el domicilio de memoria en donde se aloja dicho valor y el domicilio de memoria del puntero 
utilizado*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    int numero, *puntero1;
    printf("\nIngrese un numero entero:\t");
    scanf("%i",&numero);
    puntero1 = &numero;
    printf("\nEl numero ingresado es: %i",*puntero1);
    printf("\nEl domicilio de memoria donde se aloja el numero ingresado es: %p",puntero1);
    printf("\nEl domicilio de memoria del puntero usado es: %p\n\n",&numero);
    return 0;
}