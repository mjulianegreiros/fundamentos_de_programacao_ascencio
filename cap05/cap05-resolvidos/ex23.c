/*faça um programa que receba o valor do salario minimo, uma lista contendo a quantidade de quilowatts gasta por consumidor e o tipo(1-residencial, 2-comercial ou 3-industrial), calcule e mostre
1-o valor de cada quilowatt, sabendo que 1quilowatt=1/8 * sal minimo
2-o valor a ser pago por consumidor(contando o acrescimo)
2.1 - calculo do acrescimo:
    -cons 1 - 5% do gasto
    -cons2 - 10% do gasto
    -cons3 - 15% do gasto
3-faturamento da empresa
4-qtd de consumidores que pagam entre 500 e 1000 reais.
termine a entrada de dados quando o quilowatt=0*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal_min , vlr_qwat , conta , faturamento;
    int qtdqwat , consuRico , consu;

    do
    {
        printf("digite o salario minino: \n");
        scanf("%f" , &sal_min);
        printf("digite a quantidade de quilowatts gasta: \n");
        scanf("%d" , &qtdqwat);
        printf("digite o tipo de consumidor: \n");
        scanf("%d" , &consu);

        vlr_qwat=sal_min/8;
        conta=vlr_qwat*qtdqwat;

        if(consu==1)
        {
            conta=conta*1.05;
        }
        else if(consu==2)
        {
            conta=conta*1.1;
        }
        else if(consu==3)
        {
            conta=conta*1.15;
        }
        
        faturamento+=conta;

        if(conta>500 && conta<1000)
        {
            consuRico++;
        }

        printf("\no valor do quilowatt é: R$%f\n" , vlr_qwat);
        printf("sua conta final é: R$%f" , conta);

    } 
    while (qtdqwat!=0);

    printf("\no faturamento da empresa é: R$%f" , faturamento);
    printf("\na quantidade de consumidores que paga entre R$500 e R$1000 é: %d" , consuRico);
    



    return 0;
}
