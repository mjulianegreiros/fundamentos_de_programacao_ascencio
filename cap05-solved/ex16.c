/*faça um programa para calcular a area de um triangulo e que nao permita a entrada de dados inalidos, ou seja entrada != 0.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float area , base , altura;
    do
    {
        printf("digite a base do triângulo: ");
        scanf("%f" , &base);
        printf("\ndigite a altura do triângulo: ");
        scanf("%f" , &altura);
    } 
    while (base==0 || altura==0);
    
    area=(base*altura)/2;

    printf("\na area desse triangulo é: %f" , area);



    return 0;
}
