/*
 * Programa: exercicio_002.c
 * Descrição: Escreva um programa em linguagem C que solicite o nome do usuário e, em seguida, imprima uma mensagem de boas-vindas na tela, utilizando o nome fornecido
 * Autor: João Pedro Schumacher
 * 
 */

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