/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void deposito(int conta[] , float saldo[])
{
    int nmr_conta , achou=0 , i;
    float vlr_dep;

    printf("\nDigite o número da sua conta: ");
    scanf("%d" , &nmr_conta);

    for ( i = 0; i < 10; i++)
    {
        if(conta[i]==nmr_conta)
        {
            achou=1;
            printf("\nDigite o valor que deseja inserir: R$");
            scanf("%f" , &vlr_dep);
            
            saldo[i] = saldo[i] + vlr_dep;

            printf("\nOperação realizada com sucesso!\nSeu novo saldo é: R$%.2f" , saldo[i]);

            break; 
        }
    }
    if(achou==0)
    {
        printf("\nConta não encontrada.");
    }
    
}

void saque(int conta[] , float saldo[])
{
    int nmr_conta , achou=0 , i;
    float vlr_saque;

    printf("\nDigite o número da conta: ");
    scanf("%d" , &nmr_conta);

    for(i=0;i<10;i++)
    {
        if(nmr_conta==conta[i])
        {
            achou = 1;
            printf("\nDigite o valor do saque: R$");
            scanf("%f" , &vlr_saque);

            if(saldo[i]>=vlr_saque)
            {
                saldo[i] = saldo[i] - vlr_saque;
                printf("\nOperação realizada com sucesso!\nSeu novo saldo é: R$%.2f" , saldo[i]);
                break;
            }
            else
            {
                printf("\nSaldo insuficiente.");
            }
        }
    }
    if(achou==0)
    {
        printf("\nConta não encontrada.");
    }
}
void ativoBancario(float saldo[])
{
    int i;
    float soma=0;
    
    for(i=0;i<10;i++)
    {
        soma += saldo[i];
    }

    printf("\nO ativo bancário é: R$%.2f" , soma);
}


int main()
{
    float saldo[10];
    int conta[10] , i , opcao;

    for(i=0;i<10;i++)
    {
        printf("\nDigite o número da nova conta: ");
        scanf("%d" , &conta[i]);
        printf("\nDigite o valor do saldo da conta %d: R$", conta[i]);
        scanf("%f" , &saldo[i]);
    }

    do
    {
        printf("\n\n----- MENU DE OPERAÇÕES -----\n");
        printf("1 - Efetuar depósito.\n2 - Efetuar saque.\n3 - Consultar o ativo bancário.\n4 - Finalizar programa.\n\t --> ");
        scanf("%d" , &opcao);

        switch (opcao)
        {
        case 1:
            deposito(conta , saldo);
            break;
        case 2:
            saque(conta , saldo);
            break;
        case 3:
            ativoBancario(saldo);
            break;
        case 4:
            printf("\nFinalizando programa...");
        default:
            printf("\nOpção inválida. Tente novamente.");
            break;
        }

        

    } while (opcao!=4);
    



    return 0;
}