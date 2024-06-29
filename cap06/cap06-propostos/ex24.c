/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[15] , i , qtd_primos=0 , j=0 , divs=2 ,  k=0;


    for(i=0;i<15;i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d" , &vet[i]);

        divs=2;

        for(j=2;j<=vet[i]/2;j++)
        {
            if(vet[i]%j==0)
            {
                divs++;
                break;
            }
        }
        if(divs==2)
        {
            qtd_primos++;
        }
    }

    int primos[qtd_primos];

    for(i=0;i<15;i++)
    {
        divs=2;
        for(j=2;j<=vet[i]/2;j++)
        {
            if(vet[i]%j==0)
            {
                divs++;
                break;
            }
        }

        if(divs==2)
        {
            primos[k] = vet[i];
            k++;
        }
    } 

    printf("\nNumeros primos: ");
    for ( i = 0; i < qtd_primos; i++)
    {
        printf("%d " , primos[i]);
    }
    



    return 0;
}