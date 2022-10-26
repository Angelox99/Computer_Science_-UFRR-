#include <stdio.h>
#include <stdlib.h>

// recebe uma matriz nos molde tradicionais, informando dimenções de linha e
// coluna
void imprimir(int mat[3][3]) {
  int linha, coluna;

  printf("Imprimindo a matriz:\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) printf("%d ", mat[linha][coluna]);
    printf("\n");
  }
}

// recebe o ponteiro para uma matriz
void imprimir2(int **mat) {
  int linha, coluna;

  printf("Imprimindo a matriz:\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++)
      printf(
          "%d ",
          *(*(mat + linha) +
            coluna));  // imprime a matriz por meio de aritmética de ponteiros
    // printf("%d ", mat[linha][coluna]);// imprime a matriz usando os colchetes
    printf("\n");
  }
}

void imprimir3(int **mat) {
  int linha, coluna;

  printf("Imprimindo & da matriz:\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) printf("%p ", &mat[linha][coluna]);
    printf("\n");
  }
}

int main() {
  int i, linha, coluna, mat[3][3];
  int **mat2;

  // aloca um vetor para guardar 3 ponteiros para inteiros
  mat2 = malloc(3 * sizeof(int *));

  for (i = 0; i < 3; i++)
    mat2[i] =
        malloc(3 * sizeof(int));  // aloca um vetor de inteiros de tamanho 3

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("Digite o elemento %d %d: ", linha, coluna);
      // scanf("%d", &mat[linha][coluna]);
      // scanf("%d", &mat2[linha][coluna]);
      scanf("%d", *(mat2 + linha) + coluna);  // aritmética de ponteiros
    }
  }

  printf("\n&mat2: %p\n", &mat2);
  printf("mat2: %p\n", mat2);
  printf("*mat2: %p\n", *mat2);
  printf("\nVetor de ponteiros para cada linha\n");
  printf("&mat2[0]: %p\n", &mat2[0]);
  printf("&mat2[1]: %p\n", &mat2[1]);
  printf("&mat2[2]: %p\n\n", &mat2[2]);
  imprimir3(mat2);

  return 0;
}