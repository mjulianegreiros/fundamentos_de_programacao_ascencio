/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int pessoas , canal , total=0 , cont=0;
    float aud4=0 , aud5=0 , aud7=0 , aud12=0;

    do
    {
        cont++;
        printf("\nDigite o canal assistido na casa %d:\nCaso a TV esteja desligada, o canal será 0.\n\tResposta: " , cont);
        scanf("%d" , &canal);
        printf("\nDigite a quantidade de pessoas que assiste o canal %d: " , canal);
        scanf("%d" , &pessoas);

        if(canal!=0)
        {
            total++;
            if(canal==4)
            {
                aud4++;
            }
            else if(canal==5)
            {
                aud5++;
            }
            else if (canal==7)
            {
                aud7++;
            }
            else if (canal==12)
            {
                aud12++;
            }  
        }
    } while (canal!=0);

    aud4=(aud4/total)*100;
    aud5=(aud5/total)*100;
    aud7=(aud7/total)*100;
    aud12=(aud12/total)*100;

    printf("\n\t---------------------");
    printf("\n\t----- Resultados -----");
    printf("\n\t Canal 4 - %.2f\n\t Canal 5 - %.2f\n\t Canal 7 - %.2f\n\t Canal 12 - %.2f" , aud4 ,aud5,aud7,aud12);
    printf("\n\t--------------------");
    


    return 0;
}