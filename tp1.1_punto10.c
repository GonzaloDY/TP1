/*Realizar un programa que solicite una fecha (ingresando día, mes y año), luego deberá realizar un control de la misma para considerarla válida, es decir que el valor numérico de
día, mes y año sean positivos; día no debe superar el valor 31 y mes el valor 12. El
programa deberá mostrar el mensaje correspondiente para cada caso*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    int dia,mes,anio;
    printf("\nIngrese una fecha valida(dia no debe superar el valor 31, mes el valor 12 y año debe ser un numero positivo)");
    printf("\nDia:\t");
    scanf("%i",&dia);
    while(dia<=0||dia>31)
    {
        printf("\nIngrese un dia valido:\t");
        scanf("%i",&dia);
    }
    printf("\nMes:\t");
    scanf("%i",&mes);
    while(mes<=0||mes>12)
    {
        printf("\nIngrese un mes valido:\t");
        scanf("%i",&mes);
    }
    printf("\nAño:\t");
    scanf("%i",&anio);
    while(anio<=0)
    {
        printf("\nIngrese un año valido:\t");
        scanf("%i",&anio);
    }
    printf("\nLa fecha ingresada es: %i/%i/%i\n\n",dia,mes,anio);
    return 0;
}

