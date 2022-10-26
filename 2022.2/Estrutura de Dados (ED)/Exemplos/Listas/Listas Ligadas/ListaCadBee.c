#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;

}node;

typedef struct ListLinked
{
    node *begin;

}ListLinked;

node* create_node(int value)
{
    node *newNode = malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

ListLinked *create_list()
{
    ListLinked *L = malloc(sizeof(ListLinked));
    L->begin = NULL;
    return L;
}

//Possivel dica feita em sala:-----------------------------------------------------------------------------
void insert_last(ListLinked *L, int value)
{
    node *newNode = create_node(value);
    //Caso 1: Lista esta vazia
    if (L->begin != NULL)
    {
        L->begin = newNode;
    }
    else //Caso 2:Lista nao esta vazia
    {
        //Node *aux = create_node(NULL);
        node *aux = L->begin;
        aux = L->begin;
        while (aux->next != NULL)
        {
            aux=aux->next;
        }
        aux->next = newNode;
    }
}

void print_list(ListLinked *L)
{
    node *aux = L->begin;
    while (aux != NULL)
    {
        printf("%d ->",aux->value);
        aux = aux->next;
    }
    printf("\n");
}
//--------------------------------------------------------------------------------------------------------------------------------

int main ()
{
    ListLinked* L = create_list();
    insert_last_slow(L, 10);
    insert_last_slow(L, 20);

    // node *n1 = create_node(10); // Pq ja cria o no como um ponteiro ?????
    // node *n2 = create_node(2);
    // node *n3 = create_node(4);
    // node *n4 = create_node(5);
    // node *n5 = create_node(7);

    // L->begin = n1;
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;

    // node *p = L->begin;

    // while (p != NULL)
    // {
    //     printf(" %d >",p->value);
    //     p = p->next;
    // }

    return 0;
}