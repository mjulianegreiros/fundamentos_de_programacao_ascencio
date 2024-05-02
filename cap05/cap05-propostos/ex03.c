/*enunciado da questão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , cont , qtd1=0 , qtd2=0 , qtd3=0 , qtd4=0 , qtd5=0, qtdtotal=0;

    for(cont=1;cont<=6;cont++)
    {
        printf("Por favor, digite sua idade: ");
        scanf("%d" , &idade);

        qtdtotal++;//creio que essa variável não seja necessária pois existe o contador que pode fazer o papel dela

        if(idade<=15)
        {
            qtd1++;
        }
        else if(idade>15 && idade <=30)
        {
            qtd2++;
        }
        else if (idade>30 && idade<=45)
        {
            qtd3++;
        }
        else if(idade>45&&idade<=60)
        {
            qtd4++;
        }
        else
        {
            qtd5++;
        }
        
    }
    printf("Faixa etária 1 - %d pessoas.\nFaixa etária 2 - %d pessoas.\nFaixa étaria 3 - %d pessoas.\nFaixa etária 4 - %d pessoas.\nFaixa etária 5 - %d pessoas.\n" , qtd1 ,qtd2,qtd3,qtd4,qtd5);

    qtd1=((float)qtd1/(float)qtdtotal)*100; //converti para float para o computador fazer a operação
    qtd5=((float)qtd5/(float)qtdtotal)*100;

    printf("Porcentagem de pessoas na \bfaixa etária 1 - %d%%" , qtd1);
    printf("\nPorcentagem de pessoas na faixa etária 5 _ %d%%" , qtd5);





    return 0;
}