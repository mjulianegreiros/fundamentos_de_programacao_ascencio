/*faça um programa quenreceba varios numeros, calcule e mostre:
1-a soma dos numeros digitados
2-a qtd de nmrs digitados
3-a media dos numeros digitados
4-o maior numero digitado
5-o menor numero digitado
6-a media de numeros pares
7-a porcentagem dos numeros impares de todos os numeros digitados
finalize a entrada de dados com a digitação do nmr 30.000*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd=0;
    float media=0 , num , soma=0 , maior , menor  , mediapar=0 , contpar=0 , porcentimp=0 , q=0;

    do
    {
        printf("digite um número: ");
        scanf("%f" , &num);
        soma=soma+num;
        qtd++;
        
        
        if (q==0) //variavel pra guardar o primeiro valor digitado como maior e menor para realizar as outras comparações;
        {
            maior=num;
            menor=num;
            q=1;
        }

        if(num>maior)//comdição para de finir o maior e o menor numero
        {
            maior=num;
        }
        else if(num<menor)
        {
            menor=num;
        }
        

        if(num%2==0)//condição p ver se um numero é par
        {
            mediapar=mediapar+num;
            contpar++;
        }
        else
        {
            porcentimp++;
        }
        
    } while (num!=30.000);

    media=media/qtd;
    mediapar=mediapar/contpar;
    porcentimp=(porcentimp/qtd)*100;
    
    printf("\na soma dos numeros digitador é: %f" , soma);
    printf("\na quantidade de numeros digitados foi: %d" , qtd);
    printf("\no maior numero digitado foi: %f" , maior);
    printf("\no menor numero digitado foi: %f" , menor);
    printf("\na media dos numeros digtados é: %f" , media);
    printf("\na media dos numeros pares digtados é: %f" , mediapar);
    printf("\na porcentagem dos numeros impares é: %f" , porcentimp);
    



    return 0;
}
