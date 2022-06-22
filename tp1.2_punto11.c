/*Realizar un programa que solicite por teclado, dos números enteros. Luego realizar las operaciones 
de suma, resta, división real, división entera, resto de la división entera y multiplicación entre 
ambos valores ingresados, recordar que en la división, el denominador no debe ser igual a cero. 
Presentar por pantalla los resultados*/

#include<stdio.h>

int main(int argc, char*argv[])
{
    float num1, num2,*puntero1,*puntero2;
    printf("\nIngrese dos numeros enteros:\t");
    scanf("%f %f",&num1,&num2);
    puntero1=&num1;
    puntero2=&num2;
    printf("\n%.0f + %.0f = %.0f",*puntero1,*puntero2,*puntero1+*puntero2);
    printf("\n%.0f - %.0f = %.0f",*puntero1,*puntero2,*puntero1-*puntero2);
    if(num2!=0)
    {
        printf("\nDivision real: %.0f / %.0f = %.2f",*puntero1,*puntero2,*puntero1/ *puntero2);
        printf("\nDivision entera: %.0f / %.0f = %.0f",*puntero1,*puntero2,*puntero1/ *puntero2);
    }else if(num1!=0)
    {
        printf("\nDivision real: %.0f / %.0f = %.2f",*puntero2,*puntero1,*puntero2 / *puntero1);
        printf("\nDivision entera: %.0f / %.0f = %.0f",*puntero2,*puntero1,*puntero2 / *puntero1);
    }
    if(num1==0&&num2==0)
    {
        printf("\nNo es posible realizar la division entre dos numeros cuando el denominador es igual a cero\n\n");
    }
    return 0;
}