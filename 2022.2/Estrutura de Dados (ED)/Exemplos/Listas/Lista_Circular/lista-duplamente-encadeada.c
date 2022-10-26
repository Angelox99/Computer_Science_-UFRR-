#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct doublyNode {
  int val;
  struct doublyNode *prev;
  struct doublyNode *next;
} DoublyNode;

typedef struct listaDupLigada {
  DoublyNode *begin;
  DoublyNode *end;
  int size;
} ListaDupLigada;
 
ListaDupLigada *L;

DoublyNode *Node_create(int val) {
  DoublyNode *newNode = malloc(sizeof(DoublyNode));
  newNode->prev = NULL;
  newNode->next = NULL;
  newNode->val = val;

  return newNode;
}

ListaDupLigada *List_create() {
  ListaDupLigada *L = malloc(sizeof(ListaDupLigada));
  L->begin = NULL;
  L->end = NULL;
  L->size = 0;

  return L;
}

void List_destroy(ListaDupLigada **L_ref) {
  ListaDupLigada *L = *L_ref;

  DoublyNode *p = L->begin;
  DoublyNode *aux = NULL;

  while (p != NULL) {
    aux = p;
    p = p->next;
    free(aux);
  }
  free(L);

  *L_ref = NULL;
}

bool List_is_empty(ListaDupLigada *L) { return L->size == 0; }

void List_add_first(ListaDupLigada *L, int val) {
  DoublyNode *p = Node_create(val);
  p->next = L->begin;

  if (List_is_empty(L)) {
    L->end = p;
  } else {
    L->begin->prev = p;
  }

  L->begin = p;
  L->size++;
}

void List_add_last(ListaDupLigada *L, int val) {
  DoublyNode *p = Node_create(val);
  p->prev = L->end;

  if (List_is_empty(L)) {
    L->begin = p;
  } else {
    L->end->next = p;
  }

  L->end = p;
  L->size++;
}

void List_print(ListaDupLigada *L) {
  DoublyNode *p = L->begin;

  printf("L -> ");

  // enquanto p não chegou ao fim da lista, isto é,
  // enquanto p estiver apontando para um nó da lista
  while (p != NULL) {
    printf("%d -> ", p->val);
    p = p->next;
  }
  printf("NULL\n");

  if (L->end == NULL) {
    printf("L->end = NULL\n");
  } else {
    printf("L->end = %d\n", L->end->val);
  }

  printf("Size: %d\n", L->size);
  puts("");
}

void List_inverted_print(ListaDupLigada *L) {
  DoublyNode *p = L->end;

  printf("L->end -> ");

  // enquanto p não chegou ao fim da lista, isto é,
  // enquanto p estiver apontando para um nó da lista
  while (p != NULL) {
    printf("%d -> ", p->val);
    p = p->prev;
  }
  printf("NULL\n");

  if (L->end == NULL) {
    printf("L->begin = NULL\n");
  } else {
    printf("L->begin = %d\n", L->begin->val);
  }

  printf("Size: %d\n", L->size);
  puts("");
}

void List_remove(ListaDupLigada *L, int val) {
  if (!List_is_empty(L)) {
    DoublyNode *p = L->begin;

    // caso 1: o elemento está na cabeça da lista
    if (L->begin->val == val) {
      L->begin = p->next;

      // a lista possui apenas um único elemento
      if (L->end == p) {
        L->end = NULL;
      }
      // a lista possui mais de um elemento
      else {
        L->begin->prev = NULL;
      }

      free(p);
      L->size--;
    }
    // caso 2: o elemento está no meio da lista
    // caso 3: o elemento está no final da lista
    else {
      p = p->next;

      while (p != NULL) {
        if (p->val == val) {
          p->prev->next = p->next;

          // caso 3
          if (L->end == p) {
            L->end = p->prev;
          }
          // caso 2
          else {
            p->next->prev = p->prev;
          }

          free(p);
          p = NULL;
          L->size--;
        } else {
          p = p->next;
        }
      }
    }
  }
}

