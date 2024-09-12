/*
 * Programa: exercicio_005.c
 * Descrição: Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se 
 * é ímpar.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição de variáveis
    int numero = 0;

    // Pede número para o usuário
    printf("Digite um número inteiro qualquer: ");
    scanf("%i", &numero);

    // Testa se o número é par ou ímpar
    if(numero % 2 == 0) {
        printf("O número digitado é par!\n");
    } else {
        printf("O número digitado é ímpar!\n");
    }
}