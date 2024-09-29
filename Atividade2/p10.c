#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main(void)
{
    int i, vetor[TAMANHO];
    int impar = 0, par = 0, contadorI = 0,contadorP = 0 ;
    float mediaPI ;

    srand(time(NULL));

    
    for(i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 10 + rand() % 90;    
    }

    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            par += vetor[i];
            contadorP++;
            printf("N° Par: %i \n", vetor[i]);
        }
        else
        {
            impar += vetor[i];
            contadorI++;
            printf("N° Impar: %i \n", vetor[i]);
        }
    }   

    mediaPI = ((par / contadorP) + (impar / contadorI)) / 2.0 ;


    printf("A média dos numeros impares e pares do vetor é %.2f",mediaPI);

    return 0;
}
