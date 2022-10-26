#include <stdio.h>
#include <ctype.h>

int main()
{
    char d = ' ';
    int h = 0, t = 0, Do = 0;
    float c = 0, tt = 0;

    do
    {
        printf("Indique el dia de la semana \n - L - Lunes\n - M - Martes\n - X - Miercoles\n - J - Jueves\n - V - Viernes\n - S - Sabado\n - D - Domingo\n ");
        scanf("%s", &d);
        d = tolower(d);
        printf("Ingrese la hora : ");
        scanf("%d", &h);
        printf("Ingrese los minutos realizdos : ");
        scanf("%d", &t);

        switch (d)
        {
        case 's':
            c = 0.15;
            break;
        case 'd':
            c = 0.15;
            break;
        case 'l':
            if (h >= 800 && h <= 1800)
            {
                c = 0.20;
            }
            else
            {
                c = 0.30;
            }
            break;
        case 'm':
            if (h >= 800 && h <= 1800)
            {
                c = 0.20;
            }
            else
            {
                c = 0.30;
            }
            break;
        case 'x':
            if (h >= 800 && h <= 1800)
            {
                c = 0.20;
            }
            else
            {
                c = 0.30;
            }
            break;
        case 'j':
            if (h >= 800 && h <= 1800)
            {
                c = 0.20;
            }
            else
            {
                c = 0.30;
            }
            break;
        case 'v':
            if (h >= 800 && h <= 1800)
            {
                c = 0.20;
            }
            else
            {
                c = 0.30;
            }
            break;

        default:
            printf("Dia no valido");
            break;
        }

        tt = c * t;
        printf("El costo de la llamada fue de: %0.3f \n", tt);
        printf("¿Quiere repetir otra vez?\n 1 - Si \n 2 - No\n");
        scanf("%d", &Do);
        printf("\n");
    } while (Do == 1);
}