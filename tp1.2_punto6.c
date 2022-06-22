/*Implementar un programa que ayude a una empresa a calcular el nuevo sueldo de los trabajadores,
 al incrementarse el mismo de la siguiente manera: Si el empleado tiene un contrato con un sueldo: 
 a. De 0 a $35 000 se incremente un 20% b. De $35 000 a $65 000 se incremente un 10%*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    float sueldo;
    printf("\nIngrese el sueldo actual del empleado que recibira el aumento:\t");
    scanf("%f",&sueldo);
    if(sueldo>=0&&sueldo<35000)
    {
        sueldo*=1.2;
    }
    else if(sueldo>=3500&&sueldo<=65000)
    {
        sueldo*=1.1;
    }
    printf("\nEl nuevo sueldo del empleado sera de: %.1f\n\n",sueldo);
    return 0;
}