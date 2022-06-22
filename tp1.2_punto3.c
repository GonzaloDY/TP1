/*Implementar el programa del ejercicio anterior considerando que el usuario puede introducir las opciones 
del 1 al 8, en donde 1- Lunes, 2- Martes, 3 -Miércoles, 4- Jueves, 5- Viernes, 6-Sábado, 7-Domingo, 8-Salir.
Ud debe mostrarlas en un menù y presentar por pantalla el mensaje correspondiente, solo debe salir del 
programa si el usuario presiona 8. Sugerencia combinar do while y switch.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int dia;
    printf("\nIngrese una de las siguientes opciones:\n1-Lunes\n2-Martes\n3-Miercoles");
    printf("\n4-jueves\n5-Viernes\n6-Sabado\n7-Domingo\n8-Salir\n");
    do
    {
        scanf("%i", &dia);
        switch (dia)
        {
        case 1:
            printf("El día ingresado es Lunes\n\n");
            break;
        case 2:
            printf("El día ingresado es Martes\n\n");
            break;
        case 3:
            printf("El día ingresado es Miercoles\n\n");
            break;
        case 4:
            printf("El día ingresado es Jueves\n\n");
            break;
        case 5:
            printf("El día ingresado es Viernes\n\n");
            break;
        case 6:
            printf("El día ingresado es Sabado\n\n");
            break;
        case 7:
            printf("El día ingresado es Domingo\n\n");
            break;
        case 8:
            printf("Usted salio del programa\n\n");
            break;
        default:
            printf("El valor ingresado no corresponde a un día de la semana\n\n");
            break;
        }
    } while (dia != 8);
    return 0;
}