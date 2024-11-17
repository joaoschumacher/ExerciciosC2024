/*
 * Programa: exercicio_003.c
 * Descrição: Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
 * matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
 * elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
 * 
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Declaração de constantes
const int TAMANHO_MATRIZ = 4;

int main()
{
    // Declaração de variáveis
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];

    // Loop para gerar a matriz
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            if(i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    
    // Loop para ler dados da matriz identidade
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("|");
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            // Exibe cada valor da matriz 
            printf(" %i", matriz[i][j]);
        }
        printf(" |\n");
    }
}