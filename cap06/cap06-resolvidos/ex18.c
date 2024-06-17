/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void qualLado(int lado , int *l1 , int *l2 , int *l3 , int *l4 , int *l5 , int *l6)
{
    if(lado==1)
    {
        *l1 = *l1 + 1;
    }
    else if(lado==2)
    {
        *l2 = *l2 + 1;
    }
    else if(lado==3)
    {
        *l3 = *l3 + 1;
    }
    else if(lado==4)
    {
        *l4 = *l4 + 1;
    }
    else if(lado==5)
    {
        *l5 = *l5 + 1;
    }
    else if(lado==6)
    {
        *l6 = *l6 + 1;
    }
}

int main()
{
    srand(time(NULL));
    
    int dado[20] , i , lado1=0 , lado2=0 , lado3=0 , lado4=0 , lado5=0 , lado6=0;

    for(i=0;i<20;i++)
    {
        dado[i] = rand()%6 + 1; // função para sortear numeros aleatorios de 1 a 6
        printf("\nLado sorteado: %d" , dado[i]);
    }

    for(i=0;i<20;i++)
    {
        qualLado(dado[i] , &lado1 , &lado2 , &lado3 , &lado4 , &lado5 , &lado6);
    }

    printf("\nLado 1 - %d vezes.\nLado 2 - %d vezes.\nLado 3 - %d vezes.\nLado 4 - %d vezes.\nLado 5 - %d vezes.\nLado 6 - %d vezes." , lado1 , lado2 , lado3 , lado4 , lado5 , lado6);


    return 0;
}