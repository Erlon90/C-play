#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100


int main(void)
{
    int i,j,vetor[TAMANHO];
    float mediaInicial = 0; 
    
    srand(time(NULL));

    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = rand() % 100;
    }
    mediaInicial = (vetor[0] + vetor[99]) / 2 ;
    printf("Numeros maiores que a media %.2f \n", mediaInicial);
    for(i = 1; i < TAMANHO-1 ;i++)
    {
        if(vetor[i] > mediaInicial)
            printf("%5i", vetor[i]);
        if(i % 20 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}