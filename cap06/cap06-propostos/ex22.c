/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[10] , qtd=0 , i , j=0;

    for(i=0;i<10;i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d" , &a[i]);

        if(a[i]<=0)
        {
            qtd++;
        }
    }
    printf("\nVetor A: ");
    for(i=0;i<10;i++)
    {
        printf("%d " , a[i]);
    }

    int b[10-qtd];

    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            b[j] = a[i];
            j++;
        }
    }

    printf("\nVetor B: ");
    for(i=0;i<10-qtd;i++)
    {
        printf("%d " , b[i]);
    }





    return 0;
}