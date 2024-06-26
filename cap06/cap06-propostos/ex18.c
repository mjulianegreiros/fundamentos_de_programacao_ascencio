/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[15] , i , maior , pos_maior , menor , pos_menor;

    for(i=0;i<15;i++)
    {
        
        if(i==0)
        {
            printf("\nDigite um numero: ");
            scanf("%d" , &vet[i]);

            maior = vet[i];
            menor = vet[i];
            pos_maior = i;
            pos_menor = i;
        }
        else
        {
            printf("\nDigite outro numero: ");
            scanf("%d" , &vet[i]);
        }

        if(vet[i]>maior)
        {
            maior = vet[i];
            pos_maior=i;
        }
        else if(vet[i]<menor)
        {
            menor = vet[i];
            pos_menor = i;
        }
    }

    printf("\nMaior - %d || Posicao - %d" , maior , pos_maior+1);
    printf("\nMenor - %d || Posicao - %d" , menor , pos_menor+1);



    return 0;
}