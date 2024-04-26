/*faça um programa que receba um número inteiro > 1, verifique se o numero fornecido é primo ou não e mostre uma mensagem de número primo ou não primo.
nmr primo= apenas nmr%1==0 e nmr%nmr==0*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num , divs=2 , cont;

    printf("digite um número: \n");
    scanf("%d" , &num);
    if(num>1)
    {
        for(cont=2;cont<=num/2;cont++)
        {
            if(num%cont==0)
            {
                divs++;
                break;
            }
        }
    }
    else
    {
        printf("número inválido");
    }
    if (divs==2)
    {
        printf("o número é primo.")
    }
    else
    {
        printf("o número não é primo.")
    }
    
    
    


    return 0;
}
