/*uma empresa deciciu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas em seu quadro de funcionarios. supondo que você seja o programador dessa empresa, faça um programa que leia, para cada candidato, a idade, o sexo, e a experiencia de serviço(sim ou não). para encerrar a leitura de dados, digite 0 para a idade. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade , qtdm=0 , qtdh=0 , qtdmenos21=0 , menor , homexp=0 , q=0;
    char sexo , exp;
    float mediaidadeh;

    do
    {
        printf("digite a idade: ");
        scanf("%d" , &idade);
        printtf("\n")
    } while (idade!=0);
    



    return 0;
}
