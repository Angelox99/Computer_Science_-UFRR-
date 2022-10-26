/* Algoritimo JOGO DA FORCA
1 ->Imprimir a forca
2 ->Imprimir os underlines para cada letra
3 ->Recebe a letra
4 ->Se letra correta, atualiza a palavra na tela
5 ->se nao incremeta erros
6 ->Verifica se ganhou
7 ->Verifica se o jogo
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM_STR 100

void imprimir_forca(int estado)
{
    if (estado == 0)
    {
        printf(" __________\n");
        printf(" |        |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (estado == 1)
    {

    }
    else if (estado == 2)
    {
        printf(" __________\n");
        printf(" |        |\n");
        printf(" |        0\n");
        printf(" |        |\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (estado == 3)
    {
        printf(" __________\n");
        printf(" |        |\n");
        printf(" |        0\n");
        printf(" |       /|\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");


    }
    else if (estado == 4)
    {
        printf(" __________\n");
        printf(" |        |\n");
        printf(" |        0\n");
        printf(" |       /|\\    \n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (estado == 5)
        {
        printf(" __________\n");
        printf(" |        |\n");
        printf(" |        0\n");
        printf(" |       /|\\ \n");
        printf(" |       /\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (estado == 6)
    {
        printf(" __________\n");
        printf(" |        |\n");
        printf(" |        0\n");
        printf(" |       /|\\ \n");
        printf(" |       / \\ \n");//????????????????
        printf(" |\n");
        printf("_|_     ! GAME OVER !\n");
    } 
}

int main()
{
    imprimir_forca(6);

    char p_sec[TAM_STR];

    printf("Jogador 1: \n");
    printf("Digite a palavra secreta: ");
    fgets(p_sec, TAM_STR, stdin);//um tipo de scanf
    
    p_sec[strlen(p_sec)-1]='\0';//vetor n-1 
    printf("Palavra Secreta: %s",p_sec);
    printf("Tamanho da Palavra: %d\n\n",strlen(p_sec));

    
    return 0;
}

