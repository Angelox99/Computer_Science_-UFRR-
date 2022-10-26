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
#define MAX_TAM_PALAVRA 1000

//-----------------------------------------------------VARIAVEIS GLOBAIS-------------------------------------------------------
int INDICE_PALAVRA = -1;
int PALAVRAS_SORTEADAS[MAX_PALAVRAS];
int N_PAL_SORT = 0;

//---------------------------------------------------------STRUCTS-------------------------------------------------------------
typedef struct jogador {
  char nome[MAX_TAM_PALAVRA];
  float pontos;
} Jogador;

typedef struct ranking {
  Jogador vet_jogadores[100];
  int num_jogadores;
} Ranking;

// ----------------------------------------------------CABEÇALHOS DAS FUNÇÕES--------------------------------------------------
void imprime_forca(int estado);
void limpa_tela();
void play_jogo(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],int qtd_palavras, Ranking *ranking);
int le_arquivo(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],int *qtd_palavras);
void imprime_tela_inicio(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],int qtd_palavras, Ranking *ranking);

// ---------------------------------------------------CONSTRUTORES------------------------------------------------------------------
Jogador *cria_jogador(char *nome) 
{
  Jogador *newJogador = malloc(sizeof(Jogador));
  strcpy(newJogador->nome, nome);
  newJogador->pontos = 0;
  return newJogador;
}

Ranking *cria_ranking() 
{
  Ranking *newRanking = malloc(sizeof(Ranking));
  newRanking->num_jogadores = 0;
  return newRanking;
}

//-----------------------------------------------------FUNCOES--------------------------------------------------------------------
void zera_palavras_sorteadas(int qtd_palavras) 
{
  for (int i = 0; i < qtd_palavras; i++) PALAVRAS_SORTEADAS[i] = 0;
}

void troca(Jogador* x, Jogador* y)
{
  Jogador temp= *x;
  *x= *y;
  *y= temp;
}

void imprime_ranking(Ranking *ranking) 
{
  printf("\n-- Ranking --");
  for (int i = 0; i < ranking->num_jogadores; i++)
  {
    printf("\n %d. %s \t \t %.2f pontos",i+1, ranking->vet_jogadores[i].nome, ranking->vet_jogadores[i].pontos);
  }
  
  printf("\n");
}

void add_ranking(Ranking *ranking,Jogador *jogador)
{
  int encontrou = 0;
  for (int i = 0; i < ranking->num_jogadores; i++)
  {
    //Compara nome e atualiza pontos
    if (strcmp(jogador->nome,ranking->vet_jogadores[i].nome) == 0)
    {
      encontrou = 1;
      if (ranking->vet_jogadores[i].pontos < jogador->pontos)
        ranking->vet_jogadores[i].pontos = jogador->pontos;
      break;
    }
  }
    //Adiciona no ranking
  if (!encontrou)
  {
    ranking->vet_jogadores[ranking->num_jogadores++] = *jogador;
  }

  //BUBBLE SORT
  for (int j = 0; j < ranking->num_jogadores; j++)
  {
    for (int i = 0; i < ranking->num_jogadores -1; i++)
    {
      if (ranking->vet_jogadores[i].pontos < ranking->vet_jogadores[i+1].pontos)
      {
        troca(&ranking->vet_jogadores[i], &ranking->vet_jogadores[i+1]);
      }
    }
  }    
}

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
    printf("\n|       -|");
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
    printf("\n|       -|-");
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
    printf("\n|       -|-");
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
    printf("\n|       -|-");
    printf("\n|       / \\");
    printf("\n|");
    printf("\n|  Perdeu o game!");
    printf("\n-\n");
  }
}

void imprime_tela_inicio(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],int qtd_palavras, Ranking *ranking) 
{
  int escolha;
  do {
    printf("\n### JOGO DA FORCA ###");
    printf("\n[1] Play!");
    printf("\n[2] Ranking");
    printf("\n[3] Sair");
    printf("\nQual sua escolha: ");
    scanf("%d", &escolha);
    (void)getchar();  // clean the input of newline

    switch (escolha) 
    {
      case 1:  // Play
        N_PAL_SORT = 0;
        zera_palavras_sorteadas(qtd_palavras);
        play_jogo(vet_palavras, qtd_palavras, ranking);
        break;
      case 2:  // Ranking
        limpa_tela();
        imprime_ranking(ranking);
        break;
      case 3:  // Sair
        break;
      default:
        printf("Não existe essa opção! Tente outra por favor.\n");
    }
  } while (escolha != 3);
}

void limpa_tela() 
{
  #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("clear");
  #endif

  #if defined(_WIN32) || defined(_WIN64)
    system("cls");
  #endif
}

