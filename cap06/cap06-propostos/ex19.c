/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int v1[10] , v2[10] , v3[10] , i;

    for(i=0;i<10;i++)
    {
        printf("\nDigite um valor pro vetor 1: ");
        scanf("%d" , &v1[i]);
        printf("\nDigite um valor pro vetor 2: ");
        scanf("%d" , &v2[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("%d " , v1[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d " , v2[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        v3[i] = v1[i] * v2[i];
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d " , v3[i]);
    }
    



    return 0;
}