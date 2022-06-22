/*Ingresar un número entero, luego presentar por pantalla un mensaje indicando si dicho
número es igual a cero, positivo o negativo*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    int numero;
    printf("Ingrese un numero entero:\n");
    scanf("%i",&numero);
    if(numero<0)
    {
      printf("\nEl numero ingresado es negativo\n\n");
    }
    else if(numero==0)
    {
      printf("\nEl numero ingresado es igual a cero\n\n");
    }
    else if(numero>0)
    {
      printf("\nEl numero ingresado es positivo\n\n");
    }
    return 0;
}