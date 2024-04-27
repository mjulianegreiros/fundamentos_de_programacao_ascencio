#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int codigo , veic , codmaior , codmenor , acids , maior , menor , mediatotal=0 , mediamenos=0 , cont , q=0 , qtdacids;

  do
  {
    printf("digite o código da cidade:\n");
    scanf("%d" , &codigo);
    printf("digite a quantidade de veículos na cidade:\n");
    scanf("%d" , &veic);
    printf("digite a quantidade de acidentes na cidade:\n");
    scanf("%d" , &acids);
    
    
    //q é uma variavel para poder inicializar os valores de maior e menor com o primeiro valor digitado.
    if(q==0)
    {
        maior=acids;
        menor=acids;
        codmaior=codigo;
        codmenor=codigo;
        q=1;
    }
    if(acids>maior)
    {
        maior= acids;
        codmaior=codigo;
    }
    else if(acids<manor)
    {
        menor=acids;
        codmenor=codigo;
    }
    if(veic<2000)
    {
        qtdacids++;
        mediamenos=mediamenos+acids;
    }
    mediatotal=mediatotal+veic;
    cont++;

  } 
  while (cont<=5);

  printf("a media de veiculos das 5 cidades é: %d\n" , mediatotal/5);
  printf("a media de acidentes nas cidades que tem menos de 2000 veiculos é: %d" , mediamenos/qtdacids);
  printf("\na cidade de maior quantidades de acidentes é a %d com %d acidentes.\n" , codmaior , maior);
  printf("a cidade de menor quantidades de acidentes é a %d com %d acidentes.\n" , codmenor , menor);
  
    



    return 0;
}