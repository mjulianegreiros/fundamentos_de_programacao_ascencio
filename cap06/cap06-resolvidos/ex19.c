/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void troca(char *va , char *vb)
{
    char temp;
    
    temp = *vb;
    *vb = *va;
    *va = temp;
}


int main()
{
    char vA[20] , vB[20];
    int i;

    for(i=0;i<20;i++)
    {
        printf("Letra para a posição %d de vA: ", i+1);
        scanf(" %c" , &vA[i]);
    }
    for(i=0;i<20;i++)
    {
        printf("Letra para a posição %d de vB: ", i+1);
        scanf(" %c" , &vB[i]);
    }

    printf("\nVetor A antes da troca: \n");
    for(i=0;i<20;i++)
    {
        printf("%c " , vA[i]);
    }
    printf("\nVetor B antes da troca: \n");
    for(i=0;i<20;i++)
    {
        printf("%c " , vB[i]);
    }

    for(i=0;i<20;i++)
    {
        troca(&vA[i] , &vB[19-i]);
    }

    printf("\nVetor A depois da troca: \n");
    for(i=0;i<20;i++)
    {
        printf("%c " , vA[i]);
    }
    printf("\nVetor B depois da troca: \n");
    for(i=0;i<20;i++)
    {
        printf("%c " , vB[i]);
    }




    return 0;
}