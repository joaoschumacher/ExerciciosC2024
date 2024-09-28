/*
 * Programa: exercicio_007.c
 * Descrição: Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <string.h>

#define QUANTIDADE_NOMES 5

int main()
{
    // Declaração de variáveis
    char nomes[QUANTIDADE_NOMES][100];
    char primeiro[100];

    // Aceita os nomes
    printf("Digite %d nomes:\n", QUANTIDADE_NOMES);
    for (int i = 0; i < QUANTIDADE_NOMES; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Inicializa o primeiro nome como o primeiro da lista
    strcpy(primeiro, nomes[0]);

    // Verifica qual o primeiro nome em ordem alfabética
    for (int i = 1; i < QUANTIDADE_NOMES; i++) {
        if (strcmp(nomes[i], primeiro) < 0) {
            strcpy(primeiro, nomes[i]);
        }
    }

    // Exibe o resultado
    printf("\nO primeiro nome em ordem alfabetica é: %s\n", primeiro);

    return 0;
}