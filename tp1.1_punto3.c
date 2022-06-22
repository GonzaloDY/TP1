/*Leer un carácter por teclado y luego presentar por pantalla un mensaje con la siguiente
leyenda "El carácter es …(mostrar el carácter ingresado)"*/

#include<stdio.h>

int main()
{
    char letra;
    printf("\nIngrese una letra:\t");
    scanf("%c",&letra);
    printf("\nEl caracter ingresado es: %c\n\n",letra);
    return 0;
}