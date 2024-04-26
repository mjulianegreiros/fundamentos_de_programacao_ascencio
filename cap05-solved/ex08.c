/*faça um programa que leia o número de termos, determine e mostre os valores de acordo com a série a seguir
2 7 3 4 21 12 8 63 48 16 189 192 32 567 768...*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd , n1=2 , n2=7 , n3=3 , cont;
    printf("digite a quantidade de termos que você deseja que apareça: \n");
    scanf("%d" , &qtd);
    printf("%d , %d , %d ," , n1 , n2 ,n3);
    for(cont=1;cont<=qtd-3;cont++)//qtd-3 pois os 3 primeiros elementos ja foram mostrados
    {
        n1=n1*2;
        n2=n2*3;
        n3=n3*4;
        printf("%d , %d , %d ," , n1 , n2 ,n3);
    }

    return 0;
}