#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[64];
    int idade;
    float media;
}Aluno;

int main()
{
    Aluno a1;
    strcpy( a1.nome, "Angelo");
    a1.idade = 27;
    a1.media = 9.9;

    printf("Aluno: %s\n", a1.nome);
    printf("Aluno: %d\n", a1.idade);
    printf("Aluno: %.2f\n", a1.media);

    printf("Sizeof(a1): %d\n", sizeof(a1));
    
    return 0;

}