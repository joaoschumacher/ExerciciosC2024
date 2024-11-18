/*
 * Programa: exercicio_002.c
 * Descrição: O jogo "Whack-a-Mole" é um jogo divertido onde toupeiras aparecem aleatoriamente em diferentes buracos, e
 * o objetivo do jogador é acertar as toupeiras que surgem. Neste exercício, vamos simular uma versão simplificada do
 * surgimento das toupeiras do jogo utilizando uma matriz 4x4. A cada ciclo, quatro toupeiras aparecerão em posições
 * aleatórias dentro da matriz, representadas pelo símbolo 'T', enquanto os buracos restantes estarão vazios,
 * representados pelo símbolo '-'. Sua tarefa é gerar e exibir três gerações diferentes dessas matrizes.
 * Algumas instruções, para cada geração:
 * 
 * a) Crie uma função gerarToupeiras(), que retorne a matriz 4x4 preenchida
 * b) Dentro da função, inicializar uma matriz 4x4 preenchida com o símbolo '-' para representar buracos vazios.
 * c) Sorteie os dois índices, i e j, um para a linha e outro para a coluna da matriz. Esta será a posição para uma
 * nova toupeira ('T'), caso já não esteja ocupada. Isso quer dizer, que para cada uma das 4 toupeiras, é
 * necessário sortear estes dois índices enquanto não encontrar na matriz um buraco vazio ('-') no local
 * sorteado.
 * d) Para cada chamada de gerarToupeira(), imprima a matriz que retornou
 * Exemplo de saída:
 * 
 *  | Geração 1: | Geração 2: |  Geração 3: |  
 *  |  - T - -   |  - - T -   |   T - - -   |  
 *  |  T - - -   |  - - - T   |   - T - -   |  
 *  |  - - T -   |  T - T -   |   - T - -   |  
 *  |  - T - -   |  - - - -   |   - - T -   |  
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de constantes
const int TAMANHO_TABULEIRO = 4;
const int NUMERO_TOUPEIRAS = 4;
const int NUMERO_JOGADAS = 3;

// Função que gera um tabuleiro do jogo de toupeiras
void gerarToupeiras() {
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int posicaoX = 0;
    int posicaoY = 0;
    // Inicializa o tabuleiro vazio, com o caractere "-"
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = '-';
        }
    }

    // Loop para adicionar um número de toupeiras no tabuleiro
    for (int i = 0; i < NUMERO_TOUPEIRAS; i++) {
        posicaoX = rand() % (TAMANHO_TABULEIRO);
        posicaoY = rand() % (TAMANHO_TABULEIRO);
        // Caso já tenha uma toupeira nessa posição, tenta em outra
        if (tabuleiro[posicaoX][posicaoY] == 'T') {
            i--;
        } else {
        // Adiciona toupeira nessa coordenada
            tabuleiro[posicaoX][posicaoY] = 'T';
        }
    }
    
    
    // Imprime geração de tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Inicializa gerador de números aleatórios
    srand(time(0));

    for (int i = 0; i < NUMERO_JOGADAS; i++) {
        printf("Geração %i:\n", i + 1);
        // Chama função que gera o tabuleiro do jogo
        gerarToupeiras();
    }
    
}