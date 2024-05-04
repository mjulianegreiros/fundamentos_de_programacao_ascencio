/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , cont , total=0 , mais50=0 , qtd10e20=0;
    float altura , peso , mediaalt , porcentmenos40=0;

    for(cont=1;cont<=5;cont++)
    {
        printf("\nDigite sua idade: ");
        scanf("%d" , &idade);
        printf("\nDigite sua altura: ");
        scanf("%f" , &altura);
        printf("\nDigite o seu peso: ");
        scanf("%f" , &peso);

        if(idade>50)
        {
            mais50++;
        }
        if(idade>10 && idade<20)
        {
            mediaalt+=altura;
            qtd10e20++;
        }
        if(peso<40)
        {
            porcentmenos40++;
        }
        total++;
    }

    mediaalt=(mediaalt/qtd10e20);
    porcentmenos40=(porcentmenos40/total)*100;
    
    printf("\nA quantidade de pessoas com mais de cinquenta anos no grupo é: %d" , mais50);
    printf("\nA média das alturas das pessoas com idades entre 10 e 20 anos é: %.2f" , mediaalt);
    printf("\nA porcentagem das pessoas com menso de 40 kilos de peso é: %.2f" , porcentmenos40);



    return 0;
}