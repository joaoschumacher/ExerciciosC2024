/*
 * Programa: exercicio_004.c
 * Descrição: Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição de variáveis
    int numero = 0;

    // Pede o número para o usuário
    printf("Digite um número: ");
    scanf("%i", &numero);

    // Testa se o número é divisível por 3
    if (numero % 3 == 0) {
        printf("O número digitado é divisível por 3.\n");
    } else {
        printf("O número digitado não é divisível por 3.\n");
    }
}