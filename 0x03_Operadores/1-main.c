#include <stdio.h>
#include "main.h"

int main()
{
    float length, width, result;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);


    result = perimeter(length, width);

    printf("Perimeter of rectangle = %f units \n", result);

    return 0;
}
