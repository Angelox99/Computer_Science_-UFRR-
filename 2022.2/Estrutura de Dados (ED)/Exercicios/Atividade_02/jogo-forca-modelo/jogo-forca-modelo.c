#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime_forca(int estado) {
  if (estado == 0) {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } else if (estado == 1) {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } else if (estado == 2) {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       -|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } else if (estado == 3) {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       -|-");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } else if (estado == 4) {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       -|-");
    printf("\n|       /");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } else if (estado == 5) {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       -|-");
    printf("\n|       / \\");
    printf("\n|");
    printf("\n|  Perdeu o game!");
    printf("\n-\n");
  }
}

void limpa_tela() {
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
  system("clear");
#endif

#if defined(_WIN32) || defined(_WIN64)
  system("cls");
#endif
}

int main() {
  int erros = 0;
  char p_sec[100];  // palavra secreta

  printf("JOGADOR 1: \n");
  printf("Digite a palavra secreta: ");
  fgets(p_sec, 100, stdin);
  p_sec[strlen(p_sec) - 1] = '\0';

  limpa_tela();

  char p_tela[100];  // palavra que mostra na tela
  strcpy(p_tela, p_sec);
  for (int i = 0; i < strlen(p_tela); i++) {
    p_tela[i] = '_';
  }

  // loop principal do jogo
  while (1) {
    // 1. imprimir a forca
    imprime_forca(erros);
    printf("\nJOGADOR 2");
    printf("\nAdivinhe: ");

    // 2. imprimir os urderline para cada letra
    for (int i = 0; i < strlen(p_tela); i++) printf("%c ", p_tela[i]);

    // 3. recebe a letra
    printf("\nLetra: ");
    char letra;
    scanf(" %c", &letra);

    // 4. se letra correta, atualiza palavra na tela
    // 4.1 verifica se a letra esta correta
    int errou = 1;  // 1=sim 0=não
    for (int i = 0; i < strlen(p_tela); i++) {
      if (letra == p_sec[i]) {  // certo
        p_tela[i] = letra;
        errou = 0;
      }
    }

    // 5. senao incremanta erros
    if (errou == 1) erros++;

    // 6. verifica se ganhou
    if (strcmp(p_tela, p_sec) == 0) {
      printf("\nPARABENS!! Você acertou!!\n");
      printf("A palavra era: %s\n\n", p_sec);
      break;
    }

    // 7. verifica se o jogo acabou
    if (erros == 5) {
      imprime_forca(erros);
      break;  // perdeu
    }
  }

  return 0;
}