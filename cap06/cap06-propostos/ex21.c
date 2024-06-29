/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet1[10] , vet2[10] , i;

    for(i=0;i<10;i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d" , &vet1[i]);
    }
    printf("Primeiro vetor: ");
    for(i=0;i<10;i++)
    {
        printf("%d " , vet1[i]);
    }

    printf("\nSubstituindo os valores nulos por 1...\n");
    for ( i = 0; i < 10; i++)
    {
        vet2[i] = vet1[i];
        if(vet1[i]==0)
        {
            vet2[i]=1;
        }

        
    }

    printf("Primeiro vetor: ");
    for(i=0;i<10;i++)
    {
        printf("%d " , vet1[i]);
    }

    printf("\nSegundo vetor: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d " , vet2[i]);
    }
    
    



    return 0;
}