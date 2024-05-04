/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , cont , qtdp90ea150=0;
    float peso , altura , porcenti10e30a190=0 , mediatotal=0;

    for(cont=1;cont<=10;cont++)
    {
        printf("\nDigite sua idade: ");
            scanf("%d" , &idade);
            printf("\nDigite sua altura: ");
            scanf("%f" , &altura);
            printf("\nDigite o seu peso: ");
            scanf("%f" , &peso);

            mediatotal+=idade;

            if(peso>90 && altura < 1.5)
            {
                qtdp90ea150++;
            }
            if(altura>1.9)
            {
                if(idade>10 && idade<30)
                {
                    porcenti10e30a190++;
                }
            }
    }
    
    mediatotal=mediatotal/cont;
    porcenti10e30a190=(porcenti10e30a190/cont)*100;

    printf("\nA média total das idades é: %.2f" , mediatotal);
    printf("\nA porcentagem de pessoas que têm entra 10 e 30 anos e que posssuem mais de 1,90 de altura é: %.2f" , porcenti10e30a190);
    printf("\nA quantidade de pessoas que têm mais de 90 kilos e menos de 1,50 de altura é: %d" , qtdp90ea150);



    return 0;
}