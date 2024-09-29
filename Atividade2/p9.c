#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main(void)
{
    int i, vetor[TAMANHO];
    int maior, menor;

    srand(time(NULL));

    // Preencher o vetor com valores aleatórios entre 10 e 99
    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 10 + rand() % 90;    
    }

    // Inicializar o maior e o menor com o primeiro valor do vetor
    maior = vetor[0];
    menor = vetor[0];

    // Encontrar o maior e o menor valor no vetor
    for(i = 1; i < TAMANHO; i++)  // Começar do índice 1, já que o 0 foi usado
    {
        if(vetor[i] > maior)
            maior = vetor[i];
        if(vetor[i] < menor)
            menor = vetor[i];
    }

    // Mostrar os números do vetor
    printf("Numeros gerados: ");
    for(i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibir o maior e o menor valor
    printf("O maior número é %i e o menor é %i\n", maior, menor);

    return 0;
}
