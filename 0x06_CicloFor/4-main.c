#include <stdio.h>

int main(void)
{
    int cantidad = 10;


    printf("Ingrese N \n");
    scanf("%d",&cantidad);

    for(int i=1; i<=cantidad;i++)
    {
        if(i%2==0){
            printf("%d, ", i);
        }
        
    }

}