#include "main.h"
#include <stdio.h>

int main(void)
{
    int suma = 0;
    int resta = 0;
    int n1 = 0;
    int n2 = 0;

    printf("Ingrese un numero: \n");
    scanf("%i", &n1);
    printf("Ingrese un numero: \n");
    scanf("%i", &n2);

    suma = add(n1, n2);
    resta = minus(n1, n2);
    printf("El valor de la suma es: %d\nEl valor de la resta es: %d\n", suma, resta);

    return 0;
}
