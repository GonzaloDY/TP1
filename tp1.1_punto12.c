/*Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura
"for"*/

#include<stdio.h>

int main(int argc,char*argv[])
{
    int i;
    for(i=2;i<=40;i=i+2)
    {
      printf("\n%i",i);
    }  
    return 0;
}