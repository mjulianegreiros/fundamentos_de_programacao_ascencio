/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x[10] , y[5] , copiaX[10] , i , j , counterPar=0  , counterImpar=0 , pares[10] , impares[10];

    for(i=0;i<10;i++)
    {
        printf("\nDigite o %d° valor pro vetor X: " , i+1);
        scanf("%d" , &x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nDigite o %d° valor para o vetor Y: " , i+1);
        scanf("%d" , &y[i]);
    }
    
    // copiando o vetor x para o copiax
    for ( i = 0; i < 10; i++)
    {
        copiaX[i] = x[i];
    }

    // fazendo a soma dos valores de x com todos os valores de y
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            copiaX[i] += y[j];
        }
        
        if(copiaX[i]%2 == 0)
        {
            pares[counterPar] = copiaX[i];
            counterPar++;
        }
        else
        {
            impares[counterImpar] = copiaX[i];
            counterImpar++;
        }
    }
    
    printf("\nOs pares são: ");
    for(i=0;i<counterPar;i++)
    {
        printf("%d " , pares[i]);
    }

    printf("\nOs ímpares são: ");
    for ( i = 0; i < counterImpar; i++)
    {
        printf("%d " , impares[i]);
    }
    
    
    


    return 0;
}