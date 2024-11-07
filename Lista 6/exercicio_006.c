/*
 * Programa: exercicio_006.c
 * Descrição: Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
 *            informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
 *            segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
 *            como nota do Grau A e do Grau B.
 *            Exemplo (matriz com informação de 3 alunos):
 *
 *                  ------------------------------                
 *                  |Grau A |Grau B |Grau Parcial|
 *                  |7,5    |6,7    |7,0         |
 *                  |4,0    |7,1    |6,1         |
 *                  |8,5    |10,0   |9,5         |
 *                  ------------------------------                
 *  
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração de constantes
const int MAX_ALUNOS = 10;
const int MAX_GRAUS = 3;

int main()
{
    // Declaração de variáveis
    float notas[MAX_ALUNOS][MAX_GRAUS] = {};

    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Loop para popular matriz de notas
    for (int i = 0; i < MAX_ALUNOS; i++) {
        for (int j = 0; j < MAX_GRAUS; j++) {
            // Se for coluna de GP
            if (j == 2) {
                // Calcula média
                notas[i][j] = (notas[i][0] + 2*notas[i][1]) / 3;
            } else { // Se for coluna GA e GB
                // Sorteia nota
                notas[i][j] = rand() % 101 / 10.0;
            }
        }
        
    }
    
    // Exibe resultado final
    printf("| GA | GB | GP |\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        for (int j = 0; j < MAX_GRAUS; j++) {
            printf("| %.1f", notas[i][j]);
        }
        printf("|\n");
    }

}