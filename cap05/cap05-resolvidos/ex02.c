/*enunciado da questão seá postado posteriormente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num , fat , cont1 , cont2 , total;

    printf("digite um número:\n");
    scanf("%d" , &num);

    for(cont1=1;cont<=num;cont1++)
    {
        fat=1;
        for(cont2=1;cont2<=num;cont2++)
        {
            fat=fat*cont2;
        }
        total=total+1/fat;
    }
    printf("o valor de E é: %d" , total);




    return 0;
}