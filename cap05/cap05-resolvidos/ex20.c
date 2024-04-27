/*faça um programa para ler o codigo, o sexo e o nmr de horas/aula trabalhadas mensalmente pelos professores de uma universidade. sabendo-se que cada hora/aula vale R$30,00, emita uma lsitagem contendo o código, o salario bruto e o salario liquido(levando em consideração os descontos explicados a seguir) de todos os profs. mostre também a media dos salarios liquidos dos professores do sexo masculino e a media dos slarios liquidos dos professores de sexo feminino. considere:
1-descontos p/ homens - 10%
2-descontos p/ mulheres - 5%
3-a leitura de informações termina quando for lido o codigo 99999*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int codigo , horas , vlr_hora , contm=0 , conth=0;
    float sal_bruto , sal_liq , mediam=0 , mediah=0;
    char sexo;

    do
    {
        printf("digite seu código: ");
        scanf("%d" , &codigo);
        printf("\ndigite seu sexo: ");
        scanf(" %c" , &sexo);
        printf("\ndigite a quantidade de horas trabalhadas esse mês: ");
        scanf("%d" , &horas);
        
        sal_bruto=vlr_hora*horas;

        if(sexo=='F')
        {
            sal_liq=sal_bruto-(sal_bruto*0.05);
            mediam+=sal_liq;//mediam=mediam+sal_liq
            contm++;
        }
        else
        {
            sal_liq=sal_bruto-(sal_bruto*0.1);
            mediah+=sal_liq;
            conth++;
        }

        printf("\n--------------------------------");
        printf("\n\t\t1-%d");
        printf("\n\t\t2-%c" , sexo);
        printf("\n\t\t3-%d" , horas);
        printf("\n\t\t4-R$ %f" , sal_bruto);
        printf("\n\t\t5-R$ %f" , sal_liq);
         printf("\n--------------------------------");
        
    } while (codigo!=99999);

    mediam=mediah/contm; // mediam/=contm;
    mediah=mediah/conth;

    printf("\na media dos salarios liquidos homens: R$ %f" , mediah);
    printf("\na media dos salarios liquidos mulheres: R$ %f" , mediam);
    
    

    return 0;
}