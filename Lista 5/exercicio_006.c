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

// Declaração de constantes
const int maxJogadores = 4;
const int maxRodadas = 5;

int main()
{
    // Declaração de variáveis
    int pontuacao[maxJogadores] = {};
    int sorteado = 0;
    int maiorPontuacao = 0;
    int jogadorMaiorPontuacao = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Loop para cada rodada
    for (int i = 0; i < maxRodadas; i++) {
        maiorPontuacao = 0;
        jogadorMaiorPontuacao = 0;
        printf("RODADA %i: ", i + 1);
    // Loop para cada jogador
        for (int j = 0; j < maxJogadores; j++) {
            // Sorteia pontuação para cada jogador
            sorteado = rand() % (101);
            pontuacao[j] += sorteado;
            // Se algum jogador sorteou maior ou igual a 80 e for a maior que a maior pontuação da rodada
            if (sorteado >= 80 && sorteado > maiorPontuacao) {
                maiorPontuacao = sorteado;
                jogadorMaiorPontuacao = j;
            }
            printf(" |%i", pontuacao[j]);
        }
        // Exibe os destaques de cada rodada
        if (maiorPontuacao <= 0) {
           printf("| \n");
        } else {
           printf("| Destaque da rodada: Jogador %i -> %i pontos!\n", jogadorMaiorPontuacao+1, maiorPontuacao);
        }
    }

    jogadorMaiorPontuacao = 0;
    maiorPontuacao = 0;
    // Exibe resultados
    for (int i = 0; i < maxJogadores; i++) {
        if (pontuacao[i] > maiorPontuacao) {
            maiorPontuacao = pontuacao[i];
            jogadorMaiorPontuacao = i;
        } 
    }
    printf("\n\nO jogador %i venceu com a soma de %i pontos!", jogadorMaiorPontuacao+1, maiorPontuacao);
    
}