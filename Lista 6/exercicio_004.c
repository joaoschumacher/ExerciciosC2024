/*
 * Programa: exercicio_004.c
 * Descrição: Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e 10. Calcule as somas:
 *       a. dos elementos da segunda linha
 *       b. dos elementos da quinta coluna
 *       c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
 *       d. dos elementos só das colunas com índices pares
 *       e. dos elementos só das linhas com índices ímpares

 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de constantes
const int MAX_LINHAS = 4;
const int MAX_COLUNAS = 6;


int main()
{
    // Declaração de variáveis
    int matriz[MAX_LINHAS][MAX_COLUNAS] = {};
    int respostaA = 0;
    int respostaB = 0;
    int respostaC = 0;
    int respostaD = 0;
    int respostaE = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Loop para gerar a matriz
    for (int i = 0; i < MAX_LINHAS; i++) {
        for (int j = 0; j < MAX_COLUNAS; j++) {
            matriz[i][j] = rand() % (21) - 10;
        }
    }

    // Loop para ler dados da matriz identidade
    for (int i = 0; i < MAX_LINHAS; i++) {
        printf("|");
        for (int j = 0; j < MAX_COLUNAS; j++) {
            // Soma dos números da linha 2
            if (i == 1) {
                respostaA += matriz[i][j];
            }
            // Soma dos números da coluna 5
            if (j == 4) {
                respostaB += matriz[i][j];
            }
            // Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
            if (i == 0) {
                respostaC += matriz[i][j] * matriz[3][j];
            }
            // Soma dos elementos so das colunas com indices pares
            if ((j + 1) % 2 == 0) {
                respostaD += matriz[i][j];
            }
            // Soma dos elementos so das linhas com indices impares
            if ((i + 1) % 2 != 0) {
                respostaE += matriz[i][j];
            }
            // Exibe cada valor da matriz 
            printf(" %i", matriz[i][j]);
        }
        printf(" |\n");
    }

    // Exibe os resultados
    printf("a. Soma dos elementos da segunda linha: %i\n", respostaA);
    printf("b. Soma dos elementos da quinta coluna: %i\n", respostaB);
    printf("c. Soma da multiplicacao dos elementos da primeira linha pelos elementos da quarta linha: %i\n", respostaC);
    printf("d. Soma dos elementos so das colunas com indices pares: %i\n", respostaD);
    printf("e. Soma dos elementos so das linhas com indices impares: %i\n", respostaE);

    
}