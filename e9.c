#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int soma = 0,n;
    printf("Números entre 10 e 90 que divididos por 5 possuem resto 2: ");
    for(n = 10; n <= 90; n++)
    {
        if(n % 5 == 2)
        {
            printf("%i ;", n );
            soma += n;
        }
    }
    printf("\nA Soma destes números é: %i", soma);

    return 0;
}