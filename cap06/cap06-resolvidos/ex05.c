/*enunciado da quatsão será postado posteriormente
esse programa passará por mudanças.*/


int uniaoXeY(int *u , int vx[] , int vy[])
{
    int i , j , tem , k=0;
    int p=0;

    for(i=0;i<10;i++)
    {
        u[k++]=vx[i];
        p++;
    }

    for(i=0;i<10;i++)
    {
        tem=0;
        for(j=0;j<10;j++)
        {
            if(vy[i]==u[j])
            {
                tem=1;  
                break; 
            }
        }
        if(!tem)
        {
            
            u[k++]=vy[i];
            p++;
            
        }
    }

    return p;
}

void somaXeY(int *s , int vx[] , int vy[])
{
    int i;
    for(i=0;i<10;i++)
    {
        s[i] = vx[i] + vy[i];
    }
}


void multXeY(int *m , int vx[] , int vy[])
{
    int i;

    for(i=0;i<10;i++)
    {
        m[i] = vx[i] * vy[i];   
    }
    
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vX[10] , uniao[20] , i , j , k , p=0 , soma[10] , interc[20] , dif[20];
    int vY[10] , mult[10];

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

    p=0; 

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

    p=0;

    //soma dos valores na mesma posição de x e y
    printf("\nSoma dos valores de posições iguais de X e Y.\n");

    somaXeY(soma , vX , vY);

    for(i=0;i<10;i++)
    {
        printf("%d , " , soma[i]);
    }

    

    // multipliacação dos valores na mesma posição de x e y
    printf("\nMultiplicação dos valores de posições iguais de X e Y.\n");
    
    multXeY(mult , vX , vY);

    for(i=0;i<10;i++)
    {
        printf("%d , " , mult[i]);
    }

    
    //uniao x e y
    printf("\nUnião dos elementos de X e y sem repetição.\n");

    int tamanho_uniao = uniaoXeY(uniao , vX , vY);

    for(i=0;i<tamanho_uniao;i++)
    {
        printf("%d , " , uniao[i]);
    }

    
    

    



    return 0;
}