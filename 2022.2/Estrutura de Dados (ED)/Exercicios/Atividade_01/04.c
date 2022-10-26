/* -----------------------------------------------------------------------------
Resposta ao exercício: 04 - Escreva um programa para concatenar
 duas strings usando somente ponteiros.
Autor: Angelo_A_Ferro
Matrícula: 1201524424
----------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

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

char* concatena(char* s1, char* s2)
{
    int tams3 = tamanho(s1)+tamanho(s2);
    char *s3 = malloc(tams3*sizeof(char));
    
    for (int i=0; i<tamanho(s1); i++)
    {
        s3[i] = s1[i];
    }
    for (int i=tamanho(s1), j=0; i<tamanho(s2), j<tamanho(s2); i++, j++)
    {
        s3[i] = s2[j];
    }
    s3[tams3] = '\0';
    return s3;
}

int main()
{
    char str1[]={ 'A','n','g','e','l','o','\0'}; //char por caractere sem \0 escondido
    char str2[]="Ferro";                      //char por string com \0 escondido
    char *str3=concatena(str1,str2);

    printf("\nString 1: %s\n", str1);
    printf("\nString 2: %s\n", str2);
    printf("\nString 3: %s\n\n", str3);

    return 0;
}