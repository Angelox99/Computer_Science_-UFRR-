//Feito em sala sobre listas
#include <stdio.h>
#include <stdlib.h>

void imprimeLista(Node * ini)
{
    Node* p;
    for(p = ini->prox; p != NULL; p = p->prox) 
        printf("%d", p->conteudo);
}

Node* Buscalista()
{

}
//Main------------------------------------------------------------------------------------------
int main()
{
    //Instanciacao da lista com cabeca
    Node* iniC = malloc(sizeof(Node));
    ini->prox = NULL;
    
    //Instanciacao da lista sem cabeca
    Node* iniS = malloc(sizeof(Node));
    iniS = NULL;

    //Criacao dos nodes
    Node* nodeC = malloc(sizeof(Node));
    nodeC->conteudo = 12;

    iniCC->prox = nodeB;
    iniB->prox = nodeC;
    iniC->prox = nodeA;
    iniA->prox = NULL;







    return 0;
}