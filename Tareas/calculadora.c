#include <stdio.h>
#include "main.h"
void main()
{
    int usu = 0;
    float primero = 0, segundo = 0, resultado = 0;
    printf("Introduzca el número respetcivo a la función a realizar\n");

    printf("  1  Sumar \n  2  Restar \n  3  Multilplicar \n  4  Dividir \n  5  Modulo \n");
    scanf("%d", &usu);

    if (usu <=5 && usu>= 1)
    {
        printf("Introduzca un numero ");
        scanf("%f", &primero);
        printf("Introduzca otro numero ");
        scanf("%f", &segundo);
    }
    else
    {
    }

    switch (usu)
    {
    case 1:
        resultado = suma(primero, segundo);
        printf("El resultado es: %f\n", resultado);
        break;
    case 2:
        resultado = resta(primero, segundo);
        printf("El resultado es: %f\n", resultado);
        break;

    case 3:
        resultado = mul(primero, segundo);
        printf("El resultado es: %f\n", resultado);
        break;

    case 4:
        resultado = div(primero, segundo);
        printf("El resultado es: %.2f\n", resultado);
        break;

    case 5:
        resultado = mod(primero, segundo);
        printf("El resultado es: %f\n", resultado);
        break;
    default:
        printf("Esta opción no esta disponible \n");
        break;
    }
}