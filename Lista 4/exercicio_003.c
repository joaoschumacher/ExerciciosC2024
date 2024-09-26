/*
 * Programa: exercicio_003.c
 * Descrição: Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número.
 * Exemplo de tela de saída:
 * Entre com um número: 5
 * 5 x 1 = 5
 * 5 x 2 = 10
 * ...
 * 5 x 10 = 50
 * Calcular outro número (s/n)? n
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int numero = 0;

    // Pede um número para ver a tabuada
    printf("Entre com um numero (1 a 9): ");
    scanf("%i", &numero);

    // Testa se o número aceito é válido
    if(numero < 1 || numero > 9){
        printf("\n\nNumero invalido!\n\n");
        return 0;
    }

    // Loop para escrever cada multiplicação
    for(int i = 0; i <= 10; i++){
        printf("\n%i X %i = %i", numero, i, numero*i);
    }
    printf("\n");
}