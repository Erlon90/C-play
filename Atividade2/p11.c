#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main(void)
{
    int i, vetor[TAMANHO];
    srand(time(NULL));

    
    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 10 + rand() % 90; 
        printf("%d , ", vetor[i]);   
    }

    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] > 35 && vetor[i] < 40)
        {
            printf("\n Termo posição %i, valor normal: %i \n valor acrescido: %i \n", i, vetor[i], vetor[i] +(vetor[i]*5/100) );
        }
    }   

    return 0;
}
