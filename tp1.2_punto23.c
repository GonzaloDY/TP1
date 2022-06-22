/*23: En una fábrica se registra la información del mantenimiento de las N máquinas que posee la fábrica en una estructura como la siguiente: 
struct maquina
{ 
    int numeroMaquina; 
    char sector;
    int ultimoAnioMantenimiento; 
}; 
Se pide calcular y mostrar el porcentaje de máquinas cuyo último año de mantenimiento fue en el 2020.*/

#include<stdio.h>

typedef struct
{
    int numeroMaquina; 
    char sector;
    int ultimoAnioMantenimiento; 
}maquina;

int main(int argc, char*argv[])
{
    maquina maquinas;
    int num, contador=0, i;
    printf("\nIngrese la cantidad de maquinas que registrará:\n");
    do 
    {
        scanf("%i",&num);
        if(num<=0)
        {
            printf("\nEl valor de cantidad tiene que ser mayor a cero, ingrese otro valor\n");
        }
    }while(num<0);
    printf("\nA continuacion tendra que ingresar la información del mantenimiento de cada máquina");
    for(i=0; num>i; i++)
    {
        printf("\nNumero de maquina:\t");
        scanf("%i",&maquinas.numeroMaquina);
        fgetc(stdin);
        printf("Sector:\t");
        scanf("%c",&maquinas.sector);
        printf("Ultimo año de mantenimiento:\t");
        scanf("%i",&maquinas.ultimoAnioMantenimiento);
        if(maquinas.ultimoAnioMantenimiento==2020)
        {
            contador++;
        }
    }
    printf("\nEl porcentaje de maquinas cuyo último año de mantenimiento fue en el 2020 es del %i%c\v", contador*100/num, '%');
    return 0;
}