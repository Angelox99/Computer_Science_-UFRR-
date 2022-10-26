#include <stdio.h>

int soma(int x, int y) {
  int z = x + y;
  return z;
}

int main() {
  int a = 10;
  int b = 20;
  int c = soma(a, b);
  printf("Resultado: %d\n", c);
}