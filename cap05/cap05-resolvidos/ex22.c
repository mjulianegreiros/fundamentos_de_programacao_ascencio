/*uma empresa deciciu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas em seu quadro de funcionarios. supondo que você seja o programador dessa empresa, faça um programa que leia, para cada candidato, a idade, o sexo, e a experiencia de serviço(sim ou não). para encerrar a leitura de dados, digite 0 para a idade. o programa deve calcular e mostrar:
1-qtd candidatos mulher
2-qtd candidatos homem
3-media das idades dos homens que ja tem experiência no serviço
4-porentagem dos homens que tem mais de 45 anos entre todos os homens
5-qtd mulheres que tem menos de 21 anos e ja tem experiência no serviço
6-menor idade entre as mulheres que já tem experência no serviço */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , qtdm=0 , qtdh=0 , qtdmenos21=0 , menor , homexp=0 , q=0;
    char sexo , exp;
    float mediaidadeh , porcenth=0;

    do
    {
        printf("digite a sua idade: ");
        scanf("%d" , &idade);
        printtf("\ndigite o seu sexo(F-feminino ou M-masculino): ");
        scanf(" %c" , &sexo);
        printf("\ndigite se você tem experiênia na área(S-sim ou N-não): ");
        scanf(" %c" , &exp);

        if(sexo=='F')
        {
            qtdm++;
        }
        else //coloquei o else pois não estou contando com caracteres invalidos
        {
            qtdh++;
            if(idade>45)
            {
                porcenth++;
            }
        }
        if(exp=='S')
        {
            if(sexo=='M')
            {
                mediaidadeh+=idade;
                homexp++;
            }
            else if(sexo=='F')
            {
                if(q==0)
                {
                    menor=idade;
                    q=1;
                }
                if(idade<menor)
                {
                    menor=idade;
                }
                if(idade<21)
                {
                    qtdmenos21++;
                }
            }
            
        }

    } 
    while (idade!=0);

    porcenth=(porcenth/qtd)*100;
    mediaidadeh=mediaidadeh/homexp;
    
    printf("\na quantidade de mulheres é: %d" , qtdm);
    printf("\na quantidade de homens é: %d" , qtdh);
    printf("\na média das idades dos homens que já tem experiencia no serviço é: %f" , mediaidadeh);
    printf("\na porcentagem de homens com mais de 45 anos é: %f" , porcenth);
    printf("\no número de mulheres com menos de 21 anos e que já tem experiência é: %d" , qtdmenos21);
    printf("\na menor idade entre as mulhres que já tem experiência no serviço é: %d" , menor);
    
    



    return 0;
}
