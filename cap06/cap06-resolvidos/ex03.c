/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int v1[10] , v2[10] , i , j=0 , uniao[20];

    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite valor pro vetor 1: ");
        scanf("%d" , &v1[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite valor pro vetor 2: ");
        scanf("%d" , &v2[i]);
    }

    //uniao dos dois vetores de forma intercalada

    j=0;
    for(i=0;i<20;i++)
    {
        uniao[j]=v1[i];
        j++;
        uniao[j]=v2[i];
        j++;
    }

    printf("vetor da uniao:\n");

    for(i=0;i<20;i++)
    {
        printf("%d , " , uniao[i]);
    }
    


    return 0;
}