char *escolhe_palavra(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],
                      int qtd_palavras)
{
  srand(time(0));
  if (N_PAL_SORT == qtd_palavras) {
    return "ENDGAME";
  } else { 
    if(INDICE_PALAVRA == -1){
      INDICE_PALAVRA = rand() % qtd_palavras;
      PALAVRAS_SORTEADAS[INDICE_PALAVRA] = 1;
      N_PAL_SORT++; 
      return vet_palavras[INDICE_PALAVRA];
    } else {
      while(PALAVRAS_SORTEADAS[INDICE_PALAVRA] == 1){
        INDICE_PALAVRA = rand() % qtd_palavras;
      }
      PALAVRAS_SORTEADAS[INDICE_PALAVRA] = 1;
      N_PAL_SORT++;
      return vet_palavras[INDICE_PALAVRA];
    }
  }
}

void play_jogo(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],int qtd_palavras, Ranking *ranking) 
{
                
  // ----- CADASTRA JOGADOR ----------
  char nome[MAX_TAM_PALAVRA];
  printf("\n-- Cadastro de Jogador --");
  printf("\nNome: ");
  fgets(nome, MAX_TAM_PALAVRA, stdin);
  nome[strlen(nome) - 1] = '\0';
  
  Jogador* jogadorAtual = cria_jogador(nome); // cria jogador

  int gameover =0;
  char p_correta[100];

  while (1)
  {
    if (gameover == 1)
       break;


    char *p_sec = escolhe_palavra(vet_palavras, qtd_palavras);
    if (strcmp(p_sec, "ENDGAME") == 0)
    {
      printf("\n[!Acertou! - !AH MIZERAVI!], A palavra era %s",p_correta);
      printf("\n-------------------[!!PARABENS!!]-------------------");
      printf("\n-------------------[!!QUE CARA BOM!!]-------------------");
      printf("\n-------------------[!!PONTUACAO: %2.f!!]-------------------", jogadorAtual->pontos);
      printf("\n---------------------------------------------------------");
      break;
    }

      // limpa_tela();
    int erros = 0;


    char p_tela[100];  // palavra que mostra na tela
    strcpy(p_tela, p_sec);
    for (int i = 0; i < strlen(p_tela) - 1; i++) 
    {
      p_tela[i] = '_';
    }

      // loop principal do jogo
    while (1) 
    {
      // 1. imprimir a forca
      limpa_tela();
      if (N_PAL_SORT > 1)
      {
        printf("Acertou - Palavra era: %s", p_correta);
      }
      printf("\n#### JOGO FORCA #### \t\t Palavra[%d/%d]\n", N_PAL_SORT,qtd_palavras);        
      imprime_forca(erros);
      printf("\nOlá JOGADOR: %s", jogadorAtual->nome);
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
        // printf("\nPARABENS!! Você acertou!!\n");
        // printf("A palavra era: %s\n\n", p_correta);
        jogadorAtual->pontos = 100 - (erros * 10); // Aqui foi calculado uma proposta de pontuação
        strcpy(p_correta, p_sec);         
        break;
      }

      // 7. verifica se o jogo acabou
      if (erros == 5) 
      {
        gameover = 1;
        imprime_forca(erros);
        printf("\nA Palavra correta era: %s", p_sec);
        break;  // perdeu
      }
    }
  }
  add_ranking(ranking, jogadorAtual);
}
  
// -------------------------------------------------------INICIA O JOGO-------------------------------------------------------------
int le_arquivo(char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA],int *qtd_palavras) 
{
  FILE *file;
  file = fopen("palavras.txt", "r");
  if (file == NULL) 
  {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

  int linha = 0;
  while (!feof(file) && !ferror(file))
    if (fgets(vet_palavras[linha], MAX_TAM_PALAVRA, file) != NULL) 
      linha++;

  *qtd_palavras = linha;
}

int main() 
{
  char vet_palavras[MAX_PALAVRAS][MAX_TAM_PALAVRA];
  int qtd_palavras;
  le_arquivo(vet_palavras, &qtd_palavras);

  Ranking *ranking = cria_ranking();

  imprime_tela_inicio(vet_palavras, qtd_palavras, ranking);

  return 0;
}

/* 
  ---------- O que está faltando fazer? ----------
    - Implementar caso o jogador erre todas as chance o jogo acaba 
    - Verificar o momento de adicionar o jogador no Ranking (implementar)
    - Imprimir ranking
    - Fazer uma lógica que garanta a não repetição das palavras sorteadas
    - Ordenar o ranking pela pontuação (a cada inserção de um jogador no ranking reajanda (reordena) o ranking)
*/