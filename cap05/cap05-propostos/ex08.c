/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , cont , qtdmais50=0 , total=0 , qtdruivaazul=0 , qtdmenos150=0;
    float peso , altura , porcentazul=0 , mediamenos150;
    char olhos , cabelos;

    for(cont=1;cont<=6;cont++)
    {
        total++;
        printf("\nDigite sua idade: ");
        scanf("%d" , &idade);
        printf("\nDigite sua altura: ");
        scanf("%f" , &altura);
        printf("\nDigite o seu peso: ");
        scanf("%f" , &peso);
        printf("\nDigite a cor dos seus olhos\n\t C - Castanho\n\t A - Azul\n\t V - Verde\n\t P - Preto: ");
        scanf(" %c" , &olhos);
        printf("\nDigite a cor dos seus cabelos\n\t P - Preto\n\t C - Castanho\n\t L - Loiro\n\t R - Ruivo: ");
        scanf(" %c" , &cabelos);

        if(idade > 50 && peso < 60)
        {
            qtdmais50++;
        }
        if(altura < 1.5)
        {
            mediamenos150+=altura;
            qtdmenos150++;
        }
        if(olhos=='A')
        {
            porcentazul++;
        }
        if(cabelos=='R'&& olhos!='A')
        {
            qtdruivaazul++;
        }
    } 
    
    mediamenos150=mediamenos150/qtdmenos150;
    porcentazul=(porcentazul/total)*100;

    printf("\nA quantidade de pessoas com mais de 50 anos é: %d" , qtdmais50);
    printf("\nA média das pessoas com menos de 1,50 de altura é: %.2f" , mediamenos150);
    printf("\nA porcentagem das pessoas que possuem olhos azuis é: %.2f" , porcentazul);
    printf("\nA quantidade de pessoas ruivas que não têm os olhos azuis é: %d" , qtdruivaazul);




    return 0;
}