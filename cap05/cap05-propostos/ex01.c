/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont=1 , a , b , c , d  , aux;

    do
    {
        printf("digite um número: ");
        scanf("%d" , &a);
        printf("\ndigite um número: ");
        scanf("%d" , &b);
        printf("\ndigite um número: ");
        scanf("%d" , &c);
        printf("\ndigite um número: ");
        scanf("%d" , &d);

        printf("\na ordem digitada foi %d , %d , %d , %d" , a , b ,c , d);

        do
        {
            if(a>d)
            {
                aux=a;
                a=d;
                d=aux;
            }
            if(a>b)
            {
                aux=a;
                a=b;
                b=aux;
            }
            if(b>c)
            {
                aux=b;
                b=c;
                c=aux;
            }
            if(c>d)
            {
                aux=c;
                c=d;
                d=aux;
            }
        } while (a>b || a>d || b>c || c>d);

        printf("\norganizando de forma crescente, a ordem fica %d , %d , %d , %d" , a , b, c , d);
        printf("\norganizando em forma decrescente, a ordem fica %d , %d , %d , %d" , d , c , b , a);
        cont++;
        
    } while (cont<=5);
    



    return 0;
}