//QUESTAO 01 -----------------------------------------------------------------------------------------
DoublyNode* retornaMeioDaLista(ListaDupLigada *L)
{
  DoublyNode * auxInicio = L->begin;
  DoublyNode * auxFim = L->end;
  while (auxInicio != auxFim) //Lista Impar
  {
    if(auxInicio->next == auxFim && auxFim->prev == auxInicio) break; //Lista PAR
    auxInicio = auxInicio->next;
    auxFim = auxFim->prev;
  }
  return auxInicio;//Retorna o no do meio
  return auxFim;//Retorna o no do meio
}


//QUESTAO ? -----------------------------------------------------------------------------------------
DoublyNode* buscaRec(DoublyNode* atual, int x)
{
  if(atual == NULL) return NULL;
  if(atual->val == x) return atual;
  
  buscaRec(atual->next,x);
}
DoublyNode* buscaMinRec(DoublyNode *min, DoublyNode *atual)//BuscaMinRec(begin,begin)
{
  if(atual == NULL) return min;
  if(atual->val < min->val) return buscaMinRec(atual,atual->next);
  
  buscaMinRec(min,atual->next)
}
//QUESTAO 03 -----------------------------------------------------------------------------------------
DoublyNode* buscaMinRecRemove(DoublyNode *min, DoublyNode *atual)//BuscaMinRec(begin,begin)
{
  DoublyNode aux = *min;
  if(atual == NULL)
  {//Remove o minimo da lista
    if(min->prev == NULL)//Primeiro da lista
    {
      min->next->prev = NULL;
      L->begin = min->next;
    }
    else if(min->next == NULL)//Ultima da lista
    {
      min->prev->next = NULL;
      L->end = min->prev;
    } 
    else//Meio da lista
    {
      min->prev->next = min->next;
      min->next->prev = min->prev;
    }
    // if(min->prev != NULL && min->next != NULL)//Meio da lista
    // {
    // }   

    free(min);
    return aux;
  }
  if(atual->val < min->val) return buscaMinRec(atual,atual->next);
  
  return buscaMinRec(min,atual->next)
}

// TESTES ---------------------------------------------------------------------------------------------
int main() {
  L = List_create();

  List_print(L);
  List_remove(L, 99);
  List_print(L);

  List_add_first(L, 10);
  List_print(L);
  puts("Removendo 10");
  List_remove(L, 10);
  List_print(L);

  List_add_last(L, 10);
  List_add_last(L, 2);
  List_add_last(L, 4);
  List_print(L);
  puts("Removendo 10");
  List_remove(L, 10);
  List_print(L);
  puts("Removendo 2");
  List_remove(L, 2);
  List_print(L);
  puts("Removendo 4");
  List_remove(L, 4);
  List_print(L);

  List_add_last(L, 10);
  List_add_last(L, 2);
  List_add_last(L, 4);
  List_add_last(L, 5);
  List_add_last(L, 7);
  List_print(L);
  puts("Removendo 2");
  List_remove(L, 2);
  List_print(L);
  puts("Removendo 4");
  List_remove(L, 4);
  List_print(L);

  puts("Removendo 7");
  List_remove(L, 7);
  List_print(L);

  puts("Removendo 99");
  List_remove(L, 99);
  List_print(L);

  List_add_last(L, 4);
  List_add_last(L, 5);
  List_add_last(L, 7);
  List_print(L);
  puts("Removendo 5");
  List_remove(L, 5);
  List_print(L);

  printf("meio: %d\n",retornaMeioDaLista(L)->val);
  printf("%s\n",buscaRec(L->begin,999) ? "Achou!" : "Nao Ahou!");
  printf("Min: %d\n",buscaMinRec(L->begin,L->begin->val) ? "Achou!" : "Nao Achou!");
  printf("Min Removido: %d\n",buscaMinRecRemove(L->begin,L->begin->next).val); 

  List_destroy(&L);
}