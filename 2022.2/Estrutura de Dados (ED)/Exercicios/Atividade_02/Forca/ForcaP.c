/*
Exercicio: Ex 02 Structs - Jogo da Forca - Questao 01
Autor: Angelo Almeida Ferro
Matricula: 1201524424
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PALAVRAS 100
#define MAX_TAMANHO_PALAVRAS 1000

typedef struct jogador
{
  char nome[MAX_TAMANHO_PALAVRAS];
  float pontos;
}Jogador;

typedef struct ranking
{
  Jogador vet_jogadores[100];
  int num_jogadores;
}Ranking;

//CABECALHO DAS FUNCOES
void imprime_forca(int estado); 
void limpa_tela();
void play_jogo(  char palavras[MAX_PALAVRAS][MAX_TAMANHO_PALAVRAS], int qtd_palavras, Ranking * ranking );
int le_arquivo(char palavras[MAX_PALAVRAS][MAX_TAMANHO_PALAVRAS],int *qtd_palavras)

//Construtores para
Jogador* cria_jogador(char *nome)
  {
   Jogador* newjogador = malloc(sizeof(Jogador));
   strcpy(newjogador->nome, nome);
   newjogador->pontos = 0;
   return newjogador; 
  }

Ranking* cria_ranking()
  {
    Ranking* newRanking = malloc(sizeof(Ranking));
    newRanking->num_jogadores = 0;
    return newRanking;
  }

//FUNCOES
void imprime_forca(int estado) 
{
  if (estado == 0) 
  {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } 
  else if (estado == 1) 
  {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } 
  else if (estado == 2) 
  {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       /|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } 
  else if (estado == 3) 
  {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       /|\\");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } 
  else if (estado == 4) 
  {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       /|\\");
    printf("\n|       /");
    printf("\n|");
    printf("\n|");
    printf("\n-\n");
  } 
  else if (estado == 5) 
  {
    printf("\n----------");
    printf("\n|        |");
    printf("\n|        0");
    printf("\n|       /|\\");
    printf("\n|       / \\");
    printf("\n|");
    printf("\n|  [!Perdeu o game!]");
    printf("\n-\n");
  }
}

void limpa_tela() 
{
  #ifdef __linux__
    system("clear");
  #elif _WIN32
    system("cls");
  #else
    system("cls");
  #endif
}

char *escolhe_palavra(char palavras[MAX_PALAVRAS][MAX_TAMANHO_PALAVRAS], int qtd_palavras)
{
  srand(time(0));
  int numero = rand()% qtd_palavras;
  printf("Numero pseudorandomico: %d\n", numero);
  return palavras[1];
}

void play_jogo(  char palavras[MAX_PALAVRAS][MAX_TAMANHO_PALAVRAS], int qtd_palavras, Ranking * ranking )
{
  char nome;

  //Cadastra Jogador
  Jogador* jogadorAtual = cria_jogador("Donatelo");

  //  imprime_forca(5);
  int erros = 0;
  char *p_sec = escolhe_palavra(palavras,qtd_palavras);  // palavra secreta
 
  limpa_tela();

  char p_tela[100];

  printf("JOGADOR 1: \n");
  printf("Digite a palavra secreta: ");
  fgets(p_sec, 100, stdin);
  p_sec[strlen(p_sec) - 1] = '\0';

  printf("A palavra secreta é: %s\n", p_sec);
  printf("A palavra tem %lu caracteres\n", strlen(p_sec));

  limpa_tela();

  char p_tela[100];  // palavra que mostra na tela
  strcpy(p_tela, p_sec);
  for (int i = 0; i < strlen(p_tela)-1; i++) 
  {
    p_tela[i] = '_';
  }

  // loop principal do jogo
  while (1) 
  {
    // 1. imprimir a forca
    imprime_forca(erros);
    printf("\nJOGADOR 2");
    printf("\nAdivinhe: ");

    // 2. imprimir os urderline para cada letra
    for (int i = 0; i < strlen(p_tela); i++) 
      printf("%c ", p_tela[i]);

    // 3. recebe a letra
    printf("\nLetra: ");
    char letra;
    scanf(" %c", &letra);

    // 4. se letra correta, atualiza palavra na tela
    // 4.1 verifica se a letra esta correta
    int errou = 1;  // 1=sim 0=não
    for (int i = 0; i < strlen(p_tela); i++) 
    {
      if (letra == p_sec[i]) 
      {  // certo
        p_tela[i] = letra;
        errou = 0;
      }
    }

    // 5. senao incremanta erros
    if (errou == 1) 
      erros++;

    // 6. verifica se ganhou
    if (strcmp(p_tela, p_sec) == 0) 
    {
      printf("\nPARABENS!! Voce acertou!!\n");
      printf("A palavra era: %s\n\n", p_sec);
      break;
    }

    // 7. verifica se o jogo acabou
    if (erros == 5) 
    {
      imprime_forca(erros);
      break;  // perdeu
    }
  }
}

int le_arquivo(char palavras[MAX_PALAVRAS][MAX_TAMANHO_PALAVRAS],int *qtd_palavras)
{
  FILE *file;
  file = fopen("palavras.txt", "r");
  
  if (file==NULL)
  {
    printf("Erro ao abrir o arquio\n");
    return 1;
  }

  int linha=0;

  while(!foef(file) && !ferror(file))
  {
    if (fgets(palavras[linha],MAX_TAMANHO_PALAVRAS,file)!=NULL)
    {
     linha++;
    }

    for (int i = 0; i < linha; i++)
    {
      printf("%s\n",palavras[i]);
    }    
  }
  *qtd_palavras = linha;
}

int main() 
{
  char palavras[MAX_PALAVRAS][MAX_TAMANHO_PALAVRAS];
  int qtd_palavras;
  le_arquivo(palavras,&qtd_palavras);
  
  Ranking* ranking = criaRanking();
  
  play_jogo(palavras, qtd_palavras, ranking);

  return 0;
}

// -- Algoritmo do jogo Forca --
// 1. imprimir a forca
// 2. imprimir os urderline para cada letra
// 3. recebe a letra
// 4. se letra correta, atualiza palavra na tela
// 5. senao incremanta erros
// 6. verifica se ganhou
// 7. verifica se o jogo acabou