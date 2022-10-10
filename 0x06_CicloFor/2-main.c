#include <stdio.h>

int main(void)
{
    int cantidad = 10;

    printf("Ingrese N \n");
    scanf("%d", &cantidad);

    for (int i = cantidad; i >= 2; i--)
    {
        printf("%d, ", i);
    }
    printf("0 ");

}