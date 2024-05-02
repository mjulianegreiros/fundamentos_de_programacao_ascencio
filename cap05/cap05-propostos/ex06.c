/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont;
    char codigo;
    float valor , valorvista=0, valorprazo=0 , valortotal=0 , first;

    for(cont=1;cont<=15;cont++)
    {
        printf("Digite o código da transação(V - a vista ou P - a prazo): ");
        scanf(" %c" , &codigo);
        printf("\nDigite o valor do produto R$ ");
        scanf("%f" , &valor);
        
        
        if(codigo=='V')
        {
            valorvista+=valor;
        }
        else if(codigo=='P')
        {
            valorprazo+=valor;
        }

        valortotal+=valor;
    }

    printf("\nA empresa lucrou R$%.2f com compras a vista e R$%.2f com compras a prazo, totalizando %.2f\n" , valorvista , valorprazo , valortotal);
    
    first=valortotal/3;

    printf("Ao chegar o mês de pagamento da primeira parcela, a empresa lucrará R$%.2f." , first);




    return 0;
}