/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , q=0 , total=0 , id_menorsal , maiorid , menorid , qtd_m_200=0;
    char sexo , sexo_menorsal;
    float sal , media=0 , menorsal; 

    printf("\nDigite sua idade: ");
    scanf("%d" , &idade);
    printf("\nDigite o seu sexo:\n\tF-Feminino\n\tM-Masculino\n-->");        
    scanf(" %c" , &sexo);
    printf("\nDigite seu salário: R$");
    scanf("%f" , &sal);
    
    while(idade>0)
    {
        if(idade>0)
        {
            total++;
            media+=sal;

            if(q==0)//condição utilizada para pegar o primeiro valor escrito e declarar ele como base para as outras comparações
            {
                maiorid=idade;
                menorid=idade;
                menorsal=sal;
                id_menorsal=idade;
                sexo_menorsal=sexo;
                q=1;
            }

            if (idade>maiorid)
            {
                maiorid=idade;
            }
            else if(idade<menorid)
            {
                menorid=idade;
            }

            if(sexo=='F' && sal<=200)
            {
                qtd_m_200++;
            }

            if(sal<menorsal)
            {
                menorsal=sal;
                id_menorsal=idade;
                sexo_menorsal=sexo;
            }
        }
        
        printf("\nDigite sua idade: ");
        scanf("%d" , &idade);
        printf("\nDigite o seu sexo:\n\tF-Feminino\n\tM-Masculino\n-->");
        scanf(" %c" , &sexo);
        printf("\nDigite seu salário: R$");
        scanf("%f" , &sal);
        
    } 

    media/=total;
    printf("\n\t------- Análise dos dados -------");
    printf("\n\t --> Média de todos os salários: R$%.2f\n\t --> A pessoa mais velha tem %d anos\n\t --> A pessoa mais nova tem %d anos\n\t --> A pessoa com menor salário tem o sexo %c, %d anos e possui um salário de R$%.2f\n\t --> A quantidade de mulheres que ganham menos de R$200,00 é %d" , media , maiorid , menorid , sexo_menorsal , id_menorsal , menorsal , qtd_m_200);


    return 0;
}