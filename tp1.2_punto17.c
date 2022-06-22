/*Definir una estructura cuyos campos permitan guardar la cantidad de caracteres que sean vocales y la 
cantidad que sean consonantes. Luego debe ingresar N caracteres, y contabilizar en la estructura 
definida los caracteres de acuerdo a su tipo (vocales o consonantes). Nota: Para resolver es importante
Investigar! ¿Qué librería se requiere para el uso de funciones que permitan evaluar caracteres? 
¿Para qué usamos el fgetc(stdin)? ¿Qué otra instrucción se podrá utilizar?*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int vocal;
    int consonante;
}letras;
int main(int argc,char*argv[])
{
    letras letra;
    char caracter;
    int cant,i=0;
    letra.vocal=0;
    letra.consonante=0;
    printf("\nDefinir la cantidad de caracteres a controlar:\n");
    scanf("%i",&cant);
    printf("\nIngrese los caracteres:\n");
    while(cant>i)
    {        
        fgetc(stdin);
        scanf("%c",&caracter);
        if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u')
        {
            letra.vocal++;
        }
        else
        {
            letra.consonante++;
        }
        cant--;
    }
    printf("\nLa cantidad de vocales es %i",letra.vocal);
    printf("\nLa cantidad de consonantes es %i\n\n",letra.consonante);
    return 0;
}