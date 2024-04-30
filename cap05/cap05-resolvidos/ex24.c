/*faça um programa que exiba o menu de opções a seguir, perimita o usuário escolher a opção desejada, receba os dados necessarios para executar a operação e mostre o resultado.verifique a possibilidade de opçao invalida e não se preocupe com restrições de salário do tipo inválidas.
menu
1-imposto --> receber salario e calcular e mostrar o valor do imposto
    salario<500 - 5%
    salario>500 e <850 - 10%
    salario>850 - 15%
2-novo salario --> receber salario e calcular e mostrar o novo salario
    slario > 1500 - +25
    salario >= 750 e <=1500 - +50
    salario >= 450 e <750 - +75
    salario < 450 - +100
3-classificação --> receber salario e mostrar sua classificação na tabela
    salario <= 700 - mal remunerado
    salario > 700 - bem remunerado
4-finalizar programa.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcao;
    float sal , imp , novosal;
   
   do
    {
        printf("\b\t\tMENU DE OPÇÕES\n\n 1 - imposto\n 2 - novo salário\n 3 - classificação\n 4 - fechar programa\nDigite sua escolha: ");
        scanf("%d" , &opcao);

        if(opcao==1)
        {
            printf("\nDigite o seu salário: ");
            scanf("%f" , &sal);

            if(sal<500)
            {
                imp=0.05*sal;
            }
            else if(sal>=500 && sal<=850)
            {
                imp=0.1*sal;
            }
            else // else pois desconsidera a entrada de salarios inválidos.
            {
                imp=0.15*sal;
            }
            printf("\nO imposto aplicado ao salário R$%f é: R$%f" , sal , imp);
        }
        else if(opcao==2)
        {
            printf("\nDigite o seu salário: ");
            scanf("%f" , &sal);

            if (sal>1500)
            {
                novosal=sal+25;
            }
            else if (sal>=750 && sal <=1500)
            {
                novosal=sal+50;
            }
            else if(sal<750 && sal>=450)
            {
                novosal=sal+75;
            }
            else(sal<450)
            {
                novosal=sal+100;
            }
            printf("\nO seu salário antigo, no valor de R$%f, agora tem valor de R$%f" , sal , novosal);
        }
        else if(opcao==3)
        {
            printf("\nDigite o seu salário: ");
            scanf("%f" , &sal);

            if(sal<=700)
            {
                printf("\nVocê é considerado mal remunerado.")
            }
            else
            {
                printf("\nVocê é considerado bem remunerado.")
            }
            
        }
        
    }
    while(opcao>=1 && opcao<=3);

    


    return 0;
}