#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 25000
#define META 88.7

int main(void)
{
    int i, atletas[TAMANHO];
    float tempo[TAMANHO];
    srand(time(NULL));

    
    for(i = 0; i < TAMANHO; i++)
    {
        atletas[i] = 1 + rand() % 25000;  
        tempo[i] = 45.0 + (rand() % 113); 
    }

    
    for (i = 0; i < TAMANHO; i++)
    {
        if(tempo[i] < 88.7)  
            printf("O tempo do atleta %d foi %.2f e ficou abaixo da meta definida\n", atletas[i], tempo[i]);
    }

    return 0;
}
