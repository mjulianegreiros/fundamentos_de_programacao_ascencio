/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[10] , qtd_par=0 , qtd_impar=0 , i;

    for(i=0;i<10;i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d" , &vet[i]);

        if(vet[i]%2==0)
        {
            qtd_par = qtd_par + 1;
        }
        else
        {
            qtd_impar = qtd_impar + 1;
        }
    }

    printf("\nVetor inicial: ");
    for(i=0;i<10;i++)
    {
        printf("%d " , vet[i]);
    }

    int pares[qtd_par] , impares[qtd_impar];
    int j=0 , k=0;

    for ( i = 0; i < 10; i++)
    {
        if (vet[i]%2==0)
        {
            pares[j] = vet[i];
            j++;
        }
        else
        {
            impares[k] = vet[i];
            k++;
        }
        
    }

    printf("\nResultante 1 - Pares: ");
    for(i=0;i<qtd_par;i++)
    {
        printf("%d " , pares[i]);
    }
    printf("\nResultante 2 - Impares: ");
    for(i=0;i<qtd_impar;i++)
    {
        printf("%d " , impares[i]);
    }
    





    return 0;
}