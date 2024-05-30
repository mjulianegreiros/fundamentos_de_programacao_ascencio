/*enunciado da quatsão será postado posteriormente
esse programa passará por mudanças.*/

void reiniaciarP(int *p)
{
    *p=0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vX[10] , uniao[20] , i , j , k , p=0 , soma[20] , mult , interc[20] , dif[20];
    int vY[10];

    for(i=0;i<10;i++)
    {
        printf("\nDigite valores pro vetor X: ");
        scanf("%d" , &vX[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\nDigite valores pro vetor Y: ");
        scanf("%d" , &vY[i]);
    }


    // interceção x e y

    for(i=0;i<10;i++)
    {
        j=0;
        for(k=0;k<10;k++)
        {
            if(vX[i]==vY[k])
            {
                j++;
            }
        }
        if(j>0)
        {
            interc[p]=vX[i];
            p++;
        }
    }

    printf("\nInterceção de X e Y.\n");
    for(i=0;i<p;i++)
    {
        printf("%d , " , interc[i]);
    }

    reiniaciarP(&p); 

    // Diferença entre X e Y

    for(i=0;i<10;i++)
    {
        j=0;
        for(k=0;k<10;k++)
        {
            if(vX[i]==vY[k])
            {
                j++;
            }
        }
        if(j==0)
        {
            dif[p]=vX[i];
            p++;
        }
    }
    printf("\nDiferença de X e Y.\n");
    for(i=0;i<p;i++)
    {
        printf("%d , " , dif[i]);
    }

    reiniaciarP(&p);

    //soma dos valores na mesma posição de x e y
    for(i=0;i<10;i++)
    {
        soma[p]=vX[i] + vY[i];
        p++;
    }
    
    printf("\nSoma dos valores de posições iguais de X e Y.\n");
    for(i=0;i<p;i++)
    {
        printf("%d , " , soma[i]);
    }

    reiniaciarP(&p);

    



    return 0;
}