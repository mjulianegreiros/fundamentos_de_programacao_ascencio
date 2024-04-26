/*em um campeonato de futebol existem 5 times, cada um com 11 jogadores. faça um programa que receba a idade , o peso e a altura de cada um dos jogadores, calcule e mostre:
1-qtd de jogadores < 18 anos;
2-media da idade de jogadores de cada time;
3-media da altura de todos os jogadores do campeonato;
4-porcentagem dos jogadores com mais de 80kg entre todos os jjogadores do compeonato.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont_time , cont_jog , idade  , menos18=0 , qtdmais80 ;
    float mediaid_time=0, mediaalt_camp=0 , porcentmais80 , peso , altura;

    for(cont_time=1;cont_time<=5;cont_time++)
    {
        printf("informações do time %d\n" , cont_time);
        for(cont_jog=1;cont_jog<=11;cont_jog++)
        {
            printf("informações do jogador %d" , cont_jog);
            printf("digite a idade do jogador: \n");
            scanf("%d" , &idade);
            printf("digite o peso do jogador: \n");
            scanf("%f" , &peso);
            printf("digite a altura do jogador: \n");
            scanf("%f" , &altura);

            if (idade<18)
            {
                menos18++;
            }
            mediaid_time+=idade;//n sei se esta certo mediaidtime=mediaidtime+idade
            mediaalt_camp=mediaalt_camp+altura;

            if (peso>80)
            {
                qtdmais80++;
            }
        }
        mediaid_time=mediaid_time/11;
        printf("a media das idades dos jogadores do time %d é %f" , cont_time , mediaid_time);
    }
    mediaalt_camp=mediaalt_camp/55;
    printf("\na média das alturas de todos os jogadores com campeonato é: %f\n" , mediaalt_camp);
    porcentmais80=(qtdmais80/55) *100;
    printf("a quantidade de jogadores com menos de 18 anos é: %d" , menos18);
    printf("\na porcentagem de jogadores com mais de 80 kilos é: %f" , porcentmais80);

    return 0;
}