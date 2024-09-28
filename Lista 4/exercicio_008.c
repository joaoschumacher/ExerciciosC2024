/*
 * Programa: exercicio_008.c
 * Descrição: Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
 * execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
 * definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1.
 * Por exemplo, o fatorial de 4 é 4x3x2x1=24.
 * Exemplo de tela de saída:
 * Entre com um número: 5
 * O fatorial de 5 é 120
 * Calcular outro número (s/n)? n
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição de variáveis
    char resposta = 's';

    // Loop de repetição do programa
    while (resposta == 's')
    {
    // Definição de variáveis
        int numero = 0;
        int resultado = 1;
        
    // Aceita o número que terá o fatorial calculado
        printf("\nEntre com um numero: ");
        scanf("%i", &numero);

        printf("O fatorial de %i e ", numero);
    // Loop para calcular o fatorial
        for (int i = numero; i > 0; i--)
        {
            resultado = i * resultado;
            printf("%i", i);
            if (i == 1) {
                printf("=");
            } else {
                printf("x");
            }
        }
        printf("%i\n\n", resultado);

    // Aceita se o usuário irá calcular outro número
        getchar();
        printf("Calcular outro numero (s/ )? ");
        scanf("%c", &resposta);
    }
}