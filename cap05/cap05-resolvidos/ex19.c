/*faça um programa que leia um número não determinado de pares de valores[m , n], todos inteiros e positivos, um par de cada vez. e que calcule e mostre a soma de todos os numeros inteiros entre m e n(inclusive). a digitação de pares terminara quando m >=n.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m , n , soma=0 , cont;
    
    do
    {
        printf("digite o valor de m: ");
        scanf("%d" , &m);
        printf("\ndigite o valor de n: ");
        scanf("%d" , &n);
        if(m>0 && n>0)
        {
            for (cont=m;cont<=n;cont++)
            {
                soma=soma+cont;
            }
            printf("a soma do intervalo de %d a %d é: %d" , m , n , soma);
            
        }
    } while (m>=n);
    


    return 0;
}