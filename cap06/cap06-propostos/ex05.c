/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void testealunos(int l[] , int lp[])
{
    int i , j , achou=0;

    for(i=0;i<15;i++)
    {
        for(j=0;j<10;j++)
        {
            if(l[i]==lp[j])
            {
                printf("%d " , l[i]);
                achou++;
            }
        }
    }

    if(achou==0)
    {
        printf("\nNenhum aluno esta matriculado simultaneamente nas duas disciplinas.");
    }
}

int main()
{
    int logica[15] , lingprog[10] , i;

    printf("\nMATRICULAS - ALUNOS DE LOGICA");
    for(i=0;i<15;i++)
    {
        printf("\nDigite a matricula do aluno 0%d: " , i+1);
        scanf("%d" , &logica[i]); 
    }
    printf("\nMATRICULAS - ALUNOS DE LINGUAGEM DE PROGRAMACAO");
    for(i=0;i<10;i++)
    {
        printf("\nDigite a matricula do aluno 0%d: " , i+1);
        scanf("%d" , &lingprog[i]);
    }
    printf("\n\nMatricula dos alunos matriculados nas duas disciplinas ao mesmo tempo:\n");

    testealunos(logica , lingprog);


    return 0;
}