/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , qtd=0 ;
    float media=0;

    do
    {
        printf("\nDigite sua idade: ");
        scanf("%d" , &idade);
        media+=idade;
        qtd++;
        
        
    }
    while (idade!=0);
    
    qtd--;
    media/=qtd;
    

    printf("A média das idades é: %.2f" , media);
    

    return 0;
}