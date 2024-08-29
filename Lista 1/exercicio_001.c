#include <stdio.h>

int main()
{
    char nome[100];

    printf("Qual seu nome? ");
    scanf("%s", &nome);

    printf("Seja bem vindo, %s!\n", nome);
}