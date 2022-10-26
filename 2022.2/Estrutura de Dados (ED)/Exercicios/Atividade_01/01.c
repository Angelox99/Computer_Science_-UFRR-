/* -----------------------------------------------------------------------------
Resposta ao exercício: 01 - Entre com N valores no vetor e 
devolva o vetor na ordem contraria.
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
    puts("\n");


    return 0;
}