/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[5] , b[5] , subs[5] , i , j=0;

    for(i=0;i<5;i++)
    {
        printf("\nDigite um numero para o vetor A: ");
        scanf("%d" , &a[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nDigite um numero para o vetor B: ");
        scanf("%d" , &b[i]);
    }

    printf("\nVetor A: ");
    for(i=0;i<5;i++)
    {
        printf("%d " , a[i]);
    }
    printf("\nVetor B: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d " , b[i]);
    }

    for(i=0;i<5;i++)
    {
        subs[j] = a[i] - b[4-i];
        j++;
    }

    printf("\nVetor subs: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d " , subs[i]);
    }
    
    



    return 0;
}