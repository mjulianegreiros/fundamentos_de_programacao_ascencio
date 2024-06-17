/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num[5];
    int i , codigo;

    for(i=0;i<5;i++)
    {
        printf("%d° - " , i+1);
        scanf("%f" , &num[i]);
    }

    do
    {
        
        printf("\n0 - Fim do programa\n1 - Ordem direta\n2 - Ordem inversa\n\t --> ");
        scanf("%d" , &codigo);

        switch (codigo)
        {
        case 0:
            printf("\nEncerrando programa...");
            break;
        case 1:
            for(i=0;i<5;i++)
            {
                printf("%.2f " , num[i]);
            }
            break;
        case 2:
            for(i=4;i>=0;i--)
            {
                printf("%.2f " , num[i]);
            }
        
        default:
            printf("\nCódigo inválido. Tente novamente.");
            break;
        }

    } while (num!=0);
    



    return 0;
}