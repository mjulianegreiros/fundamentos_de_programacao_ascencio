/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , cont=0;
    float altura , media;

    do
    {
        printf("\n\nDigite sua idade\n\t --> ");
        scanf("%d" , &idade);
        if(idade>0)
        {
            printf("\nDigite sua altura\n\t --> ");
            scanf("%f" , &altura);
            if(idade>50)
            {
                media+=altura;
                cont++;
            }
        }
    } while (idade>0);

    media/=cont;
    printf("\nA média das alturas das pessoas com mais de 50 anos é %.2f" , media);
    



    return 0;
}