/*Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura "do
while"*/

#include<stdio.h>

int main(int argc,char*argv[])
{
  int i=2;
  do
  {     
    printf("\n%i",i);
    i=i+2;
  }while(i<=40);
  return 0;
}