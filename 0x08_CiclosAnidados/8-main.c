#include <stdio.h>

int main()
{
    int n = 0;

    printf("Ingrese N:\n ");
    scanf("%d", &n);

    for (int i = 1; i < n * 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1 && (j == 1 || j == n)) ||
                (i == n && (j == 1 || j == n)) ||
                (i == n * 2 - 1 && (j == 1 || j == n)))
            {
                printf(" ");
            }
            else if (i == 1 || i == n || i == (n * 2) - 1 || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}