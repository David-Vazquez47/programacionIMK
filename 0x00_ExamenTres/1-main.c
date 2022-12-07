#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int x, y, i, j, n = 11;
    char array[n][n];
    char array2[n][n];
    int r = 0;
    int con = 0;
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            r = rand();
            if (r % 2 == 0)
            {
                array[x][y] = '1';
            }
            else
            {
                array[x][y] = ' ';
            }
        }
    }

    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            if (x == 0 || y == 0)
            {
                array[x][y] = '-';
            }
            if (x == n - 1 || y == n - 1)
            {
                array[x][y] = '-';
            }
        }
    }

    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            printf(" %c", array[x][y]);
            array2[x][y] = 0;
        }
        printf(" \n");
    }
    printf(" \n");

    // Juego de la vida
    for (int v = 0; v < 5; v++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0 || i == 0)
                {
                    array2[i][j] = '-';
                }
                else if (j == n - 1 || i == n - 1)
                {
                    array2[i][j] = '-';
                }
                else
                {
                    if (array[i - 1][j + 1] == '1')
                    {
                        con++;
                    }
                    if (array[i][j + 1] == '1')
                    {
                        con++;
                    }
                    if (array[i + 1][j + 1] == '1')
                    {
                        con++;
                    }
                    if (array[i - 1][j] == '1')
                    {
                        con++;
                    }
                    if (array[i + 1][j] == '1')
                    {
                        con++;
                    }
                    if (array[i - 1][j - 1] == '1')
                    {
                        con++;
                    }
                    if (array[i][j - 1] == '1')
                    {
                        con++;
                    }
                    if (array[i + 1][j - 1] == '1')
                    {
                        con++;
                    }
                    // Sobrevive
                    if (array[i][j] == '1')
                    {
                        if (con > 3)
                        {
                            array2[i][j] = ' ';
                        }
                        else
                        {
                            array2[i][j] = '1';
                        }
                    }
                    // nace
                    if (array[i][j] == ' ')
                    {
                        if (con == 3)
                        {
                            array2[i][j] = '1';
                        }
                        else
                        {
                            array2[i][j] = ' ';
                        }
                    }
                    con = 0;
                }
            }
        }
        for (x = 0; x < n; x++)
        {
            for (y = 0; y < n; y++)
            {
                printf(" %c", array2[x][y]);
            }
            printf(" \n");
        }

        for (x = 0; x < n; x++)

            for (y = 0; y < n; y++)
            {
                array[x][y]=array2[x][y];
            }
        printf(" \n");
    }
}
