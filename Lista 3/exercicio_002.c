/*
 * Programa: exercicio_002.c
 * Descrição: Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A + C.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição das variáveis
    int valorA = 0;
    int valorB = 0;
    int valorC = 0;
    int somaAB = 0;
    int somaAC = 0;

    // Pede os valores para o usuário
    printf("Digite o valor A: ");
    scanf("%i", &valorA);
    printf("Digite o valor B: ");
    scanf("%i", &valorB);
    printf("Digite o valor C: ");
    scanf("%i", &valorC);

    // Calcula as somas A + B e A + C
    somaAB = valorA + valorB;
    somaAC = valorA + valorC;

    // Exibe o resultado
    if(somaAB > somaAC) {
        printf("A soma A + B e maior que A + C!\n");
    } else {
        printf("A soma A + B não e maior que A + C!\n");
    }
}