/*faça um programa que receba o valor de uma divida e mostre uma tabela comos seguintes dados: valor da divida, valor do juros, qtd de parcelas e valor da parcela.
1parc-0%juros
3parc-10%juros
6parc-15%juros
9parc-20%juros
12parc-25%juros*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float divida , vlr_divida , vlr_juros , vlr_parc;
    int qtdparc;

    printf("digite o valor da sua dívida: ex; R$x.00\n");
    scanf("R$ %f", &divida);

    for(qtdparc=1;qtdparc<=12;qtdparc++)
    {
        if(qtdparc==1)
        {
            vlr_divida=divida;
            vlr_juros=0;
            vlr_parc=vlr_divida;
        }
        else if (qtdparc==3)
        {
            vlr_divida=1.1*divida;
            vlr_juros=0.1*divida;
            vlr_parc=vlr_divida/qtdparc;
        }
        else if (qtdparc==6)
        {
            vlr_divida=1.15*divida;
            vlr_juros=0.15*divida;
            vlr_parc=vlr_divida/qtdparc;
        }
        else if (qtdparc==9)
        {
            vlr_divida=1.2*divida;
            vlr_juros=0.2*divida;
            vlr_parc=vlr_divida/qtdparc;
        }
        else if (qtdparc==12)
        {
            vlr_divida=1.25*divida;
            vlr_juros=0.25*divida;
            vlr_parc=vlr_divida/qtdparc;
        }
        if(qtdparc==1 || qtdparc%3==0)
        {
            printf("o valor da divida é de R$%f, com juros de valor R$%f. Parcelando em %d vezes, o valor da parcela mensalmente fica R$%f." , vlr_divida , vlr_juros , qtdparc , vlr_parc);
        }
        
        
        
    }


    return 0;
}
