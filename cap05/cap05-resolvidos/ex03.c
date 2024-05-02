/*3) Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int qtd , num , cont , fat=1 , cont2;

  printf("digite a quantidade de números que você quer ver o fatorial; \n");
  scanf("%d" , &qtd);

  for(cont=1;cont<=qtd;cont++)
  {
    printf("digite o número para calcular o fatorial dele:\n");
    scanf("%d" , &num);

    for(cont2=1;cont2<=num;cont2++)
    {
        fat=fat*cont2;
        printf("o fatorial de %d é %d" , cont2 , fat);
    }
  }
  



    return 0;
}
