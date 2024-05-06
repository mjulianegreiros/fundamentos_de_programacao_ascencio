/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , qtdf1=0 , qtdf2=0 , qtdf3=0 , qtdf4=0 , cont;
    float mediaf1=0 , mediaf2=0 , mediaf3=0 , mediaf4=0 , peso;

    for(cont=1;cont<=15;cont++)
    {
        printf("\nDigite sua idade: ");
        scanf("%d" , &idade);
        printf("\nDigite seu peso: ");
        scanf("%f" , &peso);

        if(idade>=1 && idade<=10)
        {
            qtdf1++;
            mediaf1+=peso;
        }
        else if (idade>10 && idade<=20)
        {
            qtdf2++;
            mediaf2+=peso;
        }
        else if (idade>20 && idade<=30)
        {
            qtdf3++;
            mediaf3+=peso;
        }
        else if(idade>30)
        {
            qtdf4++;
            mediaf4+=peso;
        }
    }

    mediaf1/=qtdf1;//mediaf1=mediaf1/qtdf1
    mediaf2/=qtdf2;
    mediaf3/=qtdf3;
    mediaf4/=qtdf4;

    printf("\n\t----------------------------");
    printf("\n\tMÉDIA-PESOS/FAIXA ETÁRIA\n");
    printf("\tFAIXA 1 - %.2f" , mediaf1);
    printf("\n\tFAIXA 2 - %.2f" , mediaf2);
    printf("\n\tFAIXA 3 - %.2f" , mediaf3);
    printf("\n\tFAIXA 4 - %.2f" , mediaf4);
    printf("\n\t----------------------------");

    return 0;
}