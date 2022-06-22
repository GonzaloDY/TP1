/*Leer cuatro números, calcular y presentar por pantalla el producto, la suma y la media
aritmética (promedio) de los números ingresados*/

#include<stdio.h>

int main()
{
    float num1, num2, num3, num4;
    printf("\nIngrese 4 numeros:\t");
    scanf("%f %f %f %f",&num1,&num2,& num3,&num4);
    printf("\nEl producto de los numeros ingresados es: %.1f", num1*num2*num3*num4);
    printf("\nLa suma de los numeros ingresados es: %.1f", num1+num2+num3+num4);
    printf("\nLa media aritmetica de los numeros ingresados es: %.1f\n\n", (num1+num2+num3+num4)/4);
    return 0;
}