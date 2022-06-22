/*Implementar el programa anterior como un menú de opciones, en donde el valor 13 es Salir. Por ejemplo, 
si se ingresa el valor 1, mostrar “El signo de Aries es de Fuego” y mostrar nuevamente el menú, si se 
ingresa 15 mostrar “El valor ingresado no corresponde a una opción válida”, si se ingresa 13 se debe salir 
del programa. Sugerencia combinar do while y switch*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    int signo;
    printf("\nIngrese el numero que corresponde a su signo:\n1-->Aries\n2-->Tauro\n3-->Geminis\n4-->Cancer\n5-->Leo");
    printf("\n6-->Virgo\n7-->Libra\n8-->Escorpio\n9-->Sagitario\n10-->Capricornio\n11-->Acuario\n12-->Piscis\n13=Salir\n\n");
    do
    {
    scanf("%i",&signo);
    switch (signo)
        {
        case 1:
            printf("El signo de Aries es de Fuego\n\n");
            break;
        case 2:
            printf("El signo de Tauro es de Tierra\n\n");
            break;
        case 3:
            printf("El signo de Geminis es de Aire\n\n");
            break;
        case 4:
            printf("El signo de Cancer es de Agua\n\n");
            break;
        case 5:
            printf("El signo de Leo es de Fuego\n\n");
            break;
        case 6:
            printf("El signo de Virgo es de Tierra\n\n");
            break;
        case 7:
            printf("El signo de Libra es de Aire\n\n");
            break;
        case 8:
            printf("El signo de Escorpio es de Agua\n\n");
            break;
        case 9:
            printf("El signo de Sagitario es de Fuego\n\n");
            break;
        case 10:
            printf("El signo de Capricornio es de Tierra\n\n");
            break;
        case 11:
            printf("El signo de Acuario es de Aire\n\n");
            break;
        case 12:
            printf("El signo de Piscis es de Agua\n\n");
            break;
        case 13:
            printf("Usted salio del programa\n\n");
            break;
        default:
            printf("El valor ingresado no corresponde a una opción válida\n\n");
            break;
        }
    }while(signo!=13);
    return 0;
}