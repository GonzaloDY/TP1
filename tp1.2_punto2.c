/*Implementar un programa que solicite al usuario un número del 1 al 7, y luego muestre por pantalla a 
qué día de la semana corresponde, si no corresponde a ninguno mostrar un mensaje. Considerar el lunes el 
día 1 de la semana. Utilizar switch. Por ejemplo, si se ingresa el valor 1, mostrar “El día ingresado es 
Lunes”, si se ingresa 15 mostrar “El valor ingresado no corresponde a un día de la semana”*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    int dia;
    printf("\nIngrese un numero del 1 al 7:\n");
    scanf("%i",&dia);
    switch (dia)
    {
        case 1:
           printf("\nEl día ingresado es Lunes\n\n");
           break;
        case 2:
           printf("\nEl día ingresado es Martes\n\n");
           break;
        case 3:
           printf("\nEl día ingresado es Miercoles\n\n");
           break;
        case 4:
           printf("\nEl día ingresado es Jueves\n\n");
           break;
        case 5:
           printf("\nEl día ingresado es Viernes\n\n");
           break;
        case 6:
           printf("\nEl día ingresado es Sabado\n\n");
           break;
        case 7:
           printf("\nEl día ingresado es Domingo\n\n");
           break;
        default:
           printf("\nEl valor ingresado no corresponde a un día de la semana\n\n");
           break;
    }
    return 0;
}