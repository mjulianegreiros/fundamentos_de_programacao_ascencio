/*enunciado da quatsão será postado posteriormente

PROGRAMA CONTEM BUGS*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco , preco_final_vista  , vlr_parc , preco_final_prazo;
    int qtd_parc , imp=0;

    printf("\nDigite o preço unitário do produto: R$");
    scanf("%f" , &preco);
    
    preco_final_vista=preco-(preco*0.2);

    printf("O preço final a vista será R$%.2f" , preco_final_vista);

    for(qtd_parc=6;qtd_parc<=60;qtd_parc=qtd_parc+6)
    {
        preco_final_prazo=0;
        imp=imp+3;
        preco_final_prazo=preco + ((imp/100)*preco);
        vlr_parc=preco_final_prazo/qtd_parc;
        printf("\n\t-----------------");
        printf("\n\t PARCELAS - %d\n\t VALOR DA PARCELA - %.2f\n\t PREÇO FINAL - %.2f\n", qtd_parc , vlr_parc , preco_final_prazo);
        printf("\n\t-----------------");
    }
    



    return 0;
}