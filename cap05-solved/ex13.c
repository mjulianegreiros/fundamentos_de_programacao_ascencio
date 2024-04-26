/*foi feita uma pesquisa para determinar o inidice de mortalidade infantil em certo periodo. faça um programa que:
1-leia o numero de criancas mascidas no periodo
2-identifique o sexo e o tempo de vida de cada criança
3-mostre a % de crianças meninas mortas
4-mostre a % de crianaças meninos mortas
5-a % de crianças que viveram menos de 24 meses */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd , tempo, cont;
    char sexo;
    float qtdh=0,qtdm=0,qtdtemp=0;

    printf("digite a quantidade de crianças nascidas no periodo: \n");
    scanf("%d" , &qtd);

    for(cont=1;cont<=qtd;cont++)
    {
        printf("digite o sexo da criança(F-feminino/M-masculino): \n");
        scanf(" %c" , &sexo);
        printf("digite o tempo de vida da criança em meses: \n");
        scanf("%d" , &tempo);

        if(sexo=='M')
        {
            qtdm++;
        }
        else
        {
            qtdh++;
        }
        if(tempo<=24)
        {
            qtdtemp++;
        }
    }

    qtdm=(qtdm/qtd)*100;
    qtdh=(qtdh/qtd)*100;
    qtdtemp=(qtdtemp/qtd)*100;
    printf("a porcentagem de crianças meninas mortas é: %f\n" , qtdm);
    printf("a porcentagem de crianças meninos mortas é: %f\n" , qtdh);
    printf("a porcentagem de crianças mortas com menos de 24 meses é %f" , qtdtemp);



    return 0;
}
