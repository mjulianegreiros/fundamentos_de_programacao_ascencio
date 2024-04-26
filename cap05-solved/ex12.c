/*em uma fábrica trabalham homents e mulheres divididos em 3 lasses: classe 1-30 peças; classe2-31 a 50 peças; classe3-50+ peças.
classe 1 recebe salario minimo
classe 2 recebe salario minimo + 3% do salario/peça acima das 30 iniciais
classe 3 recebe salario minimo +5% do salario/peça acima das 30 iniciais
faça um prgrama que receba o nmr do operario , nmr de peças feitas , o sexo do operario, calcule e mostre:
1-nmr do operario e seu salario
2-total da folha de pagamento da fabrica
3-o total de oeças fabricadas
4-media de peças fabricadas por homens
5-media de peças fabricadas por mulheres
6-nmr do operario de maior salario
a fabrica tem 15 operarios*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int operario , pecas , pecas_fab=0 ,  qtdh=0 , qtdm=0 , cont , q=1;
    char sexo;
    float folhapag=0  , mediah=0 , mediam=0 , sal , salmin=500 , maiorsal , codmaior;//salario mininmo estabelecido por mim

    for(cont=1;cont<=15;cont++)
    {
        printf("DADOS DO FUNCIONÁRIO %d" , cont);
        printf("\ndigite o código do funcionário: \n");
        scanf("%d" , &operario);
        printf("digite a quantidade de peças feitas nesse mês: \n");
        scanf("%d" , &pecas);
        printf("digite o seu sexo(F-FEMININO\nM-MASCULINO):\n");
        scanf(" %c" , &sexo); //espaço antes para a variavel n pegar o valor do backspace
        if (sexo=='M')
        {
            mediam+=pecas;
            qtdm++;
        }
        else
        {
            mediah+=pecas;
            qtdh++;
        }

        if(pecas<=30)
        {
            sal=salmin;
        }
        else if (pecas> 30 && pecas<=50)
        {
            sal=salmin + (0.03*salmin) * (pecas-30);
        }
        else
        {
            sal=salmin + (0.05*salmin) * (pecas-30);
        }
        printf("o salario do operario %d é R$ %f" , operario , sal);
        pecas_fab=pecas_fab+pecas;
        folhapag=folhapag+sal;
        if (q==1)
        {
            maiorsal=sal;
            q=0;
        }
        if(sal>maiorsal)
        {
            maiorsal=sal;
            codmaior=operario;
        }
    }
    mediah=mediah/qtdh;
    mediam=mediam/qtdm;
    printf("\na folha de pagamento da empresa foi R$%f" , folhapag);
    printf("\na quantidade de peças fabrricadas pela empresa esse mês foi: %d" , pecas_fab);
    printf("\na media de peças produzidas por hoemns foi: %f" , mediah);
    printf("\na media de peças produzidas por mulheres foi: %f" , mediam);
    printf("\no funcionario(a) com maior salario foi %d, totalizando R$%f de salário final." , codmaior , maiorsal);
     


    return 0;
}