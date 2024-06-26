/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void copyVets(int v3[] , int v1[] , int v2[])
{
    int i , j=0;

    for(i=0;i<10;i++)
    {
        v3[j] = v1[i];
        j++;
    }
    for ( i = 0; i < 10; i++)
    {
        v3[j] = v2[i];
        j++;
    }
    
}

void orderVet(int v3[])
{
    int i , aux , j;

    for(i=0;i<20;i++)
    {
        for(j=0;j<19;j++)
        {
            if(v3[j]<v3[j+1])
            {
                aux = v3[j];
                v3[j] = v3[j+1];
                v3[j+1] = aux;
            }
        }
    }
    
    
}

int main()
{
    int vet1[10] , vet2[10] , vet3[20] , i;

    printf("Preenchendo o Vetor 1");
    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d" , &vet1[i]);
    }
    printf("Preenchendo o Vetor 2");
    for ( i = 0; i < 10; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d" , &vet2[i]);
    }

    copyVets(vet3 , vet1 , vet2);

    printf("\nVetor 1 + Vetor 2 = Vetor 3: ");
    for(i=0;i<20;i++)
    {
        printf("%d " , vet3[i]);
    }
    
    orderVet(vet3);

    printf("\nVetor 3 ordenado de forma decrescente: ");
    for(i=0;i<20;i++)
    {
        printf("%d " , vet3[i]);
    }



    



    return 0;
}