/*Dados tres valores positivos, indicar si son lados de un triángulo rectángulo. Presentar por
pantalla el mensaje correspondiente. Resolver el problema sin usar math.h*/

#include <stdio.h>

int main(int argc, char *argv[])
{
  float l1, l2, l3;

  do
  {
    printf("\nIngrese 3 valores positivos:\t");
    scanf("%f %f %f", &l1, &l2, &l3);
  } while (l1 < 0 || l2 < 0 || l3 < 0);

  if (l1 == 0 || l2 == 0 || l3 == 0 || l1 * l1 != l2 * l2 + l3 * l3 && l2 * l2 != l1 * l1 + l3 * l3 && l3 * l3 != l2 * l2 + l1 * l1)
  {
    printf("\nLos valores ingresados no son los lados de un triangulo\n\n");
  }
  else
  {
    printf("\nLos valores ingresados son los lados de un triangulo\\n\n");
  }

  return 0;
}