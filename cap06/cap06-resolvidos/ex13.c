/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maioresque50(int num , int *qtd)
{
    if(num > 50)
    {
        *qtd = *qtd + 1;
    }
}


int main()
{
    int numeros[10] , i , mais50=0;

    for(i=0;i<10;i++)
    {
        printf("\nDigite o %d° valor: " , i+1);
        scanf("%d" , &numeros[i]);

        maioresque50(numeros[i] , &mais50);
    }

    if(mais50 > 0)
    {
        printf("\nForam digitados %d números maiores que 50." , mais50);
    }
    else
    {
        printf("\nNão foi digitado nenhum valor acima de 50.");
    }


    return 0;
}