#include <stdio.h>
#include <stdlib.h>

// TAD - Tipo Abstrato de Dados
typedef struct node {
  int value;
  struct node *next;
} Node;

typedef struct listLinked {
  Node *begin;
} ListLinked;

Node *create_node(int value) {
  Node *newNode = malloc(sizeof(Node));
  newNode->value = value;
  newNode->next = NULL;
  return newNode;
}

ListLinked *create_list() {
  ListLinked *newL = malloc(sizeof(ListLinked));
  newL->begin = NULL;
  return newL;
}

int main() {
  ListLinked *L = create_list();

  Node *n10 = create_node(10);
  Node *n2 = create_node(2);
  Node *n4 = create_node(4);
  Node *n5 = create_node(5);
  Node *n7 = create_node(7);

  L->begin = n10;
  n10->next = n2;
  n2->next = n4;
  n4->next = n5;
  n5->next = n7;

  Node *p = L->begin;

  while (p != NULL) {
    printf("%d->", p->value);
    p = p->next;
  }

  return 0;
}