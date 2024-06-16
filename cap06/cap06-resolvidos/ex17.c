/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ehPar(int n , int i , int *soma)
{
    if(n%2==0)
    {
        printf("\nPosição - %d | Valor - %d" , i+1 , n);
        *soma += n;
    }
}

void ehImpar(int n , int i , int *qtd)
{
    if(n%2!=0)
    {
        printf("\nPosição - %d | Valor - %d" , i+1 , n);
        *qtd = *qtd + 1;
    }
}


int main()
{
    int num[6] , sum_par=0 , i , qtd_impar=0;

    for(i=0;i<6;i++)
    {
        printf("\nDigite o %d° valor: " , i+1);
        scanf("%d" , &num[i]);
    }

    printf("\nOs números pares são:");
    for(i=0;i<6;i++)
    {
        ehPar(num[i] , i , &sum_par);
    }
    printf("\nA soma dos pares é: %d" , sum_par);

    printf("\nOs números ímpares são:");
    for(i=0;i<6;i++)
    {
        ehImpar(num[i] , i , &qtd_impar);
    }
    printf("\nA quantidade de impares é: %d" , qtd_impar);






    return 0;
}