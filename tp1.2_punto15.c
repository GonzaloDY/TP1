/*Implementar un programa en el que se soliciten el radio de la base y la altura de un cilindro 
circular y luego se presenten por pantalla. Usar una estructura como la siguiente: 
struct cilindro{ 
    float radio 
    float altura; 
    };*/

#include<stdio.h>

typedef struct
{
    float radio;
    float altura;
}cilindro;

int main(int argc, char*argv[])
{
    cilindro cil;
    printf("\nIngrese el radio de un cilindro en centimetros:\n");
    scanf("%f",&cil.radio);
    printf("\nIngrese la altura de un cilindro en centimetros:\n");
    scanf("%f",&cil.altura);
    printf("\nEl radio del cilindro es: %.1fcm.",cil.radio);
    printf("\nLa altura del cilindro es: %.1fcm.\n\n",cil.altura);
    return 0;
}