/*Cargar en una variable index un valor constante, declarar dos punteros. Asignarle al primer puntero 
la dirección de memoria de la variable index, luego copiar el contenido del primer puntero al segundo 
puntero declarado. Mostrar por pantalla el contenido de cada una de las variables*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    float index, *puntero1, *puntero2;
    index=1234;
    puntero1=&index;
    puntero2=puntero1;
    printf("\nEl contenido de la variable constante index es: %.1f",index);
    printf("\nEl contenido del puntero1 es: %.1f\nEl contenido del puntero2 es: %.1f\n\n",*puntero1,*puntero2);
    return 0;
}