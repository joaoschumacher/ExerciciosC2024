/*
 * Programa: exercicio_007.c
 * Descrição: Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos
 *   em positivos e vice-versa. 
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de constantes
const int MAX_LINHAS = 5;
const int MAX_COLUNAS = 5;

int main()
{
    // Declaração de variáveis
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int matrizInversa[MAX_LINHAS][MAX_COLUNAS];

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Loop para gerar a matriz
    for (int i = 0; i < MAX_LINHAS; i++) {
        for (int j = 0; j < MAX_COLUNAS; j++) {
            matriz[i][j] = rand() % (21) - 10;
        }
    }

    // Loop para ler dados da matriz
    for (int i = 0; i < MAX_LINHAS; i++) {
        printf("|");
        for (int j = 0; j < MAX_COLUNAS; j++) {
            // Exibe cada valor da matriz 
            printf(" %i", matriz[i][j]);
            matrizInversa[i][j] = matriz[i][j] * (-1); 
        }
        printf(" |\n");
    }
    printf("-------------------------------\n");
    // Loop para imprimir matriz com positivos e negativos invertidos
    for (int i = 0; i < MAX_LINHAS; i++) {
        printf("|");
        for (int j = 0; j < MAX_COLUNAS; j++) {
            // Exibe cada valor da matriz 
            printf(" %i", matrizInversa[i][j]);
        }
        printf(" |\n");
    }
}