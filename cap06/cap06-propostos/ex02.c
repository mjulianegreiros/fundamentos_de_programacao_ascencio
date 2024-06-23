/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void multiplosde2(int v[])
{
    int i;
    for(i=0;i<7;i++)
    {
        if(v[i]%2==0)
        {
            printf("%d " , v[i]);
        }
    }
}
void multiplosde3(int v[])
{
    int i;
    for(i=0;i<7;i++)
    {
        if(v[i]%3==0)
        {
            printf("%d " , v[i]);
        }
    }
}
void multiplosde2e3(int v[])
{
    int i;
    for(i=0;i<7;i++)
    {
        if(v[i]%2==0 && v[i]%3==0)
        {
            printf("%d " , v[i]);
        }
    }
}

int main()
{
    int vet[7] , i;

    for(i=0;i<7;i++)
    {
        printf("\nDigite o %d° valor: " , i+1);
        scanf("%d" , &vet[i]);
    }

    printf("\nMultiplos de 2: ");
    multiplosde2(vet);
    printf("\nMultiplos de 3: ");
    multiplosde3(vet);
    printf("\nMultiplos de 2 e 3: ");
    multiplosde2e3(vet);




    return 0;
}