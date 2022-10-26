/* -----------------------------------------------------------------------------
Resposta ao exercício: 02 - Mude o programa anterior para ordenar
 o vetor usando o algoritmo da bolha.
Autor: Angelo_A_Ferro
Matrícula: 1201524424
----------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#define N 10

void invert (int *vO, int *vI)
{
    for(int i=0, j = N-1; i<N && j >= 0; i++, j-- ) 
    {
        vI[i] = vO[j];
    }
}

void troca(int *x, int *y)
{
    int aux =*x;
    *x = *y;
    *y = aux;
}

int main()
{
    // inicia vetor
    int vI[N];
    int vO[N];

    //Scan do vetor
    for(int i=0 ; i<N ; i++)
    {
    printf("Digite o valor da posicao [%d]: ",i);
        scanf("%d",&vO[i]);
    }
       
    //Printa vetor original
    puts("\n[V] Original:");
    for (int i = 0; i < N; i++)
    {
        printf("[%d]",vO[i]);
    }

    //inverte o vetor
    invert(vO, vI);

    //Imprime o vetor invertido
    puts("\n\n[V] Invertido:");
    for(int i=0; i<N ; i++) 
    {
        printf("[%d]",vI[i]);
    }

   
   //Ordena o vetor em ordem crescente
    for(int j=0; j<N ; j++)
    {
        for(int i=0; i<N-1 ; i++)
        {
            if(*(vO+i) > *(vO+i+1))
            {
                troca(&vO[i],&vO[i+1]);
            }
        }
    }

    //printa o vetor ordenado
    printf("\n\n[V] com Bubble sort:\n");

    for(int i=0; i<N ; i++) 
    {
        printf("[%d]",vO[i]);       
    }

    puts("\n");

    return 0;
}