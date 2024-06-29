/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    float vet[15] , maior;
    int i;

    srand(time(NULL));

    for ( i = 0; i < 15; i++)
    {
        vet[i] = rand()%25 + 1;
    }

    printf("\nVetor: ");
    for(i=0;i<15;i++)
    {
        printf("%.2f " , vet[i]);
    }

    for(i=0;i<15;i++)
    {
        if(i==0)
        {
            maior=vet[i];
        }
        if(vet[i]>maior)
        {
            maior=vet[i];
        }
    }

    printf("\nMaior: %.2f" , maior);

    for ( i = 0; i < 15; i++)
    {
        vet[i] = vet[i]/maior;
    }
    printf("\nVetor: ");
    for(i=0;i<15;i++)
    {
        printf("%.2f " , vet[i]);
    }
    
    



    return 0;
}