/* Mostrar un mensaje al usuario de acuerdo a la opción ingresada, la misma debe ser un
caracter (a,b,c,d). Para esto debe emplear la estructura switch con las opciones de:
a. “Hola mundo!!!”
b. “Programación en la FACET”
c. “El lenguaje C”
d. “Editar, compilar y ejecutar”*/

#include <stdio.h>
int main(int argc, char *argv[])
{
   int num, i;
   do
   {
      printf("\nIngrese un numero entero positivo:\t");
      scanf("%i",&num);
   }while (num <= 0);
   for(i=0;num>i;num-=2)
   {
      if(num==0)
      {
         printf("\nEl numero ingresado es par\n\n");
      }
      else if(num==1)
      {
         printf("\nEl numero ingresado es impar\n\n");
      }
   }
   return 0;
}