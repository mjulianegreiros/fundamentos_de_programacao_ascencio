/*enunciado da questão seá postado posteriormente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int cont=1 , cod , horastrab , valorhora , sal_inicio , sal_fim , salmin , aliment;
   char turno , categ
   while (cont<=10)
   {
    printf("digite o seu codigo e suas horas trabalhadas: \n");
    scanf("%d %d" , cod , horastrab);
    printf("agora, digite seu turno\n(M-matutino\tV-vespertino\tN-noturno):");
    scanf(" %c" , &turno);
    printf("\npor ultimo, digite seu cargo\n(G-gerente\tO-operario):");
    
    if(turno != 'M' || turno != 'V' || turno != 'N' && categ != 'O' || categ != 'G')
    {
        printf("\ninformações digitadas inválidas. tente novamente.");
        break;
    }
    else
    {
        salmin = 450;
        if (categ=='G')
        {
            if (turno=='M')
            {
                valorhora=salmin*0.18;
            }
            else
            {
                valorhora=salmin*0.15;
            }
            
        }
        else if(categ=='O')
        {
            if (turno=='M')
            {
                valorhora=salmin*0.13;
            }
            else
            {
                valorhora=salmin*0.1;
            }
            
        }
        sal_inicio=salmin + (valorhora * horastrab);

        if (sal_inicio<=300)
        {
            aliment=sal_inicio*0.2;
        }
        else if (sal_inicio>300 && sal_inicio <= 600)
        {
            aliment=sal_inicio*0.15;
        }
        else
        {
            aliment=sal_inicio*0.05;
        }
        
        sal_fim = sal_incio + aliment;

        printf("\no trabalhador de código %d, concluiu %d horas, com cada uma tendo valor de R$%d, totalizando um salário inicial de R$%d e um salário final de R$%d, incluindo o valor de alimentação de R$%d.\n");
        
        
        cont++;   
    }
   }
    



    return 0;
}