#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main(void)
{
    int i, vetor[TAMANHO];
    float media, soma1 = 0, soma2 = 0;
    int ContadorMenor = 0;

    srand(time(NULL));

    
    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 10 + rand() % 90;
        soma1 += vetor[i];
        ContadorMenor++;
    }

    
    media = soma1 / ContadorMenor;

    printf("A média dos termos sorteados é: %.2f\n", media);

  
    printf("Valores menores que a média:\n");
    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] < media)
        {
            soma2 += vetor[i];
            printf("%i; \n", vetor[i]);
        }
    }

    printf("A soma dos termos menores que a média é %.2f\n", soma2);

    return 0;
}
