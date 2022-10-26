/* -----------------------------------------------------------------------------
Resposta ao exercício: 03 -  Escreva um programa para calcular
 o tamanho de uma string usando somente ponteiros.
Autor: Angelo_A_Ferro
Matrícula: 1201524424
----------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int tamanho(char *str)
{
    int tam=0,i=0;
    while (str[i] != '\0')
    {
        tam++;
        i++;
    }
    return tam;
}

int main()
{
    char str1[]={'A','N','G','E','L','O','\0'}; //char por caractere sem \0 escondido
    char str2[]="Ferro";                 //char por string com \0 escondido
    
    printf("\nChar: %s",str1);
    printf("-->Tamanho=[%d]\n",tamanho(str1));
    printf("\nString: %s",str2);
    printf("-->Tamanho=[%d]\n\n",tamanho(str2));

    return 0;
}