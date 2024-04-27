/*faça um programa que receba duas notas de seis alunos. calcule e mostre:
1-a media das duas notas de cada aluno
2-se a media <= 3, mostre reprovado; se a media > 3 e < 7, mostre exame; se a media >=7, mostre aprovado.
3-o total de aprovados, de exame e de reprovados
4-a media da classe.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1 , n2 , media_alu , media_sala=0;
    int cont , aprov , reprov , exam;

    for(cont=1;cont<=6;cont++)
    {
        printf("digite a nota 1 do aluno %d:\n" , cont);
        scanf("%f" , &n1);
        printf("digite a nota 2 do aluno %d:\n" , cont);
        scanf("%f" , &n2);

        media_alu = (n1+n2)/2;
        media_sala = media_sala + media_alu;
        printf("a média do aluno %d é: %f\n" , cont , media_alu);

        if (media_alu<=3)
        {
            printf("o aluno está reprovado.\n");
        }
        else if (media_alu>3 && media_alu<7)
        {
            printf(" aluno vai fazer o exame.\n");
        }
        else
        {
            printf("o aluno está aprovado.\n");
        }
        
    }
    
    media_sala=media_sala/6; //or media_sala=media_sala/cont
    printf("a média das notas da turma é: %f" , media_sala);

    return 0;
}