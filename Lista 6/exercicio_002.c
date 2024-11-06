/*
 * Programa: exercicio_002.c
 * Descrição: Faça a multiplicação de todos os elementos da matriz abaixo por 7. 
 *
 *                                      | 1  5  9  2  5  |
 *                                  M = | 7  4  13 21  6 |
 *                                      | 8 −3  5  7  12 |
 *                                       
 *
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Declaração de constantes
const int MAX_VETOR = 5;
const int VETORES = 3;

int main()
{
    // Declaração de variáveis 
    int vetor1[] = {1, 5, 9, 2, 5};
    int vetor2[] = {7, 4, 13, 21, 6};
    int vetor3[] = {8, -3, 5, 7, 12};
    int matriz[VETORES][MAX_VETOR] = {};

    // Loop para popular a matriz
    for (int i = 0; i < MAX_VETOR; i++) {
        matriz[0][i] = vetor1[i];
        matriz[1][i] = vetor2[i];
        matriz[2][i] = vetor3[i];
    }

    // Loop para ler dados da matriz
    for (int i = 0; i < VETORES; i++) {
        printf("|");
        for (int j = 0; j < MAX_VETOR; j++) {
            // Exibe cada valor da matriz e multiplica por 7 
            printf(" %i", matriz[i][j] * 7);
        }
        printf(" |\n");
    }
}