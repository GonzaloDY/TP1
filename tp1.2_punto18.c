/*Codificar un programa para: ingresar dos números N y D enteros positivos. Debe realizar el control 
del ingreso de datos, luego calcular el valor del cociente y resto entre N y D utilizando el método de 
restas sucesivas. Para almacenar y mostrar por pantalla el resultado utilizar la siguiente estructura: 
struct dividir{ 
    float cociente; 
    int resto; 
};
*/

#include<stdio.h>

typedef struct
{
    float cociente;
    int resto;
}dividir;

int main(int argc, char*argv[])
{
    dividir div;
    int num1, num2;
    div.cociente=0;
    printf("\nIngrese dos numeros enteros positivos:\n");
    do
    {
        scanf("%i",&num1);
        if(num1<=0)
        {
            printf("\nLos numeros tienen que ser mayores a cero, ingrese otro valor:\n");
            scanf("%i",&num1);
        }
        scanf("%i",&num2);
        if(num2<=0)
        {
            printf("\nLos numeros tienen que ser mayores a cero, ingrese otro valor:\n");
            scanf("%i",&num2);
        }
    }while(num1<=0||num2<=0);
    while(num1>=num2)
    {
        num1-=num2;
        div.cociente++;
    }
    div.resto=num1;
    printf("\nEl cociente de los numeros ingresados es igual a %.0f\nEl resto de los numeros ingresados es %i\n\n",div.cociente,div.resto);
    return 0;
}