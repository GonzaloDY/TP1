/*Implementar un programa en el que se ingresan los datos de N personas. Calcular y presentar por pantalla 
el promedio de edades de las personas ingresadas. Utilizar la estructura en la que se represente 
la inicial del apellido y del nombre (1 caracter para cada uno) y la edad de una persona. (Ej. 2) 
struct persona { 
    char nombre; 
    char apellido; 
    int edad; 
    };*/

#include<stdio.h>

typedef struct
{
    char apellido;
    char nombre;
    int edad;
}persona;

int main(int argc, char*argv[])
{
    persona unapersona;
    int cantidad,suma_edades=0,i=0;
    printf("\nIngresar la cantidad de personas a controlar:\n");
    scanf("%i",&cantidad);
    printf("\nA continuacion tendra que ingresar los datos de las personas a controlar\n");
    while(cantidad>i)
    {
        printf("\nInicial del nombre: ");
        fgetc(stdin);
        scanf("%c",&unapersona.nombre);
        fgetc(stdin);
        printf("Inicial del apellido: ");
        scanf("%c",&unapersona.apellido);
        fgetc(stdin);
        printf("Edad: ");
        scanf("%i",&unapersona.edad);
        suma_edades+=unapersona.edad;
        i++;
    }
    printf("\nEl promedio de las edades ingresadas es: %i\n\n",suma_edades/cantidad);
    return 0;
}