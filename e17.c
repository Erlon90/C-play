#include <stdio.h>
#include <stdlib.h>


int main(void) {
    float numero, menor = 0;
    int unica = 1;

    do {
        printf("Digite um numero real positivo (ou 0 para parar): ");
        scanf("%f", &numero);

        if (numero > 0) {
            if (unica) {
                menor = numero;
                unica = 0;
            } else if (numero < menor) {
                menor = numero;
            }
        }
    } while (numero != 0);

    if (!unica)
    {
        printf("O menor numero digitado foi: %.1f\n", menor);
    } 
    else 
    {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}