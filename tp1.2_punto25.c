/*25: Implementar un programa para un hospital que registre el ingreso de pacientes a ser atendidos por COVID-19, 
el ingreso termina cuando se presione la tecla n o N. Utilizar una estructura como la siguiente: 
struct paciente 
{ 
    int codigoPaciente; 
    char nombre; (guardar un carácter) 
    char apellido; (guardar un carácter) 
    fecha fechaNacimiento (estructura con día, mes, año) 
    char resultadoTest; (P: positivo, N: negativo) 
}; 
Se pide contar y mostrar por pantalla la cantidad de pacientes mayores a 60 años con resultado del test positivo.*/

#include<stdio.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}fecha;
typedef struct
{
    int codigoPaciente; 
    char nombre;               //guardar un carácter
    char apellido;             //guardar un carácter
    fecha fechaNacimiento;      //estructura con día, mes, año
    char resultadoTest;        //P: positivo, N: negativo
}paciente;

int main(int argc, char*argv[])
{
    paciente persona;
    char control;
    int pos=0, neg=0, mayores=0;
    printf("\n--------Programa para registrar el ingreso de pacientes a ser atendidos por COVID-19 en el año 2022--------");
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
        printf("Fecha de nacimiento\nDia:\t");
        scanf("%i",&persona.fechaNacimiento.dia);
        printf("Mes:\t");
        scanf("%i",&persona.fechaNacimiento.mes);
        printf("Año:\t");
        scanf("%i",&persona.fechaNacimiento.anio);
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
        if(persona.resultadoTest=='P'&&persona.fechaNacimiento.anio<=1962)
        {
            mayores++;
        }
        printf("\nEl ingreso de pacientes terminará cuando se presione la tecla 'n' o 'N',para continuar presione cualquier otra tecla:\t");
        scanf("%c",&control);
    }while(control!='n'&&control!='N');
    printf("\nEl porcentaje de pacientes mayores a 60 años de edad con resultados de test positivos es: %i%c\v",mayores*100/(pos+neg),'%');
    return 0;
}