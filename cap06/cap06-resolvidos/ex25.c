/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    

    int num[10] , i=0 , divs=2 , j , vlr=101;

    while (i<10)
    {
        vlr = vlr + 1;

        printf("\n%d" , vlr);

        divs=2;
        for(j=2;j<=vlr/2;j++)
        {
            if(vlr%j==0)
            {
                divs++;
                break;
            }
        }

        if(divs==2)
        {
            num[i] = vlr;
            i++;
        }
    } 

    printf("\n10 primeiros numeros primos depois de 100\n");
    for(i=0;i<10;i++)
    {
        printf("%d " , num[i]);
    }
    



    return 0;
}