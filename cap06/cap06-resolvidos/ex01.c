/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num[9] , i , divs=2 , j;

    for(i=0;i<9;i++)
    {
        printf("\nDigite um número: ");
        scanf("%d" , &num[i]);
    } 

    //teste se o numero é primo de cada numero armazenado no vetor
    for(i=0;i<9;i++)
    {
        for(j=2;j<=num[i]/2;j++)
        {
            divs=2;
            if(num[i]%j==0)
            {
                divs++;
                break;
            }
        }
        if(divs==2)
        {
            printf("\nO número %d é primo." , num[i]);
        }
    }



    return 0;
}