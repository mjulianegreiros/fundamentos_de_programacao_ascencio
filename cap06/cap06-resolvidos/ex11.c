/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void qualMesMaior(int codMaior , float maior)
{
    if (codMaior==0)
    {
        printf("A maior temperatura encontrada foi no mês de janeiro, com %.2f°." , maior);
    }
    else if (codMaior==1)
    {
        printf("A maior temperatura encontrada foi no mês de fevereiro, com %.2f°." , maior);
    }
    else if (codMaior==2)
    {
        printf("A maior temperatura encontrada foi no mês de março, com %.2f°." , maior);
    }
    else if (codMaior==3)
    {
        printf("A maior temperatura encontrada foi no mês de abril, com %.2f°." , maior);
    }
    if (codMaior==4)
    {
        printf("A maior temperatura encontrada foi no mês de maio, com %.2f°." , maior);
    }
    else if (codMaior==5)
    {
        printf("A maior temperatura encontrada foi no mês de junho, com %.2f°." , maior);
    }
    else if (codMaior==6)
    {
        printf("A maior temperatura encontrada foi no mês de julho, com %.2f°." , maior);
    }
    else if (codMaior==7)
    {
        printf("A maior temperatura encontrada foi no mês de agosto, com %.2f°." , maior);
    }
    if (codMaior==8)
    {
        printf("A maior temperatura encontrada foi no mês de setembro, com %.2f°." , maior);
    }
    else if (codMaior==9)
    {
        printf("A maior temperatura encontrada foi no mês de outubro, com %.2f°." , maior);
    }
    else if (codMaior==10)
    {
        printf("A maior temperatura encontrada foi no mês de novembro, com %.2f°." , maior);
    }
    else if (codMaior==11)
    {
        printf("A maior temperatura encontrada foi no mês de dezembro, com %.2f°." , maior);
    }
}

void qualMesMenor(int codMenor , float menor)
{
    if (codMenor==0)
    {
        printf("A menor temperatura encontrada foi no mês de janeiro, com %.2f°." , menor);
    }
    else if (codMenor==1)
    {
        printf("A menor temperatura encontrada foi no mês de fevereiro, com %.2f°." , menor);
    }
    else if (codMenor==2)
    {
        printf("A menor temperatura encontrada foi no mês de março, com %.2f°." , menor);
    }
    else if (codMenor==3)
    {
        printf("A menor temperatura encontrada foi no mês de abril, com %.2f°." , menor);
    }
    if (codMenor==4)
    {
        printf("A menor temperatura encontrada foi no mês de maio, com %.2f°." , menor);
    }
    else if (codMenor==5)
    {
        printf("A menor temperatura encontrada foi no mês de junho, com %.2f°." , menor);
    }
    else if (codMenor==6)
    {
        printf("A menor temperatura encontrada foi no mês de julho, com %.2f°." , menor);
    }
    else if (codMenor==7)
    {
        printf("A menor temperatura encontrada foi no mês de agosto, com %.2f°." , menor);
    }
    if (codMenor==8)
    {
        printf("A menor temperatura encontrada foi no mês de setembro, com %.2f°." , menor);
    }
    else if (codMenor==9)
    {
        printf("A menor temperatura encontrada foi no mês de outubro, com %.2f°." , menor);
    }
    else if (codMenor==10)
    {
        printf("A menor temperatura encontrada foi no mês de novembro, com %.2f°." , menor);
    }
    else if (codMenor==11)
    {
        printf("A menor temperatura encontrada foi no mês de dezembro, com %.2f°." , menor);
    }
}


int main()
{
    float tempMeses[12], maior , menor;
    int i , codMaior , codMenor;

    for(i=0;i<12;i++)
    {
        // receber a temperatura de cada mes
        printf("\nDigite a temperatura do mês %d" , i+1);
        scanf("%f" , &tempMeses[i]);

        // guardar o primeiro valor digitado como maior e menor para as proximas comparações 

        if(i==0)
        {
            maior = tempMeses[i];
            menor = tempMeses[i];
            codMaior = i;
            codMenor = i;
        }

        // selecionando o maior e menor valor digitados

        if (tempMeses[i] > maior)
        {
            maior = tempMeses[i];
            codMaior = i;
        }
        else if (tempMeses[i] < menor)
        {
            menor = tempMeses[i];
            codMenor = i;
        }
    }

    printf("\n");
    qualMesMaior(codMaior , maior);
    printf("\n");
    qualMesMenor(codMenor , menor);

    return 0;
}