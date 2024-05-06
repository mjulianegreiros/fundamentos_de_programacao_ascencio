/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char sexo , resp;
    int cont , qtd_h=0 , qtd_m=0 , qtdsim=0 , qtdnao=0;
    float porcent_h;

    for(cont=1;cont<=10;cont++)
    {
        printf("\nDigite seu sexo\n\tF-Feminino\n\tM-Masculino\nResposta : ");
        scanf(" %c" , &sexo);
        printf("\nVocê gostou da nova base da Virgínia Fonseca?\n\tS-Sim\n\tN-Não\nResposta: ");
        scanf(" %c" , &resp);


        if(sexo=='M')
        {
            qtd_h++;
            if(resp=='S')
            {
                qtdsim++;
            }
            else if (resp=='N')
            {
                porcent_h++;
                qtdnao++;
            }
            
        }
        else if(sexo=='F')
        {
            if(resp=='S')
            {
                qtd_m++;
                qtdsim++;
            }
            else if(resp=='N')
            {
                qtdnao++;
            }
        }
    }
    porcent_h=(porcent_h/qtd_h)*100;
    

    printf("\n\t----- RELATÓRIO DO PRODUTO -----");
    printf("\n\t %d pessoas gostaram da nova base.\n\t %d pessoas não gostaram da nova base.\n\t %d mulheres gostaram da nova base.\n\t %.2f foi a porcentagem de homens que não gostou da base entre todos os homens.\n" , qtdsim , qtdnao , qtd_m , porcent_h);

    return 0;
}