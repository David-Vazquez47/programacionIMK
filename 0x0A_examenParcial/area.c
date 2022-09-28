#include <stdio.h>
#include <math.h>
#include "main.h"

int area(float V, float Dn, float CA)
{
    float x, x2, A, CF, Dif, G;

    x = cbrt((2 * V) / (4 * M_PI));
    x2 = pow(x, 2);

    A = ((2 * M_PI * x2) + 2 * M_PI * x * (V / (M_PI * x2)));

    CF = A * 0.00245;
    G = V * Dn;
    Dif = CA - CF;

    printf("Radio de la tapa: %0.2f cm\n", x);
    printf("Area total de la lata: %0.2f cm2\n", A);
    printf("Costo de fabricacion: $ %0.2f\n", CF);
    printf("Costo anterior para lata de %0.f ml: $ %0.2f\n", V, CA);
    printf("Ahorro: $ %0.2f\n", Dif);
    printf("%0.f ml en gramos = %0.2f gr\n", V, G);
}