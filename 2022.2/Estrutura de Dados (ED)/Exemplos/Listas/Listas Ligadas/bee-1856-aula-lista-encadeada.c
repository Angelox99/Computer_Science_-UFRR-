#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  long long value;
  struct node *next;
} Node;

typedef struct linkedList {
  Node *begin;
  Node *end;
  long long size;
} LinkedList;

Node *create_node(long long value) {
  Node *newNode = malloc(sizeof(Node));
  newNode->value = value;
  newNode->next = NULL;
  return newNode;
}

LinkedList *create_list() {
  LinkedList *newL = malloc(sizeof(LinkedList));
  newL->begin = NULL;
  newL->end = NULL;
  newL->size = 0;
  return newL;
}

int linkedList_isEmpty(LinkedList *L) { return L->size == 0; }

void insert_final_fast(LinkedList *L, long long value) {
  Node *newNode = create_node(value);

  // 1º Caso - Lista Vazia
  if (linkedList_isEmpty(L)) {
    L->begin = newNode;
    L->end = newNode;
  } else {  // 2º Caso - Lista tem UM ou +
    L->end->next = newNode;
    L->end = newNode;
  }
  L->size++;
}

void insert_middle(LinkedList *L, long long p, long long e) {
  Node *newNode = create_node(p);
  Node *aux = L->begin;
  // 1º Caso - Lista Vazia
  if (linkedList_isEmpty(L)) {
    L->begin = newNode;
    L->end = newNode;
    L->size++;
  } else {  // 2º Caso - Lista tem UM ou + 1 elemento
    while (aux != NULL) {
      if (aux->value == e) {
        newNode->next = aux->next;
        aux->next = newNode;
      }
      aux = aux->next;
    }
    L->size++;
  }
}

// R e (1 ≤ e ≤ 10^9): Remova o inimigo e da lista. É garantido que e está na lista;
void remove_node(LinkedList *L, long long e) {
  /*
      IMPLEMENTAR
  */
}

// Q a b (1 ≤ a, b ≤ 10^9): Determine quantos inimigos estão na lista entre a e b, excluindo ambos. É garantido que a e b estão na lista.
void query_node(LinkedList *L, long long a, long long b) {
  /*
      IMPLEMENTAR
  */
}

void print_list(LinkedList *L) {
  if (!linkedList_isEmpty(L)) {
    Node *aux = L->begin;
    while (aux != NULL) {
      printf("%lld->", aux->value);
      aux = aux->next;
    }
    printf("\nTAM: %lld\n", L->size);
  }
}

int main() {
  LinkedList *L = create_list();

  long long n;
  scanf("%lld", &n);
  while (n--) {
    long long ini;
    scanf("%lld", &ini);
    insert_final_fast(L, ini);
  }
  // print_list(L);
  long long Q, tamSaida = 0;
  scanf("%lld", &Q);
  while (Q--) {
    char letra;
    long long p, e;

    scanf(" %c", &letra);
    if (letra == 'I') {
      scanf("%lld %lld", &p, &e);
      insert_middle(L, p, e);
    } else if (letra == 'R') {
      scanf("%lld", &e);
      // remove_node(L, e);  // IMPLEMENTAR 
    } else if (letra == 'Q') {
      scanf("%lld %lld", &p, &e);
      // long long count = query_node(L, p, e);  // IMPLEMENTAR
      //  printf("%lld\n", count);
    }
  }
  // print_list(L);
  return 0;
}