/*
 * Programa: exercicio_001.c
 * Descrição: Implementando o próprio “shuffle” em arrays: faça um algoritmo que receba um array e embaralhe os seus
 * elementos da seguinte maneira: por n vezes (n é o tamanho do array) ele deve sortear dois índices, i e j, e trocá-los
 * de lugar. 
 * 
 * Exemplo:
 * Array inicial, de tamanho 5:
 * |a|b|c|d|e|
 * Suponha que, em uma das 5 vezes, sejam sorteados os índices i = 0 e j = 3. Então, deverão ser trocados de lugar
 * os valores da primeira e quarta posição do array. O resultado após esta troca, será:
 * |d|b|c|a|e|
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int TAMANHO_ARRAY = 10;

void shuffle(int array[TAMANHO_ARRAY]) {
    int i = 0;
    int j = 0;
    int auxiliar = 0;
    for (int n = 0; n < TAMANHO_ARRAY; n++) {
        i = rand() % (TAMANHO_ARRAY);
        j = rand() % (TAMANHO_ARRAY);
        auxiliar = array[i];
        array[i] = array[j];
        array[j] = auxiliar;
    }
}


int main()
{

    // Declaração de variáveis
    int sorteado = 0;
    int array[TAMANHO_ARRAY];

    // Inicializa gerador de números aleatórios
    srand(time(0));


    printf("Array inicial, de tamanho %i: |", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        sorteado = rand() % (11);
        array[i] = sorteado;
        printf(" %i |", array[i]);
    }
    
    shuffle(array);
    printf("\n\nArray embaralhado: |");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf(" %i |", array[i]);
    }
    printf("\n");
}