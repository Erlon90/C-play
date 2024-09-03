#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, soma;

  printf("Este são os multiplos de 11 no intervalo de [300,400] \n");
  for (i = 400; i >= 300; i--)
  {
    if(i % 11 == 0)
    {
      printf(" %d \n", i);
      soma += i;
    }
  }
  printf("A soma dos multiplos de 11 no intervalo é: %d \n", soma);
  return 0;
}