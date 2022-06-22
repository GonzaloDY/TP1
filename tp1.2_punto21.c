/*Implementar un programa que solicite la fecha actual (almacenando en una variable estructura) Luego 
solicite y almacene en una estructura las iniciales y la fecha de nacimiento de una persona (ejemplo 20/6/1999).
Para finalizar presente por pantalla la edad en años de la persona, por ejemplo: La edad de S, M es xx anios. 
Es importante controlar el valor de los datos de entrada, por ejemplo los meses deben ir entre 1 y 12.*/

#include<stdio.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}fecha;

typedef struct
{
    char nombre;
    char apellido;
    fecha nacimiento;
}persona;

int main(int argc, char*argv[])
{
    fecha unafecha;
    persona unapersona;
    int edad;
    printf("\nIngrese la fecha actual");
    do
    {
        printf("\nDia:\t");
        scanf("%i",&unafecha.dia);
        printf("\nMes:\t");
        scanf("%i",&unafecha.mes);
        printf("\nAño:\t");
        scanf("%i",&unafecha.anio);
        if(unafecha.dia>31||unafecha.dia<1||unafecha.mes<1||unafecha.mes>12||unafecha.anio<0)
        {
            printf("\nEl dia debe ir entre 1 y 31, el mes entre 1 y 12 y el año tiene que ser un num. positivo:");
        }
    }while(unafecha.dia>31||unafecha.dia<1||unafecha.mes<1||unafecha.mes>12||unafecha.anio<0);
    printf("\nIngrese la inicial del nombre de la persona:\n");
    fgetc(stdin);
    scanf("%c",&unapersona.nombre);
    fgetc(stdin);
    printf("\nIngrese la inicial del apellido de la persona:\n");
    scanf("%c",&unapersona.apellido);
    printf("\nIngrese la fecha de nacimiento de la persona:\n");
    do
    {
        printf("\nDia:\t");
        scanf("%i",&unapersona.nacimiento.dia);
        printf("\nMes:\t");
        scanf("%i",&unapersona.nacimiento.mes);
        printf("\nAño:\t");
        scanf("%i",&unapersona.nacimiento.anio);
        if(unapersona.nacimiento.dia>31||unapersona.nacimiento.dia<1||unapersona.nacimiento.mes<1||unapersona.nacimiento.mes>12||unapersona.nacimiento.anio<0)
        {
            printf("\nEl dia debe ir entre 1 y 31, el mes entre 1 y 12 y el año tiene que ser un num. positivo:");
        }
    }while(unapersona.nacimiento.dia>31||unapersona.nacimiento.dia<1||unapersona.nacimiento.mes<1||unapersona.nacimiento.mes>12||unapersona.nacimiento.anio<0);
    edad=unafecha.anio-unapersona.nacimiento.anio;
    printf("\nLa edad de %c, %c es: %i años\v",unapersona.nombre,unapersona.apellido,edad);
    return 0;
}

