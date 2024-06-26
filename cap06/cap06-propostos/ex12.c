/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[5] , i , soma=0;

    for(i=0;i<5;i++)
    {
        printf("\nDigite o %d° numero: " , i+1);
        scanf("%d" , &vet[i]);

        soma+=vet[i]; // soma = soma + vet[i]
    }

    printf("\nOs numeros digitados foram: ");
    for(i=0;i<5;i++)
    {
        if(i!=4)
        {
            printf("%d + " , vet[i]);
        }
        else
        {
            printf("%d = %d" , vet[i] , soma);
        }
    }



    return 0;
}