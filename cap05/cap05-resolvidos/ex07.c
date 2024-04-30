/*enunciado da questão seá postado posteriormente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*faça um programa que mostre a sequencia dos 8 primeiros números da sequência de fibonacci 
    0 1 1 2 3 5 8 13...
    alterei essa questão para o usuário digitar a quantidade de números que ele quer.*/

    int qtd , num  , ant=1 , antdoant=0 , cont;
    printf("digite a quantidade de números que você deseja saber da sequência de fibonacci:\n");
    scanf("%d" , &qtd);

    printf("0 , 1 ,");
    for(cont=1;cont<=qtd-2;cont++) //qtd-2 pq os dois primeiros números já foram digitados
    {
        num=ant +antdoant;
        printf("%d, " , num);
        antdoant=ant;
        ant=num;
    }


    return 0;
}