/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco_ing=5 , lucro , cont;
    int qtd_ing=120;

    lucro=(qtd_ing*preco_ing)-200;

    printf("\nCom o preço do ingresso a R$%.2f, a empresa venderia um total de %d ingressos e obteria um lucro de R$%.2f.\n" , preco_ing , qtd_ing , lucro);
    for(cont=preco_ing-0.5;cont>=1;cont=cont-0.5)
    {
        qtd_ing=qtd_ing+26;
        lucro=(qtd_ing*cont)-200;
        printf("\nCom o preço do ingresso a R$%.2f, a empresa venderia um total de %d ingressos e obteria um lucro de R$%.2f.\n" , cont , qtd_ing , lucro);
    
    }
    





    return 0;
}