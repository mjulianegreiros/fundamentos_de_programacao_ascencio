/*1) Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
 * 
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
anterior.
 * 
Faça um programa que determine o salário atual desse funcionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal=1015 , aum=0.015 , novosal=0 , porcent;
    int ano , cont;

    printf("digite o ano atual: \n");
    scanf("%d" , &ano);

    for(cont=2007;cont<=ano;cont++)
    {
        aum = aum * 2;
        porcent=sal*aum;
        novosal=sal+porcent;
        sal=novosal;
    }

    printf("o seu salário no ano digitado será: %.2f" , novosal);



    return 0;
}
