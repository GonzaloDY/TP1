/*Ingresar tres caracteres, ordenarlos en forma ascendente y presentarlos por pantalla. En
caso de ser los tres iguales, imprimir un mensaje que diga: Son iguales*/

#include<stdio.h>

int main(int argc, char*argv[])
{
  char letra1, letra2, letra3;
  printf("Ingrese 3 caracteres:\n");
  scanf("%c %c %c",&letra1,&letra2,&letra3);
  if(letra1==letra2&&letra2==letra3)
  {
    printf("\nLos caracteres ingresados son iguales\n");
  }
  else if(letra1<=letra2&&letra2<=letra3)
  {
    printf("\n%c\t%c\t%c\n",letra1,letra2,letra3);
  }
  else if(letra1<=letra3&&letra3<=letra2)
  {
    printf("\n%c\t%c\t%c\n",letra1,letra3,letra2);
  }
  else if(letra2<=letra1&&letra1<=letra3)
  {
    printf("\n%c\t%c\t%c\n",letra2,letra1,letra3);
  }
  else if(letra2<=letra3&&letra3<=letra1)
  {
    printf("\n%c\t%c\t%c\n",letra2,letra3,letra1);
  }
  else if(letra3<=letra1&&letra1<=letra2)
  {
    printf("\n%c\t%c\t%c\n",letra3,letra1,letra2);
  }
  else if(letra3<=letra2&&letra2<=letra1)
  {
    printf("\n%c\t%c\t%c\n",letra3,letra2,letra1);
  }
  return 0;
}