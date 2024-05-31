/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ordenarCrescente(int *vx)
{
    int aux , i ,j;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            while(vx[i]<vx[j])
            {
                aux=vx[i];
                vx[i]=vx[j];
                vx[j]=aux;
            }
        }
        
    }
    
}

int main()
{
    int x[10] , i;

    for(i=0;i<10;i++)
    {
        printf("\nDigite o valor %d: " , i+1);
        scanf("%d" , &x[i]);
    }

    ordenarCrescente(x);

    
    printf("\nNúmeros digitados em ordem crescente.");
    for(i=0;i<10;i++)
    {
        printf("%d , " , x[i]);
    }


    



    return 0;
}