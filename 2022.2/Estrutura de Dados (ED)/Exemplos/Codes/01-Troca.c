#include <stdio.h>
#include <stdlib.h>

void troca(int *a , int *b)
{
    //recebe os enderecos e troca 
    //os valores dos enderecos
    int aux = *a;
        *a = *b;
        *b = aux;

}

int main()
{
    //Recebe:
    // a= 10 , b =99
    int a = 10;
    int b = 99;

    //Devolve:
    //a = 10    b = 99
    printf("Hello World!\n");
    printf("a= %d b= %d\n", a,b);

    troca (&a,&b);// manda o endereco pra troca   

    //Devolve:
    //a = 99    b = 10
    printf("Hello World!\n");
    printf("a= %d b= %d\n", a,b);
    return 0;
}