/*
 * Programa: exercicio_006.c
 * Descrição: Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
 * dos valores sorteados.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Declaração de constantes
    int numeroRandom = 0;
    int menor = 100;
    int maior = 0;
    float media = 0.0;

    printf("Numeros sorteados: \n");
    // Loop para sortear os números
    for(int i = 0; i<5; i++) {
        numeroRandom = rand() % 100;
        printf("%i ", numeroRandom);
        // Verifica o menor número
        if (numeroRandom < menor) {
            menor = numeroRandom;
        }
        // Verifica o maior número
        if (numeroRandom > maior) {
            maior = numeroRandom;
        }
        // Calcula média
        media += numeroRandom;
    }
    media = media / 5;

    // Exibe resultados
    printf("\nResultados:\n");
    printf("Menor: %i\n", menor);
    printf("Maior: %i\n", maior);
    printf("Media: %.2f\n", media);
}