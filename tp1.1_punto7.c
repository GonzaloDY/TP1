/*Solicitar al usuario el ingreso de un carácter, luego presentar por pantalla un mensaje que
indique si el carácter ingresado es o no una vocal.(Resolver este ejercicio utilizando
estructura if o switch)*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    char letra;
    printf("\nIngrese un carácter del alfabeto:\t");
    scanf("%c",&letra);
    
    if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
    {
      printf("\nEl carácter ingresado es una vocal\n\n");
    }
    else
    {
      printf("\nEl carácter ingresado no es una vocal\n\n");
    }
    
    return 0;
}