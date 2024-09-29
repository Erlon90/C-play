#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

int main(void)
{
    int i, m2 = 0, c2 = 0, c5 = 0, m5 = 0, stotal = 0, vetor[TAMANHO];
    float media = 0;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 10 + rand() % 90; // Gera números entre 10 e 99
        if (vetor[i] % 2 == 0)
        {
            m2 += vetor[i];
            c2++;
        }
        if (vetor[i] % 5 == 0)
        {
            m5 += vetor[i];
            c5++;
        }
    }

    stotal = m5 + m2;

    if (c2 + c5 > 0) // Evita divisão por zero
    {
        media = (float)stotal / (c2 + c5);
    }

    printf("A soma dos múltiplos de 5 é %i e a dos múltiplos de 2 é %i, resultando no total de %i\n", m5, m2, stotal);
    printf("A média dos números múltiplos de 2 e 5 é %.2f\n", media);

    return 0;
}
