#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main(void)
{
    int i,vetor[TAMANHO];
    float n;
    srand(time(NULL));

    printf("Escolha um número qualquer menor que 100: ");
    scanf("%f",&n);

    
    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 10 + rand() % 90;
        if(vetor[i] > n)
            printf("O numéro %i na posição %i é maior que %.1f\n", vetor[i], i, n);

    }

    

    return 0;
}
