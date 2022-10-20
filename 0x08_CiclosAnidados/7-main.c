
#include <stdio.h>

int main(void)
{
    int n = 0;

    printf("Ingrese N \n");
    scanf("%d", &n);

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 1; j <= (n - 1); j++)
        {
            printf(" ");
        }
        printf("+\n");
    }

    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("+");
    }

    printf("\n");

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 1; j <= (n - 1); j++)
        {
            printf(" ");
        }
        printf("+\n");
    }
    printf("\n");
}