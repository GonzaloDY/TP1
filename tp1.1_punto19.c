/*Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores
ingresados*/

#include<stdio.h>
int main(int argc,char*argv[])
{
    int i, cant, num, mayor=-99999999, menor=99999999;
    printf("\nIngrese la cantidad de numeros a controlar:\t");
    scanf("%i",&cant);
    printf("\nIngrese los numeros a controlar:\n");
    for(i=0;cant>i;i++)
    {
        scanf("%i",&num);
        if(num>mayor)
        {
            mayor=num;
        }
        if(num<menor)
        {
            menor=num;
        }
    }
    printf("\nEl menor valor ingresado es: %i\nEl mayor valor ingresado es: %i\n\n",menor,mayor);
    return 0;
}