/* Ingresar N caracteres, luego presentar por pantalla la cantidad de vocales*/

#include<stdio.h>
int main(int argc, char*argv[])
{
    int cantidad, contador=0, vocales=0;
    char letra; 
    printf("\nIngresar la cantidad de caracteres que digitara:\t");
    scanf("%i",&cantidad);
    printf("\nIngrese los caracteres a controlar:\n");
    while(cantidad>contador)
    {
        scanf("\n%c",&letra);
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        {
            vocales++;
        }
        contador++;        
    }
    printf("La cantidad de vocales ingresadas es: %i\n\n",vocales);
        return 0;
}
