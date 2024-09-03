#include <stdio.h>
#include <stdlib.h>

#define SM 880.05

int main()
{
    int A = 0, B = 0, C = 0;
    int i;
    float salario, pA, pB,pC,total_C, clientes = 0;;

    while(clientes < 1000)
    {
        printf("Salario do cliente %.1f: ", clientes + 1);
        scanf("%f", &salario);

        if(salario > SM)
        {
            if(salario >= SM*15)
                A++;
            else if( salario >= SM*5 || salario < SM*15)
                B++;
            else
                C++;
            clientes++;
        }
        else
        {
            printf("Valor inserido erroneamete sobre o salario \n");
        }

        if(clientes == 1000.0)
        {
            pA = (A/ clientes) * 100;
            pB = (B/ clientes) * 100;
            pC = (C/ clientes) * 100;

            printf("porcentagem da parcela de clientes tipo A: %%f \n",pA);
            printf("porcentagem da parcela de clientes tipo B: %%f \n",pB);
            printf("porcentagem da parcela de clientes tipo C: %%f \n",pC);
        }
    }
    return 0;
}
