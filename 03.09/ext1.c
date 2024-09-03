#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, i;

  printf("Estes são os múltiplos de 3 entre [1 , 100]: \n");
  for (i = 3; i <= 100; i++) {
    if (i % 3 == 0) {
      printf("%d \n", i);
    }
  }
  return 0;
}