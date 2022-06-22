/*24: Implementar un programa para un hospital que registre el ingreso de pacientes a ser atendidos por COVID-19, el ingreso 
termina cuando se presione la tecla n. Utilizar una estructura como la siguiente: 
struct paciente 
{ 
    int codigoPaciente; 
    char nombre; (guardar un carácter) 
    char apellido; (guardar un carácter) 
    char resultadoTest; (P: positivo, N: negativo) 
}; 
Se pide calcular y mostrar por pantalla el porcentaje con resultado del test positivo*/

#include<stdio.h>

typedef struct
{
    int codigoPaciente; 
    char nombre;               //guardar un carácter
    char apellido;             //guardar un carácter
    char resultadoTest;        //P: positivo, N: negativo
}paciente;

int main(int argc, char*argv[])
{
    paciente persona;
    char control;
    int pos=0, neg=0;
    printf("\nPrograma para registrar el ingreso de pacientes a ser atendidos por COVID-19");
    do
    {
        printf("\nCodigo del paciente:\t");
        scanf("%i",&persona.codigoPaciente);
        fgetc(stdin);
        printf("Inicial del nombre:\t");
        scanf("%c",&persona.nombre);
        fgetc(stdin);
        printf("Inicial del apellido:\t");
        scanf("%c",&persona.apellido);
        fgetc(stdin);
        printf("Resultado del test (P: positivo, N: negativo):\t");
        scanf("%c",&persona.resultadoTest);
        fgetc(stdin);
        if(persona.resultadoTest=='P')
        {
            pos++;
        }
        else if(persona.resultadoTest=='N')
        {
            neg++;
        }
        printf("\nEl ingreso de pacientes terminará cuando se presione la tecla 'n',para continuar presione cualquier otra tecla:\t");
        scanf("%c",&control);
    }while(control!='n');
    printf("\nEl porcentaje de pacientes con resultados de test positivos es: %i%c\v",pos*100/(pos+neg),'%');
    return 0;
}