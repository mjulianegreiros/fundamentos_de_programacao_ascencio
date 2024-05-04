/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num , cont , par=0 , primo=0 , j , divs=2;
    
    
    for(cont=1;cont<=10;cont++)
    {
        divs=2;//reiniciando a variável
        printf("\nDigite um número: ");
        scanf("%d" , &num);

        if(num%2==0)//se o resto do numero dividido por 2 for 0
        {
            par++;
        }
        for(j=2;j<=num/2;j++)//verificação se um número é primo
        {
            if(num%j==0)
            {
                divs++;
                break;//se essa condição for verdadeira, ele pula pois a gente ja sabe que p numero não é primo, pois um número primo tem apenas 2 divisores
            }
        }
        if(divs==2)
        {
            primo+=num;
        }
    }
    printf("\nA quantidade de numeros par digitadas foi: %d" , par);
    printf("\nA soma de todos os números primos é: %d" , primo);



    return 0;
}