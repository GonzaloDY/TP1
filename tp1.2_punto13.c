/*Se ingresan N valores numéricos. Determinar y presentar por pantalla el mayor y el menor de los 
valores ingresados*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    int N;
    float num, menor=9999999, mayor=-9999999, *puntero1, *puntero2;
    printf("\nEspecifique la cantidad de numeros a controlar:\n");
    scanf("%i",&N);
    printf("\nIngrese los numeros a controlar:\n");
    while(N>0)
    {
        scanf("%f",&num);
        if(num<menor)
        {
            menor=num;
        }
        if(num>mayor)
        {
            mayor=num;
        }
        N--;
    }
    puntero1=&menor;
    puntero2=&mayor;
    printf("\nEl menor numero ingresado es: %.1f\nEl mayor numero ingresado es: %.1f\n\n", *puntero1, *puntero2);
    return 0;
}