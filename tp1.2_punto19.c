/*Ingresar un conjunto no establecido de números, la carga debe terminar cuando se ingrese un cero; 
luego presentar por pantalla el menor y el mayor valor de los números ingresados, indicando el orden 
en que ingresaron. Utilizar una estructura como la siguiente para almacenar los resultados: 
struct num
{ 
    int valor; 
    int posicion; 
};*/

#include<stdio.h>

typedef struct
{
    int valor;
    int posicion;
}num;

int main(int argc, char*argv[])
{
    num numero;
    int mayor=-9999999, menor=9999999,posmayor,posmenor;
    numero.posicion=0;
    printf("\nIngresar los numeros a controlar (el control finalizara en cuanto se ingrese un cero):\n");
    do
    {
        scanf("%i",&numero.valor);
        numero.posicion++;
        if(numero.valor>mayor&&numero.valor!=0)
        {
            mayor=numero.valor;
            posmayor=numero.posicion;
        }
        if(numero.valor<menor&&numero.valor!=0)
        {
            menor=numero.valor;
            posmenor=numero.posicion;
        }
    }while(numero.valor!=0);
    if(numero.posicion==1)
    {
        printf("\nEl unico valor ingresado fue el cero\n\n");
    }
    else
    {
        printf("\nEl menor valor ingresado es %i, fue el %i° numero ingresado",menor,posmenor);
        printf("\nEl mayor valor ingresado es %i, fue el %i° numero ingresado\n\n",mayor,posmayor);
    }
    return 0;
}