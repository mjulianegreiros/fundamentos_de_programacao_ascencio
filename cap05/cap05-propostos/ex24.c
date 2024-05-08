/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num , maior , menor , q=0;

    printf("digite um número: \n");
    scanf("%d" , &num);
    
    if(q==0)
    {
        maior=num;
        menor=num;
        q=1;
    }

    while(num!=0)
    {
        if(num>0)
        {
            if(maior<num)
            {
                maior=num;
            }
            else if(menor<num)
            {
                menor=num;
            }
        }
        else
        {
            printf("\nO número digitado não fará parte dos calculos.");
        }
        printf("\nDigite um número: ");
        scanf("%d" , &num);
    }

    printf("\nO maior número digitado foi %d\nO menor número digitado foi %d" , maior , menor);



    return 0;
}