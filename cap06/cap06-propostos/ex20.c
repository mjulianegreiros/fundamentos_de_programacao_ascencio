/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[10] , i;

    for(i=0;i<10;i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d" , &vet[i]);
    }

    printf("\nOs numeros positivos sao: ");
    for ( i = 0; i < 10; i++)
    {
        if(vet[i]>0)
        {
            printf("%d " , vet[i]);
        }
    }
    



    return 0;
}