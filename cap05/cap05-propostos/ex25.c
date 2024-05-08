/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int codigo=2 , invest;
    float valor , juros , juros_pg , total_invest , rend;

    while (codigo>0)
    {
        printf("\nDigite o código do cliente: ");
        scanf("%d" , &codigo);

        if(codigo>0)
        {
            printf("\nEntrando...\n\n\n\t Bem-vindo, cliente %d!\nQual investimento você deseja fazer?\n\t 1. Poupança\n\t 2. Poupança plus\n\t 3. Fundos de renda fixa\n\t --> Sua escolha é: " , codigo);
            scanf("%d" , &invest);
            printf("\nBoa escolha, cliente %d!\n\t Agora, indique o  valor que você deseja investir.\n\t --> " , codigo);
            scanf("%f" , &valor);

            if(invest==1)
            {
                rend=valor*1.015;
                juros=rend-valor;
            }
            else if(invest==2)
            {
                rend=valor*1.02;
                juros=rend-valor;
            }
            else if (invest==3)
            {
                rend=valor*1.04;
                juros=rend-valor;
            }

            total_invest+=valor;
            juros_pg+=juros;
            printf("\nCom o investimento %d, seu dinheiro rendeu %.2f." , invest , rend);
            
        }
        else
        {
            printf("\nSaindo...\n\t Programa finalizado com sucesso!");
        }
    }
    
    



    return 0;
}