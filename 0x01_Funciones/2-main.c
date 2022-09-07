#include "main.h"
#include <stdio.h>

int main(void)
{
    int suma;
    int resta;

    suma = add(12, 10);
    resta = minus(12,10);
    printf("El valor de la suma es: %d\nEl valor de la resta es: %d\n",suma,resta);


    return 0;
}
