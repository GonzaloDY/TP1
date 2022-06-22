/* Presentar por pantalla las letras que estén entre la "a" y la ''m" utilizando una estructura
"for". (No mostrar la a y m solo las intermedias)*/

#include<stdio.h>

int main(int argc, char*argv[])
{
  char letra;
  for(letra='b';letra<'m';letra++)
  {
    printf("%c\n",letra);
  }
    return 0;
}