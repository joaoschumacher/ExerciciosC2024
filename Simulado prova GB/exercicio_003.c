/*
 * Programa: exercicio_003.c
 * Descrição: Implemente um programa que, dado um array de 20 inteiros preenchidos com valores entre 0 e 4, faça a
 * contagem de quantos valores de cada um dos números possíveis este vetor contem.
 * Exemplo: 
 *  array: |0|3|2|2|4|4|1|0|0|0|4|4|2|3|1|2|0|2|1|3|
 *  Retornaria a seguinte contagem:
 *  Quantidade de valores 0: 5
 *  Quantidade de valores 1: 3
 *  Quantidade de valores 2: 5
 *  Quantidade de valores 3: 3
 *  Quantidade de valores 4: 4
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int TAMANHO_VETOR = 10;
const int VALORES = 5;


int main()
{
    // Declaração de variáveis
    int vetor[TAMANHO_VETOR];
    int contador[VALORES];

    // Inicializa gerador de números aleatórios
    srand(time(0));

    for (int i = 0; i < VALORES; i++) {
        contador[i] = 0;
    }
    

    // Gera um vetor sorteando valores
    printf("Vetor: |");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = rand() % 5;
        printf("%i|", vetor[i]);
    }

    for (int i = 0; i < VALORES; i++) {
        for (int j = 0; j < TAMANHO_VETOR; j++) {
            if (vetor[j] == i) {
                contador[i]++;
            }
        }

    }

    // Gera um vetor sorteando valores
    for (int i = 0; i < VALORES; i++) {
        printf("\nQuantidade de valores %i: %i", i, contador[i]);
    }
    
}