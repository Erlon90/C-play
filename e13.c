#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, qM = 0, qF = 0, p182 = 0, mAlt , altura, pessoa = 0,;
    char sexo;

    for (i = 0; i < 50; i++)
    {
        printf("Insira a altura em metros: ");
        scanf("%i", &altura);

        printf("Insira o Sexo da pessoa %i:", pessoa + 1);
        scanf("%c", &sexo);

        if (altura < 0)
        {
            printf("A altura inserida esta errada!\n");
        }
        else if (!((sexo = 'M' &&sexo = 'm') || (sexo = 'F' &&sexo = 'f')))
            printf("Sexo inserido erroneamente");
        else
        {


            if(altura > 1.82)
            {
                if(sexo = 'M')
                    qM += 1;
                else(sexo = 'F')
                  qF += 1;

            }
            pessoa++;
        }
    }

    return 0;
}