#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

int main(void)
{
    int i,cont3,vetor[TAMANHO];
    float mediaINICIAL = 0;

    srand(time(NULL));

    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = rand() % 100;    
    }  
    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] == 3)
        {
            cont3++;
        }
    }
    printf("O numero 3 apareceu %i vezes", cont3);

    return 0;
}
