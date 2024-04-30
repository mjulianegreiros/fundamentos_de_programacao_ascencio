/*enunciado da questão seá postado posteriormente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int custoestq , barato=0 , normal=0 , caro=0 , mediarefig , cont , mpf ,mepf , q=0;
    float preco , impo , precofinal , imptotal=0 , mediaimp , maiorpf , menorpf;
    char refrig , categ;
    for(cont=1;cont<=12;cont=cont+1)
    {
        printf("digite o preço unitário: \n");
        scanf("%f" , &preco);
        printf("digite a categoria(A , L ou V): \n");
        scanf(" %c" , &categ);
        printf("digite se o produto necessita de refrigeração(S ou N): \n");
        scanf(" %c" , &refrig);
        if(preco<=20)
        {
            if(categ=='A')
            {
            custoestq=2;
            }
            else if(categ=='L')
            {
            custoestq=3;
            }
            else if(categ=='V')
            {
            custoestq=4;
            }
        }
        else if(preco>20 && preco<=50)
        {
            if(refrig=='S')
            {
            custoestq=6;
            }
            else if(refrig=='N')
            {
            custoestq=0;
            }
        }
        printf("o custo de estoque do produto %d  ́e: %d \n" , cont , custoestq);
        if(categ=='A' && refrig=='S')
        {
            impo=0.04*preco;
        }
        else
        {
            impo=0.02*preco;
        }
        printf("o imposto do produto %d é: %.2f\n" , cont , impo);
        precofinal=preco + impo + custoestq;
        printf("o preço final do produto %d é %.2f\n" , cont , precofinal);
        if(precofinal<=20)
        {
            barato++;
            printf("o produto está classificado como barato.\n");
        }
        else if(precofinal>20 && precofinal<=100)
        {
            normal++;
            printf("o produto está classificado como normal.\n");
        }
        else
        {
            caro++;
            printf("o produto está classificado como caro.\n");
        }
        mediarefig=mediarefig+custoestq;
        mediaimp=mediaimp+impo;
        if(q==0)
        {
            maiorpf=precofinal;
            menorpf=precofinal;
            mpf=cont;
            mepf=cont;
            q=1;
        }
        if(precofinal>maiorpf)
        {
            maiorpf=precofinal;
            mpf=cont;
        }
        if(precofinal<menorpf)
        {
            menorpf=precofinal;
            mepf=cont;
        }
        imptotal=imptotal+impo;
        printf("%d" , cont);
    }
    printf("o maior preço final foi do produto %d com o valor de %.2f" , mpf , maiorpf);
    printf("o menor preço final foi do produto %d com o valor de %.2f" , mepf ,
    menorpf);
    printf("a quantidade de impostos acumulados foi: %.2f" , imptotal);
    printf("a media de lucro sobre refrigeração foi: %d" , mediarefig/12);
    printf("a media de lucro sobre imposto foi: %.2f" , mediaimp/12);
    return 0;
} 



    

