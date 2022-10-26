#include <stdio.h>
#include <stdlib.h>

int main() {
  // Exemplo 1 - Ver que da pra andar na memoria com aritimética de ponteiros:
  //  char u = 'u';
  //  char f = 'f';
  //  char r1 = 'r';
  //  char r2 = 'r';

  printf("u = %c, f = %c, r1 = %c, r2 = %c\n", u, f, r1, r2);
  printf("&u = %p, &f = %p, &r1 = %p, &r2 = %p\n", &u, &f, &r1, &r2);

  for(int i = 0; i < 4; i++)
    printf("%c", *((&u)+i));
  printf("\n");

  //Exemplo 2 - Uma String é um vetor de char:
  char str[] = {'D', 'C', 'C'};
  printf("str = %s\n", str);
  // O nome do vetor faz referencia ao endereço de mem do primeiro elemento
  //do
  // vetor
  printf("str = %p\n", &str);

  for (int i = 0; i < 3; i++) printf("%p ", &str[i]);
  printf("\n");

  // Exemplo 3 - Matriz de strings - ponteiro p/ ponteiros:
  // Matriz Estática
  char mxStr[3][3] = {{'B', 'O', 'B'}, {'L', 'O', 'L'}, {'M', 'A', 'N'}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) printf("%c", mxStr[i][j]);
    puts("");
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) printf("%p ", &mxStr[i][j]);
    puts("");
  }

  printf("mxStr = %p\n", &mxStr);

  return 0;
}