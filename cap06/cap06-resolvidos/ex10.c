/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void receberNotas(char *g)
{
    int i;
    for ( i = 0; i < 8; i++)
    {
        printf("\nQual a resposta da questão %d:" , i+1);
        scanf(" %c" , &g[i]);
        printf("\nQuestão armazenada.");
    }
    
}
void verificarResposta(char aluno , char prof , int *n)
{
    printf("aluno - %c // professor - %c" , aluno , prof);
    if(aluno == prof)
    {
        *n+=1;
    }
}

int main()
{
    char gabarito[8] , resp[8];
    int i , j , nota , aluno;
    float porcentagem;

    printf("\n\t --- Área do Professor ---\n\t --> Gabarito - Prova 1\n");

    receberNotas(gabarito);

    printf("\nVerifique se está tudo certo: ");
    for(i=0;i<8;i++)
    {
        printf("\nQuestão %d - %c" , i+1 , gabarito[i]);
    }
    
    char alterar;
    do
    {
        printf("\nVocê deseja alterar?\n\t S - Sim\n\t N - Não ");
        

        scanf(" %c" , &alterar);

        if(alterar=='S')
        {
            receberNotas(gabarito);
        }
    } while(alterar =='S');

    for(j=1;j<=10;j++)
    {
        printf("\nDigite a matricula do aluno: ");
        scanf("%d" , &aluno);
        nota=0;
        for(i=0;i<8;i++)
        {
            printf("\nQual a resposta do aluno %d para a questão %d? " , aluno , i+1);
            scanf(" %c" , &resp[i]);
            verificarResposta(resp[i] , gabarito[i] , &nota);
        }
        printf("\nA nota do aluno %d é: %d" , aluno , nota);

        if(nota>=6)
        {
            porcentagem++;
        }
    }

    porcentagem=(porcentagem/10)*100;

    printf("\nA porcentagem de alunos apovados é: %.2f" , porcentagem);

    
    



    return 0;
}