/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vet[10] , soma_pos=0; 
    int i , qtd_negs=0;

    for(i=0;i<10;i++)
    {
        printf("\nDigite o valor 0%d" , i+1);
        scanf("%f" , &vet[i]);

        if(vet[i]>0)
        {
            soma_pos+=vet[i];
        }
        else
        {
            qtd_negs++;
        }
    }

    printf("\nSoma dos positivos: %f" , soma_pos);
    printf("\nQuantidade de negativos: %d" , qtd_negs);




    return 0;
}