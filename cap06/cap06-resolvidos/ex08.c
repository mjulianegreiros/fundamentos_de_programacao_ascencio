/*enunciado da quatsão será postado posteriormente*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void uniaoXeY(int *u , int vx[] , int vy[]) {
    int i, j, tem, k = 0;

    for (i = 0; i < 5; i++) {
        u[k++] = vx[i];
    }

    for (i = 0; i < 5; i++) {
        tem = 0;
        for (j = 0; j < 5; j++) {
            if (vy[i] == u[j]) {
                tem = 1;  
                break; 
            }
        }
        if (!tem) {
            u[k++] = vy[i];   
        }
    }
}



void ordenar(int *a , int tamanho)
{
    int i , j , aux;
    
    for ( i = 0; i < tamanho; i++)
    {
        for ( j = 0; j < tamanho; j++)
        {
            while(a[i]<a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
        
    }
}

int main()
{
    int x[5] , y[5] , z[10] , i;

    for(i=0;i<5;i++)
    {
        printf("\nDigite o valor %d para o vetor X", i+1);
        scanf("%d" , &x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nDigite o valor %d para o vetor Y" , i+1);
        scanf("%d" , &y[i]);
    }

    
    printf("\nVetor X ordenado de forma crescente.\n");
    ordenar(x , 5);
    for(i=0;i<5;i++)
    {
        printf("%d " , x[i]);
    }
    printf("\nVetor Y ordenado de forma crescente.\n");
    ordenar(y, 5);
    for(i=0;i<5;i++)
    {
        printf("%d " , y[i]);
    }

    //uniao de X e Y = Z

    uniaoXeY(z , x , y);
    

    printf("\nVetor Z - união de X e Y\n");
    for(i=0;i<10;i++)
    {
        printf("%d " , z[i]);
    }

    printf("\nVetor Z ordenado de forma crescente.\n");
    ordenar(z , 10);
    for(i=0;i<10;i++)
    {
        printf("%d " , z[i]);
    }





    return 0;
}