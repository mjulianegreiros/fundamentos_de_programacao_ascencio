/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[10] , i , j , qtd=0 , contados[10] = {0};

    for(i=0;i<10;i++)
    {
        printf("\nDigite um valor pra A: ");
        scanf("%d" , &a[i]);
    }

    for(i=0;i<10;i++)
    {
        if(contados[i] == 1) continue;
        qtd=1;
        
        for(j=0;j<10;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                qtd++;
                contados[j] = 1;
            }
        }
        
        if(qtd>1)
        {
            printf("\nO número %d se repetiu %d vezes." , a[i] , qtd);
        }
        else
        {
            printf("\nO número %d não se repete." , a[i]);
        }
        
    }



    return 0;
}