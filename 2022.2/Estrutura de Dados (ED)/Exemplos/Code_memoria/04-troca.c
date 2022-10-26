#include <stdio.h>
#include <stdlib.h>

void troca(int *v1, int *v2) {
  int temp = *v1;
  *v1 = *v2;
  *v2 = temp;
}

int main() {
  int a = 10;
  int b = 999;

  printf("a = %d   b = %d\n\n", a, b);
  troca(&a, &b);
  printf("a = %d   b = %d\n\n", a, b);

  return 0;
}