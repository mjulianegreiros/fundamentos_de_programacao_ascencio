/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkProduto(int pdt , int cod[] , int *pos)
{
    int i , achou=0;

    for(i=0;i<10;i++)
    {
        if(cod[i]==pdt)
        {
            achou=1;
            *pos = i;
            break;
        }
    }
    if(achou==0)
    {
        achou=0;
    }

    return achou;
}

void checkEstoque(int qtd , int est[] , int pos)
{
    if(est[pos]>=qtd)
    {
        printf("\nPedido atendido!\nObrigada e volte sempre!");
        est[pos]-=qtd;
    }
    else
    {
        printf("\nNao temos estoque suficiente dessa mercadoria.");
    }
}



int main()
{
    int codigos[10] , qtd[10] , i , cod_cliente , cod_produto , achou , qtd_compra , pos_produto;

    for(i=0;i<10;i++)
    {
        printf("\nQual o código do produto? ");
        scanf("%d" , &codigos[i]);
        printf("\nQual a quantidade do produto %d armazenada no estoque? " , codigos[i]);
        scanf("%d" , &qtd[i]);
    }

    printf("\nESTOQUE\n   Codigos   Quantidades");
    for(i=0;i<10;i++)
    {
        printf("\n%d - %d - %d" , i+1 , codigos[i] , qtd[i]);
    }

    do
    {
        printf("\n\n\nSeja bem vindo(a) a nossa loja!!\n Qual o seu código de cliente?\n\t --> ");
        scanf("%d" , &cod_cliente);
        
        
        if(cod_cliente==0)
        {
            printf("\nFinalizando programa...");
        }
        else
        {
            printf("\nDigite o codigo do produto que você deseja comprar: ");
            scanf("%d" , &cod_produto);
            achou = checkProduto(cod_produto , codigos , &pos_produto);
            if(achou==0)
            {
                printf("\nCodigo inexistente.");
            }
            else
            {
                printf("\nDigite a quantidade do produto que você deseja: ");
                scanf("%d" , &qtd_compra);
                checkEstoque(qtd_compra , qtd , pos_produto);
            }
        }
    } while (cod_cliente!=0);


    printf("\nESTOQUE\n   Codigos  Quantidades");
    for(i=0;i<10;i++)
    {
        printf("\n%d - %d - %d" , i+1 , codigos[i] , qtd[i]);
    }
    



    return 0;
}