/*Realizar un programa que solicite el ingreso de un número entero y verifique que el mismo
sea mayor que 0 y menor que 50. Si no se encuentra en el rango indicado, solicitar
nuevamente el valor, hasta que se cumpla la condición*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    int num;
    printf("\nIngrese un numero entero:\t");
    scanf("%i",&num);
    while(num<=0||num>=50)
    {  
        printf("\nEl numero ingresado es mayor o igual a 50, o menor o igual a 0");
        printf("\ningrese otro numero:\t");
        scanf("%i",&num);      
    }
    if(num>0&&num<50)
    {
        printf("\n%i es mayor a 0 y menor a 50\n\n",num);
    }
    return 0;
}