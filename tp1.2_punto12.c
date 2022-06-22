/*Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos negativos y 
cuantos iguales a cero*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    int N, num_pos=0, num_neg=0, cero=0, *puntero1, *puntero2, *puntero3;
    float num;
    puntero1=&num_pos;
    puntero2=&num_neg;
    puntero3=&cero;
    printf("\nEspecifique la cantidad de numeros a controlar:\n");
    scanf("%i",&N);
    printf("\nIngrese los numeros a controlar:\n");
    while(N>0)
    {
        scanf("\n%f",&num);
        if(num>0)
        {
            num_pos++;
        }
        else if(num<0)
        {
            num_neg++;
        }
        else
        {
            cero++;
        }
        N--;
    }
    printf("\nSe ingresaron %i numeros positivos, %i negativos y %i ceros\n\n", *puntero1, *puntero2, *puntero3);
    return 0;
}