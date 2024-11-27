/*
 * Programa: 1.c
 * Descrição: Implemente uma função sortear que receba o intervalo de valores inteiros início e
 * fim como parâmetro, sorteie e retorne um número dentro do intervalo (considerando intervalo
 * fechado [início, fim]).
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Sorteia um valor dentro de um intervalo
int sortear(int inicio, int fim) {
    return inicio + rand() % (fim - inicio + 1);
}

int main()
{
    // Inicializa gerador de números aleatórios
    srand(time(0));
    // Exemplo de uso da função
    printf("Entre 1 e 10: %i\n", sortear(1,10));
    printf("Entre 10 e 100: %i\n", sortear(10,100));
    printf("Entre 100 e 1000: %i\n", sortear(100,1000));
}