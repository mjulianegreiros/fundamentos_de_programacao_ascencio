/*faça um programa que recba o salario de um funcionario chamdo carlos. sabe-se que um outro funcionário, joão, tem um salário equivalente a 1/3 do salário de carlos. carlos aplicará integralmente seu salário na cardenete de poupança qe rende 2% ao mês, e joao aplicará seu salario integralmente no fundo de renda fixa, que rende 5% ao mês. o programa deverá calcular e mostrar quantos meses são necessarios para que o valor de joao se iguale ou ultrapasse o valor pertencente a carlos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float carlos , joao;
    int mes=0;

    printf("Carlos, digite seu salário.\n");
    scanf("R$ %f" , &carlos);
    joao = carlos/3;
    printf("João, seu salário é: R$ %f" , joao);

    do
    {
        carlos=carlos*1.02; //carlos=carlos+0,02*carlos
        joao=joao*1.05;
        mes++;
    } while (joao<=carlos);

    printf("João, após %d meses, conseguirá se igualar/ultrapassar o valor acumulado por Carlos." , mes);
    



    return 0;
}
