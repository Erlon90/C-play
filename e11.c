#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, i = 0;

    printf("Insira um numero inteiro qualquer: ");
    scanf("%i", &x);

    printf("Estes sao os numeros subsequentes ao escolhido:\n");
    for(i = x + 1 ;i <= x+20;i++)
    {
        printf(" %i;",i);
    }

    return 0;
}