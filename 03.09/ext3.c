#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int lmA,lmB, i,n;

  printf("Determine o limite inferior do intervalo: ");
  scanf("%d", &lmA);

  printf("Determine o limite superior do intervalo: ");
  scanf("%d", &lmB);

  printf("Valor de N para achar seus multiplos no intervalo dado(Sendo N >= 2):");
  scanf(" %d", &n);

  if(n < 2)
    printf("Insira corretamente o valor de N");
  else if (lmA < 0 || lmB < 0)
    printf("Insira os intervalos corretamente");
  else if(lmA >= lmB)
    printf("Insira os intervalos corretamente");
  else
  {
    printf("Os multiplos de %d no intervalo [%d, %d ] são: \n", lmA,lmB,n);
    for(i = lmA; i <= lmB; i++)
    {
      if(i % n == 0)
        printf("%d \n", i);
    }
  }

  return 0;  
}