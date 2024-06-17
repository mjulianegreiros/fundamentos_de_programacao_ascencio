/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int v[15] , p[5] , q[5] , i , j=0 , k=0;

    for ( i = 0; i < 15; i++)
    {
        printf("\nvalor %d - " , i+1);
        scanf("%d" , &v[i]);
    }

    for(i=0;i<15;i++)
    {
        if(v[i]%2==0)
        {
            p[j] = v[i];
            j++;
        }
        else
        {
            q[k] = v[i];
            k++;
        }

        if(j==5)
        {
            printf("\nValores pares: ");
            for(j=0;j<5;j++)
            {
                printf("%d " , p[j]);
            }
            j=0;
        }
        if(k==5)
        {
            printf("\nValores ímpares: ");
            for(k=0;k<5;k++)
            {
                printf("%d " , q[k]);
            }
            k=0;
        }
        
    }
     



    return 0;
}