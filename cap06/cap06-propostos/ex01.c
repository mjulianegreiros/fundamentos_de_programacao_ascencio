/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[6] , i , qtd_par=0 , qtd_impar=0;

    for(i=0;i<6;i++)
    {
        printf("\nDigite o %d° valor: " , i+1);
        scanf("%d" , &vet[i]);
        if(vet[i]%2==0)
        {
            qtd_par++;
        }
        else
        {
            qtd_impar++;
        }
    }

    printf("\nForam digitados %d números pares eles são: " , qtd_par);
    for(i=0;i<6;i++)
    {
        if(vet[i]%2==0)
        {
            printf("%d " , vet[i]);
        }
    }
    printf("\nForam digitados %d números impares e eles são: " , qtd_impar);
    for ( i = 0; i < 6; i++)
    {
        if (vet[i]%2!=0)
        {
            printf("%d " , vet[i]);
        }
        
    }
    



    return 0;
}