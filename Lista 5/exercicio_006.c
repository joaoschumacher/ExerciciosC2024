/*
 * Programa: exercicio_006.c
 * Descrição: Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um programa que:
 *      a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
 *      acumulada de um jogador.
 *      b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
 *      c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
 *      d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
 *      mensagem de "Rodada de Destaque" para esse jogador.
 *      e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
 *      f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int maxJogadores = 4;
const int maxRodadas = 5;

int main()
{
    int pontuacao[maxJogadores] = {};

    // Inicializa gerador de números aleatórios
    srand(time(0));

    for (int i = 0; i < maxRodadas; i++) {
        printf("RODADA %i: ", i + 1);
        for (int j = 0; j < maxJogadores; j++) {
            pontuacao[j] += rand() % (101);
            printf(" %i", pontuacao[j]);
        }
        printf("\n");
    }
    
}