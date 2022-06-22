/*Ingresar un número entero, luego asignar la dirección de memoria de dicha variable a una variable puntero. 
Presentar por pantalla la información que contiene la variable puntero (dirección e indirección) y la 
variable entera almacenada*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    int num, *puntero1;
    printf("\nIngrese un numero entero:\n");
    scanf("%i",&num);
    puntero1=&num;
    printf("\nLa direccion de memoria del numero ingresado usando '&' es:%p",&num);
    printf("\nLa direccion de memoria del puntero usado es:%p",puntero1);
    printf("\nEl numero ingresado es %i\n\n",num);
    return 0;
}