/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int codigo , qtd1=0 , qtd2=0 , qtd3=0 , qtd4=0, total=0  , qtderro=0;
    float qtdnulo=0 , qtdbranco=0;

    do
    {
        printf("\n\t\t------ ELEIÇÃO ------");
        printf("\nCandidatos:\n 13 - Lula\n 22 - Bolsonaro\n 12 - Ciro\n 44 - Simone\n 02 - Branco\n 01 - Nulo\n");
        printf("\tDigite o número do candidato que você deseja votar.\n\t --> ");
        scanf("%d" , &codigo);

        if(codigo!=0)
        {
            total++;
            if(codigo==13)
            {
                qtd1++;
                printf("\n\tVoto contabilizado.");
            }
            else if(codigo==22)
            {
                qtd2++;
                printf("\n\tVoto contabilizado.");
            }
            else if(codigo==12)
            {
                qtd3++;
                printf("\n\tVoto contabilizado.");
            }
            else if(codigo==44)
            {
                qtd4++;
                printf("\n\tVoto contabilizado.");
            }
            else if(codigo==02)
            {
                qtdbranco++;
                printf("\n\tVoto contabilizado.");
            }
            else if(codigo==01)
            {
                qtdnulo++;
                printf("\n\tVoto contabilizado.");
            }
            else
            {
                printf("\nCandidato não encontrado. Tente novamente.\n");
                qtderro++;
            }
        }
    } while (codigo!=0);


    printf("\n-------- URNAS 100 %% APURADAS --------\n");
    printf("\t Lula - %d\n\t Bolsonaro - %d\n\t Ciro - %d\n\t Simone - %d" , qtd1 , qtd2 , qtd3 , qtd4);
    

    total=total-qtderro;
    qtdnulo=(qtdnulo/total)*100;
    qtdbranco=(qtdbranco/total)*100;

    printf("\n\t Nulos - %.2f\n\t Brancos - %.2f\n\t" , qtdnulo , qtdbranco);
    



    return 0;
}