/*enunciado da questão será postado posteriormente.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco , imp , transp , preco_final , total_imp=0 , seguro;
    char meio_transp , perigo;
    int pais;

    do
    {
        printf("Digite o preço unitário do produto: ");
        scanf("%f" , &preco);
        printf("\nDigite a origem do produto\n1 - Estados Unidos\n2 - México\n3 - Outros: ");
        scanf("%d" , &pais);
        printf("\nDigite se o tranporte do produto tem algum risco\nS - Sim\nN - Não: ");
        scanf(" %c" , &perigo);
        printf("\nDigite o meio de transporte que o produto usará\nT - Terrestre\nF - Fluvial\nA - Aéreo: ");
        scanf(" %c" , &meio_transp);

        seguro=0;//reiniciando a variavel para nao alterar o preço final dos produtos que naao tiverem seguro
        if(preco<=100)
        {
            imp=0.05*preco;
        }
        else if(preco>100)
        {
            imp=0.1*preco;
        }
        printf("\n O imposto aplicado no produto será: R$%f" , imp);

        if(perigo=='S')
        {
            if(pais==1)
            {
                transp=50;
            }
            else if(pais==2)
            {
                transp=21;
            }
            else if(pais==3)
            {
                transp=24;
            }
        }
        else if(perigo=='N')
        {
            if(pais==1)
            {
                transp=12;
            }
            else if(pais==2)
            {
                transp=21;
            }
            else if(pais==3)
            {
                transp=60;
            }
        }
        printf("\nO valor cobrado sobre o transporte do produto é: R$%f" , transp);

        
        if(pais==2 || meio_transp=='A')
        {
            seguro=preco/2;
            printf("\nO seguro do produto vale: R$:%f" , seguro);
        }

        preco_final=preco+imp+transp+seguro;
        total_imp+=imp;

        printf("\nO preço final do seu produto é: R$%f" , preco_final);
    } 
    while (preco>0);
    
    printf("\nO valor final de impostos de todos os produtos somados é: R$%f" , total_imp);
    


    return 0;
}