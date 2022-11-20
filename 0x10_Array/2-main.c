#include <stdio.h>
#include <math.h>

// You must link your code with the -lm option.

void triangulo(float a, float b, float c)
{
    float s = 0;
    float p = 0;
    float n = 0;

    if (a > 0 && b > 0 && c > 0)
    {
        s = (a + b + c) / 2;
        p = a + b + c;
        n = s * (s - a) * (s - b) * (s - c);
        a = sqrt(n);

        printf("El perimetro del triangulo es: %f\n", p);
        printf("El area del triangulo es: %f\n", a);
    }
    else
    {
        printf("El triangulo no existe.\n");
    }
}

int main()
{

    float a = 0;
    float b = 0;
    float c = 0;

    printf("Escriba la longitud del lado A:\n");
    scanf("%f", &a);
    printf("Escriba la longitud del lado B:\n");
    scanf("%f", &b);
    printf("Escriba la longitud del lado C:\n");
    scanf("%f", &c);

    triangulo(a,b,c);
}

