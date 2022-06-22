/* Ingresar un número positivo (realizar este control), luego presentar por pantalla el número
ingresado y su invertido. Ejemplo: si se ingresa el número 5219 -> el invertido es 9125*/

#include<stdio.h>
int main(int argc, char*argv[])
{
    int numero, invertido=0;
    do
    {
        printf("\nIngrese un numero entero positivo:\t");
        scanf("%i", &numero);
    }while(numero<=0);    
    while(numero>=1)
    {
        invertido=numero%10+invertido*10;
        numero=numero/10;
    }
    printf("\nEl invertido del numero ingresado es: %i\n\n",invertido);
    return 0;
}