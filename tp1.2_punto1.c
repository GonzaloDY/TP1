/*Implementar un programa que solicite al usuario un número del 1 al 7, y luego muestre por pantalla 
a qué día de la semana corresponde, si no corresponde a ninguno mostrar un mensaje. Considerar el lunes 
el día 1 de la semana. NO utilizar switch. Por ejemplo, si se ingresa el valor 1, mostrar “El día 
ingresado es Lunes”, si se ingresa 15 mostrar “El valor ingresado no corresponde a un día de la semana”*/

#include<stdio.h>
int main(int argc, char*argv[])
{
    int dia;
    printf("Ingrese un numero del 1 al 7:\n");
    scanf("%i",&dia);
    if(dia==1)
    {
        printf("\nEl dia ingresado es Lunes\n");
    }else if(dia==2)
    {
        printf("\nEl dia ingresado es Martes\n");
    }else if(dia==3)
    {
        printf("\nEl dia ingresado es Miercoles\n");
    }else if(dia==4)
    {
        printf("\nEl dia ingresado es Jueves\n");
    }else if(dia==5)
    {
        printf("\nEl dia ingresado es Viernes\n");
    }else if(dia==6)
    {
        printf("\nEl dia ingresado es Sabado\n");
    }else if(dia==7)
    {
        printf("\nEl dia ingresado es Domingo\n");
    }else
    {
        printf("\nEl valor ingresado no corresponde a un dia de la semana\n");
    }
    return 0;
}