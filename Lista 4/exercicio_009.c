/*
 * Programa: exercicio_009.c
 * Descrição: Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
 * teclado.
 * Exemplo de tela de saída, para n = 5 e caracter = `*`:
 * Entre com um número: 5
 * Entre com um caracter: *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int linhas = 0;
    char caractere = ' ';

    // Aceita o número de linhas
    printf("Informe o numero de linhas: ");
    scanf("%i", &linhas);
    getchar();
    // Aceita o caractere que será usado
    printf("Infome o caractere que será usado: ");
    scanf("%c", &caractere);

    // Loop para as linhas
    for (int i = 1; i <= linhas; i++) {
    // Loop para cada caractere de uma linha
        for (int j = 0; j < i; j++) {
            printf("%c", caractere);
        }
        printf("\n");
        
    }
    printf("\n");
}