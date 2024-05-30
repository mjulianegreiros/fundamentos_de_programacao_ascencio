/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v[8] , negs[8] , pos[8];
    int i , j=0 , k=0;

    for ( i = 0; i < 8; i++)
    {
        printf("\nDigite o valor %d: " , i+1);
        scanf("%f" , &v[i]);
    }
     
    for(i=0;i<8;i++)
    {
        if(v[i]>0)
        {
            pos[j]=v[i];
            j++;
        }
        else
        {
            negs[k]=v[i];
            k++;
        }
    }
     
    printf("VETOR PRINCIPAL: ");
    for(i=0;i<8;i++)
    {
        if(i!=7)
        {
            printf("%.2f ," , v[i]);
        }
        else
        {
            printf("%.2f.\n" , v[i]); // condição feita pra ser colocado um ponto final ao fim do vetor
        }
            
    }

    printf("\nVETOR NÚMEROS POSITIVOS: ");
    for(i=0;i<j;i++)
    {
        if(i!=j-1)
        {
            printf("%.2f ," , pos[i]);
        }
        else
        {
            printf("%.2f.\n" , pos[i]); // condição feita pra ser colocado um ponto final ao fim do vetor
        }
    }
    
    
    printf("\nVETOR NÚMEROS NEGATIVOS: ");
    for(i=0;i<k;i++)
    {
        if(i!=k-1)
        {
            printf("%f ," , negs[i]);
        }
        else
        {
            printf("%f." , negs[i]); // condição feita pra ser colocado um ponto final ao fim do vetor
        }
    }

    


    return 0;
}