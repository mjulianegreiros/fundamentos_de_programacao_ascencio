/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num , cont , mult;
    printf("Eu desejo saber a tabuada do ");
    scanf("%d" , &num);

    for(cont=1;cont<=10;cont++)
    {
        mult = num * cont;

        printf("\n%d x %d = %d" , num , cont , mult);
    }



    return 0;
}