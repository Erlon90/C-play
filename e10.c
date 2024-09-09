#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,x, multiplos = 0, intervalo, contador = 0;
    float media;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &x);

    if( x < 1)
        printf("O numero digitado nao esta no intervalo desejado");
    else
    {
        intervalo = 6*x;
        for(i = 6; i <= intervalo;i++)
        {
            if( i % 6 == 0)
            {
                contador++;
                multiplos += i;
            }
        }
        media = (float)multiplos / contador;
        printf("A media dos numeros encontrados no intervalo e: %f", media);
    }
    return 0;
}