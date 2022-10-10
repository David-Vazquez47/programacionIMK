#include <stdio.h>

int main(void)
{
    int cantidad = 10;
    int total = 0;

    printf("Ingrese N \n");
    scanf("%d", &cantidad);

    for (int i = 1; i <= cantidad; i++)
    {
        if (i % 2 != 0)
        {
            total = total + i;
        }
    }
    printf("La suma de los numeros impares es: %d \n", total);
}