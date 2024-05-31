/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ordenarDecrescente(int *vx)
{
    int i , j ,aux;
    
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            while(vx[i]>vx[j])
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
    int x[8] ,i;

    for(i=0;i<8;i++)
    {
        printf("\nDigite o valor %d: " , i+1);
        scanf("%d" , &x[i]);
    }

    ordenarDecrescente(x);

    
    printf("\nNúmeros ordenados de forma descrescente.\n");
    for(i=0;i<8;i++)
    {
        printf("%d, " , x[i]);
    }





    return 0;
}