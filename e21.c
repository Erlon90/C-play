#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

int main(void)
{
    int N, intervalo, media, contador,soma;

    do
    { 
        printf("Digite um número real qualquer: ");
        scanf("%i", &N);

        soma+= N;
        intervalo++;
    
    } while (N > 10*pow(PI, 3) || N < 100*PI );

    if(intervalo >  0)
    {
        media = soma / intervalo;
    }






    return 0;
}