#include <stdio.h>

int main(void)
{
    int cantidad = 10;
    int total = 0;

    printf("Ingrese N \n");
    scanf("%d", &cantidad);

    for (int i = 1; i <= cantidad ; i++)
    {
        total = total + i;
    }
    printf("La suma de todos los numeros naturales entre 1-%d: %d \n", cantidad, total);
}