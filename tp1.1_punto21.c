/* Mostrar un mensaje al usuario de acuerdo a la opción ingresada, la misma debe ser un
caracter (a,b,c,d). Para esto debe emplear la estructura switch con las opciones de:
a. “Hola mundo!!!”
b. “Programación en la FACET”
c. “El lenguaje C”
d. “Editar, compilar y ejecutar”*/

#include <stdio.h>
int main(int argc,char*argv[])
{
    char letra;
    printf("\nIngrese una de las siguientes opciones:\na\t\tb\nc\t\td\n\n");
    scanf("%c",&letra);
    fgetc(stdin);
   switch(letra)
   {
       case 'a':
          printf("Hola mundo!!!\n");
          break;
       case 'b':
           printf("Programación en la FACET\n");
          break;
       case 'c':
          printf("El lenguaje C\n");
          break;
       case 'd':
          printf("Editar, compilar y ejecutar\n");
          break;
       default:
          printf("La opcion ingresada no es valida\n");
   }
    return 0;
}