/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void ehIgual30(int v[])
{
    int i;
    for( i = 0; i < 15; i++)
    {
        if(v[i]==30)
        {
            printf("%d " , i);
        }
    }
    
}

int main()
{
    srand(time(NULL));
    
    int vet[15] , i;

    for(i=0;i<15;i++)
    {
        vet[i] = rand()%40 + 1;
        printf("%d " , vet[i]);
    }

    printf("\nOs elementos iguais a 30 estão nas posicoes: ");
    ehIgual30(vet);


    return 0;
}