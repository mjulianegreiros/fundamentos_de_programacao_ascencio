/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcao , meses;
    float sal , novo_sal , ferias , sal13;

    do
    {
        printf("\n\n\t-------- MENU ---------");
        printf("\n\t 1. Novo salário\n\t 2. Férias\n\t 3. Décimo terceiro\n\t 4. Sair\n\t --> Opção: ");
        scanf("%d" , &opcao);

        if(opcao>=1 && opcao<=3)
        {
            if(opcao==1)
            {
                printf("\nDigite o seu salário\n\t --> R$");
                scanf("%f" , &sal);
                if(sal<=210)
                {
                    novo_sal=sal*1.15;
                }
                else if(sal>210 && sal<=600)
                {
                    novo_sal=sal*1.1;
                }
                else if(sal>600)
                {
                    novo_sal=sal*1.05;
                }
                printf("\nO seu novo salário é R$%.2f" , novo_sal);
            }
            else if(opcao==2)
            {
                printf("\nDigite o seu salário\n\t --> R$");
                scanf("%f" , &sal);
                ferias=sal+(sal/3);
                printf("\nO valor das suas férias remuneradas é R$%.2f" , ferias);
            }
            else if(opcao==3)
            {
                printf("\nDigite seu salário\n\t --> R$");
                scanf("%f" , &sal);
                printf("\nDigite a quantidade de meses que você trabalhou na empresa\n\t --> ");
                scanf("%d" , &meses);
                
                if(meses<=12)
                {
                    sal13=(sal*meses)/12;
                }
                printf("\nO valor do seu 13° é R$%.2f" , sal13);
            }
        }
        else if(opcao==4)
        {
            printf("\nSaindo...\n\t Programa finalizado.");
        }
        else
        {
            printf("\nCódigo inválido.");
        }
        
    } while (opcao>=1 && opcao<=3);
    



    return 0;
}