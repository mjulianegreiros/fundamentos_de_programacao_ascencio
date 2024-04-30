/*enunciado da questão seá postado posteriormente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd , num , cont , cont2 , fat=1 , den=1 , aux=1;
    float numerador , s=0;

    printf("digite a quantidade de termos:\n");
    scanf("%d" , &qtd);

    printf("agora digite um valor para X:\n");
    scanf("%d" , &num);

    for(cont=2;cont<=qtd+1;cont++)
    {
        if(cont%2==0)
        {
            numerador=pow(num, cont) * (-1);
        }
        else
        {
            numerador=pow(num, cont);
        }
        
        printf("termo %d:\n" , cont - 1);

        fat=1;
        for(cont2=2;cont2<=den;cont2++)
        {
            fat = fat *cont2;
        }
        if(den==4)
        {
            aux=-1
        }
        else if(den==1)
        {
            aux=1;
        }
        den=den+aux;

        printf("somando %0f/%d...\n" , numerador , fat);

        s=s + numerador/fat;

    }

    printf("o resultadado é: %2f" , s);



    return 0;
}