/*enunciado da quatsão será postado posteriormente

usei a função rand para gerar valores aleatórios*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int numeros[10] , divs[5] , i , j , qtdDivs=0;

    for(i=0;i<10;i++)
    {
        numeros[i] = rand()%50 + 1;
        printf("\nNúmero sorteado: %d" , numeros[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        divs[i] = rand()%50 + 1;
        printf("\nDivisor sorteado: %d" , divs[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("\n\nTestando o valor %d..." , numeros[i]);
        qtdDivs = 0;
        for(j=0;j<5;j++)
        {
            if(numeros[i]%divs[j] == 0)
            {
                printf("\nO valor da posição %d é %d. Ele é divisor do valor %d." , j , divs[j] , numeros[i]);
                qtdDivs++;
            }
        }
        if(qtdDivs==0)
        {
            printf("\nO valor %d não tem divisores no segundo vetor." , numeros[i]);
        }
    }


    return 0;
}