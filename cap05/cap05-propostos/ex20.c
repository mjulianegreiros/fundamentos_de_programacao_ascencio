/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcao , peso=0 , cont , somapeso=0;
    float media=0 , nota; 

    do
    {
        printf("\n\t------ MENU ------");
        printf("\n\t - 1 - média aritmetica de duas notas;\n\t - 2 - média ponderada de 3 notas;\n\t - 3 - sair;\n\t --> ");
        scanf("%d" , &opcao);

        if(opcao==1)
        {
            for(cont=1;cont<=2;cont++)
            {
                printf("\nDigite a nota %d\n\t --> " , cont);
                scanf("%f" , &nota);
                media+=nota;
            }
            media/=2;
            printf("\nA média do aluno foi: %.2f" , media);
        }
        else if(opcao==2)
        {
            for(cont=1;cont<=3;cont++)
            {
                printf("\nDigite a nota %d\n\t --> " , cont);
                scanf("%f" , &nota);
                printf("\nDigite o peso da nota %d\n\t --> " , cont);
                scanf("%d" , &peso);
                media=media+(nota*peso);
                somapeso+=peso;

                printf("\n%.2f // %d\n" , media , somapeso);
            }
            media/=somapeso;
            printf("\nA média do aluno foi: %.2f" , media);
        }
        else if(opcao==3)
        {
            printf("\nSaindo...\n\n\tPrograma finalizado.");
        }
        else
        {
            printf("\nOpção inválida. Tente novamente.");
        }
        
    } while (opcao>=1 && opcao<3);
       




    return 0;
}