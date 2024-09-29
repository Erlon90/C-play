#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 25000

int main(void)
{
    int i, atletas[TAMANHO];
    float tempo[TAMANHO];
    float media = 0;
    srand(time(NULL));

    
    for(i = 0; i < TAMANHO; i++)
    {
        atletas[i] = 1 + rand() % 25000;  
        tempo[i] = 45.0 + (rand() % 113); 
    }

    
    for (i = 0; i < TAMANHO; i++)
    {
        media = tempo[i] / 16.0;  
        printf("A média de tempo do atleta %d foi %.2f\n", atletas[i], media);
    }

    return 0;
}
