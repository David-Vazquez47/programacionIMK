#include <stdio.h>
#include "main.h"

int prim(int a)
{
    int c, n, p;


    for (n = 1; n <= a; n++)
    {
        p = 1;
        c = 2;

        for (int i = 2; i < n; i++)
        {
            if (n % c == 0)
            {
                p = 0;
            }
            c++;
        }
            if (p)
            {
                printf("Es un numero primo: %d \n", n);
            }
    }
}