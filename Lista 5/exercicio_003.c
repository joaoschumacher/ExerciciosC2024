/*
 * Programa: exercicio_003.c
 * Descrição: Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
 * lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
 * array com 6 posições e ao final imprima o percentual do resultado de cada face.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Definição das variáveis
    int jogadas = 0;
    int valorSorteado = 0;
    int qntValores[6] = {};

    // Aceita o número de lançamentos que será feito
    printf("Numero de lancamentos: ");
    scanf("%i", &jogadas);
    printf("Jogadas: ");

    // Sorteia os N valores e coloca as quantidades em um vetor
    for (int i = 0; i < jogadas; i++) {
        valorSorteado = 1 + rand() % (6 - 1 + 1);
        printf(" %i", valorSorteado);
        qntValores[valorSorteado - 1]++; 
    }

    // Exibe resultados
    printf("\n\nEstatisticas: \n");
    for (int i = 0; i < 6; i++) {
        printf("Face %i: %i vezes (%.2f%%)\n", i + 1, qntValores[i], (float) qntValores[i] / jogadas * 100);
    }
    
    
}