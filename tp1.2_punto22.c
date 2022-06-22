/*22: Ingresar N números (realizar el control de que N sea positivo), contabilizar cuántos números pares, impares y primos se encontraron, 
luego mostrar los resultados por pantalla. Utilizar una estructura como la siguiente: 
struct categorias
{ 
    int pares; 
    int impares; 
    int primos; 
}*/
#include<stdio.h>

typedef struct
{
    int pares; 
    int impares; 
    int primos; 
}categorias;

int main(int argc,char*argv[])
{
    categorias conteo;
    int cant, num, contador=0, i;
    conteo.pares=0;
    conteo.impares=0;
    conteo.primos=0;
    printf("\nEspecifique cuantos numeros ingresará:\n");
    do
    {
        scanf("%i",&cant);
        if(cant<=0)
        {
            printf("\nLa cantidad declarada no es valida, tiene que ser un numero positivo:\n");
        }
    }while(cant<=0);
    printf("\nIngrese %i numeros:\n",cant);
    while(cant>0)
    {
        scanf("%i",&num);
        if(num%2==0)
        {
            conteo.pares++;
        }else
        {
            conteo.impares++;
        }
        for(i=num;i>0;i--)
        {
            if(num%i==0)
            {
                contador++;
            }
        }
        if(contador==2)
        {
            conteo.primos++;
        }
        contador=0;
        cant--;
    }
    printf("\nSe ingresaron %i numeros pares, %i impares y %i numeros primos\v",conteo.pares,conteo.impares,conteo.primos);
    return 0;
}
