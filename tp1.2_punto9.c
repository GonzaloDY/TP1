/*Ingresar un número entero, luego presentar por pantalla el valor duplicado de dicho Número*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    int num, *puntero1;
    printf("\nIngrese un numero entero:\t");
    scanf("%i",&num);
    puntero1=&num;
    printf("\nEl valor duplicado del numero ingresado es: %i\n",*puntero1*2);
    return 0;
}