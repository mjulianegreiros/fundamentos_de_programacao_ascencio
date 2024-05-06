/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , opiniao , cont , qtd_otimo=0 , qtd_reg=0 , total;
    float porcentbom=0 , media_otimo=0;

    for(cont=1;cont<=15;cont++)
    {
        total++;
        printf("\nDigite sua idade: ");
        scanf("%d" , &idade);
        printf("\n\t-----AVALIE O FILME-----");
        printf("\n\t 1 - REGULAR\n\t 2 - BOM\n\t 3 - ÓTIMO\nResposta: ");
        scanf("%d" , &opiniao);

        if(opiniao==1)
        {
            qtd_reg++;
        }
        else if(opiniao==2)
        {
            porcentbom++;
        }
        else if(opiniao==3)
        {
            qtd_otimo++;
            media_otimo+=idade;
        }
    }

    porcentbom/=total;
    media_otimo/=qtd_otimo;

    printf("\n-----RELATÓRIO - AVALIAÇÕES-----\n");
    printf("\t REGULAR - %d --> Quantidade de pessoas que avaliaram o filme como regular.\n" , qtd_reg);
    printf("\t BOM - %.2f --> Porcentagem de pessoas que avaliaram o filme como bom.\n" , porcentbom*100);
    printf("\t ÓTIMO - %.2f --> Média das idades das pessoas que avaliaram o filme como ótimo.\n" , media_otimo);



    return 0;
}