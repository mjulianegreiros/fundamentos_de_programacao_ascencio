/*faça um programa que leia um conjunto não determinado de valores e mostre o valor lido, seu quadrado, seu cubo e sua raiz quadrada. finalize a entrada de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num , quad , cubo , raiz;

    do
    {
        printf("digite um número: ");
        scanf("%d" , &num);

        quad=num*num;
        cubo=quad*num;
        raiz=sqrt(num);
        printf("\no quadrado de %d: %d" , num , quad);
        printf("\no cubo de %d é: %d" , num , cubo);
        printf("\na raiz quadrad de %d é: %d" , num , raiz);

    } while (num>0);
    


    return 0;
}