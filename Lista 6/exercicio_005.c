/*
 * Programa: exercicio_005.c
 * Descrição: Encontre o maior e o menor valor da matriz gerada no exercício anterior.
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
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int maiorValor = 0;
    int menorValor = 0;

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
            // Testa se é o maior valor
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
            // Testa se é o menor valor ou é a primeira comparação
            if (matriz[i][j] < menorValor || (i == 1 && j == 1)) {
                menorValor = matriz[i][j];
            }
        }
        printf(" |\n");
    }
    // Exibe resultados
    printf("Maior valor: %i\n", maiorValor);
    printf("Menor valor: %i\n", menorValor);
}