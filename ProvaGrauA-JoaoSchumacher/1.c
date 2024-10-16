/*
 * Programa: 1.c
 * Descrição: Escreva um programa que sorteie números inteiros e decimais, respondendo a cada um dos
 * subitens abaixo:
 * a) Sorteie um número entre -50 e 50.
 * b) Sorteie um número par entre 20 e 100.
 * c) Sorteie um número decimal entre 0 e 1 com duas casas decimais.
 * 
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int inteiroSorteado = 0;
    int parSorteado = 0;
    float decimalSorteado = 0.0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // a)
    inteiroSorteado = -50 + rand() % (50 + 50 + 1);

    printf("\na) Sorteie um numero entre -50 e 50: %i\n", inteiroSorteado);

    // b)
    parSorteado = 20 + rand() % (100 - 20 + 1);
    // Testa se sorteou ímpar
    if (parSorteado % 2 != 0) {
        // Adiciona 1 para transformar em par
        parSorteado++;
    }
    printf("b) Sorteie um numero par entre 20 e 100: %i\n", parSorteado);
    
    // c)
    decimalSorteado = rand() % (100 + 1);
    decimalSorteado = decimalSorteado/100;
    
    printf("c) Sorteie um numero decimal entre 0 e 1 com duas casas decimais: %.2f\n\n", decimalSorteado);
}