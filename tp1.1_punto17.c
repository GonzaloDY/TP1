/*Ingresar N números enteros de 3 cifras. Verificar que el número ingresado sea de 3 dígitos y
obtener el último dígito de cada número ingresado, luego mostrarlo por pantalla*/

#include<stdio.h>
int main(int argc, char*argv[])
{
    int N, numero, contador=1;
    printf("\nIngrese la cantidad de numeros a controlar:\n");
    scanf("%i",&N);
    printf("\nIngrese %i numeros de 3 cifras:",N);
    while(N>=contador)
    {
        printf("\nNumero %i:\n",contador);
        scanf("%i",&numero);
        if(numero<=100||numero>=1000)
        {
            printf("\nEl numero ingresado tiene que ser de 3 cifras, ingrese otro numero:\n");
            scanf("%i",&numero);
        }
        printf("Ultima cifra: %i\n\n",numero%10);
        contador++;
    }
 return 0;
}