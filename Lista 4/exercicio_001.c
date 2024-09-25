/*
 * Programa: exercicio_001.c
 * Descrição: Faça um algoritmo para:
 * a. Gerar e escrever todos os números inteiros do intervalo [0,100].
 * b. Gerar e escrever os números pares do intervalo [20,50].
 * c. Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente.
 * d. Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.
 * e. Ler 15 números e escrever a soma e a média dos números lidos.
 * f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números ímpares lidos.
 * g. Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
 *    “POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
 *    números positivos e negativos lidos.
 * h. Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
 *    que deverão ser lidos e também deve ser lido do teclado)
 *
 *    Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaração de variáveis
    float media = 0.0;
    int soma = 0;
    int numeroRandom = 0;
    int quantidadePar = 0;
    int quantidadeImpar = 0;
    int quantidadeLer = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Gerar e escrever todos os números inteiros do intervalo [0,100]
    printf("a) [ ");
    for(int i = 0; i <= 100; i++) {
        printf("%i ", i);
    }
    printf("]\n");

    // Gerar e escrever os números pares do intervalo [20,50]
    printf("b) [ ");
    for(int i = 0; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("%i ", i);
        }
    }
    printf("]\n");

    // Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente
    printf("c) [ ");
    for(int i = 70; i >= 25; i--) {
        printf("%i ", i);
    }
    printf("]\n");

    // Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente
    printf("d) [ ");
    for(int i = 95; i >= 25; i--) {
        if(i % 2 != 0) {
            printf("%i ", i);
        }
    }
    printf("]\n");


    // Ler 15 números e escrever a soma e a média dos números lidos
    printf("e) [ ");
    for(int i = 1; i <= 15; i++) {
        numeroRandom = rand() % 100;
        media += numeroRandom;
        printf("%i ", numeroRandom);
    }
    printf("]  -> ");
    media = media / 15;
    printf("  Media: %.2f\n", media);


    // Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números ímpares lidos
    printf("f) [ ");
    for(int i = 1; i <= 10; i++) {
        numeroRandom = rand() % 100;
        printf("%i ", numeroRandom);
        if(numeroRandom % 2 == 0) {
            quantidadePar++;
        } else {
            quantidadeImpar++;
        }
    }
    printf("] --> Quantidade pares: %i  /  Quantidade impares: %i\n", quantidadePar, quantidadeImpar);
    
    
    // Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
    // “POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
    // números positivos e negativos lidos.
    printf("g)\n");
    for(int i = 1; i <= 10; i++) {
        numeroRandom = (-10) + rand() % (10 + 10 + 1);
        printf("%i (", numeroRandom);
        if(numeroRandom > 0) {
            printf("POSITIVO)\n");
        } else if(numeroRandom < 0) {
            printf("NEGATIVO)\n");
        } else {
            printf("NULO)\n");
        }
    }
    
    // Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
    // que deverão ser lidos e também deve ser lido do teclado)
    printf("h) Quantos numeros serao lidos? ");
    scanf("%i", &quantidadeLer);
    printf("[");
    for(int i = 1; i <= quantidadeLer; i++) {
        numeroRandom = rand() % 100;
        soma += numeroRandom;
        printf("%i ", numeroRandom);
    }
    printf("]  -> ");
    printf("  Soma: %i\n", soma);

}