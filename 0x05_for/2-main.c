#include <stdio.h>

/*
Programa que pida n numeros y calcule el promedio de esos numeros
*/

int main(void)
{
    int cantidad = 0;
    int n1 = 0;
    int acumulado = 0;

    printf("ingrese la cantidad de numeros a promediar \n");
    scanf("%d",&cantidad);

    for(int i=0; i<cantidad;i++)
    {
        printf("ingrese un numero \n");
        scanf("%d",&n1);

        acumulado = n1 + acumulado;
        printf("El acumulado hasta ahora es: %d\n", acumulado);
    }

    float promedio = ((float)acumulado/(float)cantidad);
    printf ("El promedio es: %0.2f\n", promedio);

    return(0);
}