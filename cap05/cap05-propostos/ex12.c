/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int num , cont , divs=2 , qtd_primo=0 , cont_primo;

   for(cont=1;cont<=10;cont++)
   {
        divs=2;
        printf("\nDigite um número: ");
        scanf("%d" , &num);

        for(cont_primo=2;cont_primo<=num/2;cont_primo++)
        {
            if(num%cont_primo==0)
            {
                divs++;
                break;
            }
        }
        if (divs==2)
        {
            qtd_primo++;
        }
    }

    printf("\nA quantidade de números primos digitados foram: %d" , qtd_primo);



    return 0;
}