#include <stdio.h>
int main()
{
    float c = 0;
    float m = 0;
    float g = 0.264179;
    float t = 0;
    int n = 1;
    do
    {
        printf("Ingrese los litros degasolina consumidos\n");
        scanf("%f", &c);

        c = c * 0.264179;

        printf("Ingrese las millas recorridas\n");
        scanf("%f", &m);

        t = m / c;

        printf("Usted consume %f millas por galon\n", t);

        printf("¿Quiere repetir otra vez?\n 1 - Si \n 2 - No\n");
        scanf("%d", &n);

    }while (n == 1);
}