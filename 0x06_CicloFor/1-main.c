#include <stdio.h>

int main(void)
{
    int cantidad = 10;

    printf("Ingrese N \n");
    scanf("%d", &cantidad);

    for (int i = 1; i <= (cantidad - 1); i++)
    {
        printf("%d, ", i);
    }
    printf("%d ", cantidad);
}