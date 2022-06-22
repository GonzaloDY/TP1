/*Ingresar un número real base y un número entero positivo exponente presentar por 
pantalla el valor de base elevado al valor de exponente. Utilizar una estructura 
para representar el par de valores base y exponente*/

#include<stdio.h>
#include <math.h>

typedef struct
{
    float base;
    int exponente;
}potencia;

int main(int argc, char*argv[])
{
    potencia num;
    printf("\nIngrese la base de la potencia:\n");
    scanf("%f",&num.base);
    printf("\nIngrese el exponente de la potencia:\n");
    do
    {
        scanf("%i",&num.exponente);
        if(num.exponente<=0)
        {
            printf("\nEl exponente de una potencia debe ser positivo, ingrese un exponente valido:\n");
        }
    }while(num.exponente<=0);
    printf("\n%.1f elevado al %i es: %.1f\n\n",num.base,num.exponente,pow(num.base,num.exponente));
    return 0;
}