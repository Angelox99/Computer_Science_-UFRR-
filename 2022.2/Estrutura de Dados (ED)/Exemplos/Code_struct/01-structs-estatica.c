#include <stdio.h>
#include <string.h>

typedef struct aluno {
  char nome[64];
  int idade;
  float media;
} Aluno;

int main() {
  Aluno a1;
  strcpy(a1.nome, "João");
  a1.idade = 22;
  a1.media = 9.5;

  puts("--- Dados aluno ---");
  printf("Nome: %s\n", a1.nome);
  printf("Idade: %d\n", a1.idade);
  printf("Média: %.2f\n\n", a1.media);

  puts("--- Tamanho tipo de dado 'Aluno' ---");
  printf("size(Aluno): %lu\n", sizeof(Aluno));
  printf("&a1: %p\n", &a1);
  printf("&a1.nome[0]: %p\n", &a1.nome[0]);

  return 0;
}