#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{

    float V, c;
    int T;

    printf("Elige el tipo de producto:\n - 1 - Aceite\n - 2 - Alcohol\n - 3 - Gasolina\n - 4 - Acetona\n");
    scanf("%d", &T);

    printf("Ingresa el volumen a envasar:\n");
    scanf("%f", &V);

    if (V == 500)
    {
        c = 1.006;
    }
    else if (V == 1000)
    {
        c = 1.6816;
    }
    else if (V == 1500)
    {
        c = 1.9610;
    }
    else
    {
        c = 3.1038;
    }

    switch (T)
    {
    case 1:
        area(V, 0.9, c);
        break;
    case 2:
        area(V, 0.8, c);
        break;
    case 3:
        area(V, 0.68, c);
        break;
    case 4:
        area(V, 0.79, c);
        break;
    default:
        printf("Opcin no disponible\n");
        break;
    }
}