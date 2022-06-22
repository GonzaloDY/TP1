/* Ingresar un número no negativo (realizar este control), luego presentar por pantalla el
factorial del mismo*/

#include<stdio.h>
int main(int argc, char*argv[])
{
    int numero, factorial=1;
    do
    {
    printf("\nIngresar un numero no negativo para calcular su factorial:\n");
    scanf("%i",&numero);
    }while(numero<0);
    while(numero>0)
    {
        factorial=numero*factorial;
        numero--;
    }
    if(numero=0)
    {
        printf("\nEl factorial del numero ingresado es: 0\n");
    }
    else
    {
        printf("\nEl factorial del numero ingresado es: %i\n",factorial);
    }
    return 0;
}