/*
 * Programa: exercicio_002.c
 * Descrição: Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
 * valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
 * 12 e 20.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int v[5] = {};
    int tamV = sizeof(v) / sizeof(v[0]);

    // Loop para ler os 5 valores
    for (int i = 0; i < tamV; i++) {
        printf("Digite o valor %i: ", i+1);
        scanf("%i", &v[i]);
    }
    
    // Loop para imprimir os 5 valores calculados
    for (int i = 0; i < tamV; i++) {
        printf("%i x %i = %i\n", v[i], i, v[i] * i); 
    }
    
}