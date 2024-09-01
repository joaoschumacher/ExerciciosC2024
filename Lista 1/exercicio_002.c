#include <stdio.h>

int main()
{
    // Declaração de variáveis
    char nome[100];

    // Pergunta o nome
    printf("Qual seu nome? ");
    scanf("%s", &nome);

    // Exibe as boas vindas ao usuário
    printf("Seja bem vindo, %s!\n", nome);
}