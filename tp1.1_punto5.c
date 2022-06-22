/*Convertir una medida (controlar que la misma sea positiva) dada en metros a sus
equivalentes en kilómetros y decámetros. Presentar por pantalla las tres magnitudes con
sus respectivas unidades*/

#include<stdio.h>

int main(int argc,char*argv[])
{
  float metros, decametros, kilometros;
  printf("\nIngrese una medida en metros:\t");
  scanf("%f", &metros);
  while(metros<0)
   {
    printf("\nIngrese un valor positivo para la medida:\t");
    scanf("%f", &metros);
   }
  decametros=metros/10;
  kilometros=metros/1000;
  printf("\nLa medida ingresada es: %.0f metros = %.2f decametros = %.4f kilometros\n\n", metros, decametros, kilometros);
    return 0;
}