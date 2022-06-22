/*Leer un valor entero por teclado y luego presentar por pantalla un mensaje y el valor del
número. Por ejemplo, si el número es 15, deberá presentar “El valor ingresado es 15”*/

#include<stdio.h>

int main()
{
  int numero;
  printf("\nIngrese un numero entero:\t");
  scanf("%i",&numero);
  printf("\nEl número ingresado es %i\n\n",numero);
   return 0;
}