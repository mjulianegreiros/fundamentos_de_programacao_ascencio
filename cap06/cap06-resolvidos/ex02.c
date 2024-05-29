/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco[10] , valorTotal , soma=0 , comissao;
    int maisVend , i , q=0 , posiMaisvend , qtd[10];


    for(i=0;i<10;i++)
    {
        printf("\nDigite o preço do produto %d: " , i+1); //colocando i+1 para a exibição começar do valor 1
        scanf("%f" , &preco[i]);
        printf("\nDigite a quantidade que foi vendida do produto %d: " , i+1);
        scanf("%d" , &qtd[i]);
    }


    for(i=0;i<10;i++)
    {
        valorTotal=qtd[i]*preco[i];

        printf("\nO produto %d tem o preço R$%.2f e foram vendidas %d unidades, totalizando R$%.2f" , i+1 , preco[i]  , qtd[i] , valorTotal);

        soma+=valorTotal;

        if(q==0)
        {
            maisVend=qtd[i];
            posiMaisvend=i;
            q=1;
        }

        if(qtd[i]>maisVend)
        {
            maisVend=qtd[i];
            posiMaisvend=i+1; 
        }

    }

    comissao=soma*0.05;

    printf("\nA soma da venda de todos os produtos da loja totalizou R$%.2f." , soma);
    printf("\nO produto mais vendido teve %d unidades vendidas e se encontra na posição %d do estoque." , maisVend , posiMaisvend);
    printf("\nSeu José vendeu R$%.2f em produtos da loja, ganhando R$%.2f de comissão, totalizando um salário de %.2f." , soma , comissao , 545+comissao);



    return 0;
}