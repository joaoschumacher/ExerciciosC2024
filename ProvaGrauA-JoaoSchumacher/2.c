/*
 * Programa: 2.c
 * Descrição: Escreva um programa que sorteie três números inteiros entre 1 e 10. O programa deve
 * continuar sorteando até que o primeiro número seja menor que o segundo, e o segundo seja
 * menor que o terceiro. Não use o comando break.
 * Regras:
 *  a) A cada iteração, o programa deve exibir os números sorteados.
 *  b) Quando a condição for atendida (primeiro < segundo e segundo < terceiro), o
 *     programa deve imprimir uma mensagem indicando que os números satisfazem a
 *     condição.
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
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Loop enquanto valor1 é menor que  
    do {
        valor1 = 1 + rand() % (10 - 1 + 1);
        valor2 = 1 + rand() % (10 - 1 + 1);
        valor3 = 1 + rand() % (10 - 1 + 1);
        printf("\nOs valor sorteados foram %i, %i e %i", valor1, valor2, valor3);
    } while (valor1 > valor2 || valor2 > valor3);

    printf("\n\nOs valores sorteados satisfazem a condicao: ( %i < %i < %i )", valor1, valor2, valor3);
}