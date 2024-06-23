/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int v1[10] , v2[5] , qtd_par=0 , qtd_impar=0 , i , j , divs , q=0 , k=0;

    printf("\nPreechendo o vetor 01.\n");
    for(i=0;i<10;i++)
    {
        printf("\nDigite o valor 0%d: " , i+1);
        scanf("%d" , &v1[i]);

        if(v1[i]%2==0)
        {
            qtd_par++;
        }
        else
        {
            qtd_impar++;
        }
    }
    printf("\nPreenchendo o vetor 02. \n");
    for(i=0;i<5;i++)
    {
        printf("\nDigite o valor 0%d: " , i+1);
        scanf("%d" , &v2[i]);
    }
    

    int r1[qtd_par]  , r2[qtd_impar];

    for(i=0;i<qtd_par;i++)
    {
        r1[i] = 0;
    }

    for(i=0;i<10;i++)
    {
        if(v1[i]%2==0)
        {
            for(j=0;j<5;j++)
            {
                r1[q] = r1[q] + v2[j];
            }
            q=q+1;
        }
        else
        {
            divs=0;
            for(j=0;j<5;j++)
            {
                if(v1[i]%v2[j]==0)
                {
                    divs++;
                }
            }
            r2[k] = divs;
            k++;
        }
    }

    printf("\nVetor resultante 1: ");
    for(i=0;i<qtd_par;i++)
    {
        printf("%d " , r1[i]);
    }
    printf("\nVetor resultante 2: ");
    for(i=0;i<qtd_impar;i++)
    {
        printf("%d " , r2[i]);
    }






    return 0;
}