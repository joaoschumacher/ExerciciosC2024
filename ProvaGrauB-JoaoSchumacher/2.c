/*
 * Programa: 2.c
 * Descrição:  Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e
 * 4, faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém.
 * Exemplo de matriz:
 * 0 4 3 2 1
 * 1 0 2 4 0
 * 3 2 4 4 0
 * 1 2 3 4 0
 * 0 0 0 1 2
 * Retornaria a seguinte contagem:
 * Quantidade de valores 0: 8
 * Quantidade de valores 1: 4
 * Quantidade de valores 2: 5
 * Quantidade de valores 3: 3
 * Quantidade de valores 4: 5
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_MATRIZ 5
#define VALORES 5

int main()
{
    // Declaração de variáveis
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int contador[VALORES];

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Inicializa o vetor de contagem
    for (int i = 0; i < VALORES; i++) {
        contador[i] = 0;
    }
    

    // Gera uma matriz sorteando valores
    printf("matriz: ");
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("\n|");
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            matriz[i][j] = rand() % 5;
            printf("%i|", matriz[i][j]);
        }
    }

    // Loop para comparar cada valor da matriz com o índice do vetor contador
    for (int v = 0; v < VALORES; v++) {
        for (int i = 0; i < TAMANHO_MATRIZ; i++) {
            for (int j = 0; j < TAMANHO_MATRIZ; j++) {
                // Quando o índice for igual ao valor da matriz, soma 1
                if (matriz[i][j] == v) {
                    contador[v]++;
                }
            }
        }
    }

    // Exibe a quantidade de cada valor
    for (int i = 0; i < VALORES; i++) {
        printf("\nQuantidade de valores %i: %i", i, contador[i]);
    }
}