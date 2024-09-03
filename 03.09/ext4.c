#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, somaP = 0, somaI = 0;
  
  for(i = 999; i > 100; i--)
  {
    if(i % 2 == 0)
      somaP += i;
    else
      somaI += i;
  }
  printf("A soma dos pares no intervalo é: %d \n", somaP);
  printf("A soma dos impares no intervalo é: %d \n", somaI);
  printf("A soma total no intervalo é: %d \n", somaI + somaP);
  
  return 0;  
}