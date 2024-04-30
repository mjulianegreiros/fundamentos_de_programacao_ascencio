/*enunciado da questão seá postado posteriormente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sal=1015 , aum=0,015 , novosal=0 , ano , cont , porcent;

    printf("digite o ano atual: \n");
    scanf("%d" , &ano);

    for(cont=2007;cont<=ano;cont++)
    {
        aum = aum * 2;
        porcent=sal*aum;
        novosal=novosal+porcent;
    }

    printf("o seu salário no ano digitado será: %d" , novosal);



    return 0;
}
