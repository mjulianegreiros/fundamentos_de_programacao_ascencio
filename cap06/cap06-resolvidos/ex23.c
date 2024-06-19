/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define desocupado 0
#define ocupado 1

void comprarPassagem(int janela[] , int corredor[])
{
    char op;
    int i , nmr_assento , livre=0;

    printf("\nJ - Assento na janela.\nC - Assento no corredor\n\t-->");
    scanf(" %c" , &op);

    if(op=='J')
    {
        printf("\nDigite o banco que você deseja sentar(0 a 24): ");
        scanf("%d" , &nmr_assento);

        if(janela[nmr_assento] == desocupado)
        {
            printf("\nCompra efetivada!");
            janela[nmr_assento] = ocupado;
        }

        else
        {
            for(i=0;i<24;i++)
            {
                if(janela[i]==desocupado || corredor[i]==desocupado)
                {
                    livre++;
                }
            }
            if(livre==0)
            {
                printf("\nÔnibus lotado.");
            }
            else
            {
                printf("\nA poltrona escolhida já está ocupada.");
            }
        }
    }

    else if(op=='C')
    {
        printf("\nDigite o banco que você deseja sentar(0 a 24): ");
        scanf("%d" , &nmr_assento);

        if(corredor[nmr_assento] == desocupado)
        {
            printf("\nCompra efetivada!");
            corredor[nmr_assento] = ocupado;
        }

        else
        {
            for(i=0;i<24;i++)
            {
                if(janela[i]==desocupado || corredor[i]==desocupado)
                {
                    livre++;
                }
            }
            if(livre==0)
            {
                printf("\nÔnibus lotado.");
            }
            else
            {
                printf("\nA poltrona escolhida já está ocupada.");
            }
        }
    }
}

void mapaOcupacao(int janela[] , int corredor[])
{
    int i;

    printf("\n\nLugares - Janela\n");
    for(i=0;i<24;i++)
    {
        if (janela[i]==desocupado)
        {
            printf("\n%d - Desocupado" , janela[i]);
        }
        else
        {
            printf("\n%d - Ocupado" , janela[i]);
        }
    }
    
    printf("\nLugares - Corredor");
    for(i=0;i<24;i++)
    {
        if(corredor[i]==desocupado)
        {
            printf("\n%d - Desocupado" , corredor[i]);
        }
        else
        {
            printf("\n%d - Ocupado" , corredor[i]);
        }
    }
}


int main()
{
    int janela[24] , corredor[24] , i , opcao;

    for(i=0;i<24;i++)
    {
        janela[i] = desocupado;
        corredor[i] = desocupado;
    }

    do
    {
        printf("\n\n--- Bem-vindo a Contijo! ---\n");
        printf("1 - Comprar passagem.\n2 - Ver mapa de ocupação.\n3 - Finalizar.\n\t-->");
        scanf("%d" , &opcao);

        switch (opcao)
        {
        case 1:
            comprarPassagem(janela , corredor);
            break;
        case 2:
            mapaOcupacao(janela, corredor);
            break;
        case 3:
            printf("\nFinalizando programa...");
            break;
        default:
            printf("\nOpção inválida.");
            break;
        }
    } while (opcao!=3);
    
    
    


    return 0;
}