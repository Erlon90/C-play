#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int contador = 0;
    int negativos = 0;
    int positivos = 0;
    float n;
    float Ppositv, Pnegat;

    do
    {
        printf("Digite um numero real: ");
        scanf("%f", &n);

        if (n > 0)
            positivos++;
        else if (n < 0)
            negativos++;

        contador++;
    } while (n != 0);

    if (contador > 1)
    {
        Pnegat = ((float)negativos / (contador - 1)) * 100;
        Ppositv = ((float)positivos / (contador - 1)) * 100;
        printf("A quantidade de negativos e positivos em porcentagem e: %% %.1f e %% %.1f\n", Pnegat, Ppositv);
    }

    return 0;
}