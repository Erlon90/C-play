#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos = 0;
    float nota, soma = 0, media;
    while(alunos < 50)
    {
        printf("Notas[0,10] - Aluno %i: ", alunos + 1);
        scanf("%f", &nota);

        if(nota < 0 || nota > 10)
            printf("Erro na inserção da nota\n");
        else
        {
            soma += nota;
            alunos = alunos + 1;
        }
    }

    media = soma / alunos;
    return 0;
}
