/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char acao;
    float p_compra , p_venda , lucro=0 , lucrototal=0;
    int maismil=0 , menos200=0;

    do
    {
        printf("\nDigite a ação comprada: ");
        scanf(" %c" , &acao);
        
        if(acao!='F')
        {
            printf("\nDigite o preço de compra: R$");
            scanf("%f" , &p_compra);
            printf("\nDigite o preço de venda: R$");
            scanf("%f" , &p_venda);
            
            lucro=p_venda-p_compra;
            lucrototal+=lucro;

            printf("\nO seu lucro foi de R$%.2f" , lucro);

            if(lucro>1000)
            {
                maismil++;
            }
            else if(lucro<200)
            {
                menos200++;
            }
        }    
    } while (acao!='F');

    printf("\nO lucro total foi de R$%.2f;\nA quantidade de ações que tiveram lucro de mais de mil reais foi %d;\nA quantidade de ações que lucraram menos de duzentos reais é: %d" , lucrototal , maismil , menos200);

    
    


    return 0;
}