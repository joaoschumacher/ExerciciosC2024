/*
 * Programa: exercicio_004.c
 * Descrição: Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
 * resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
 * especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
 * após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo.
 *  Exemplo de tela de saída:
 * Entre com o valor do divisor: 3
 * Início do intervalo: 17
 * Final do intervalo: 29
 * Números divisíveis por 3 no intervalo de 17 a 29:
 * 18 21 24 27
 *
 * Autor: João Pedro Schumacher
 *
 */

#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int divisor = 0;
    int intervaloInicio = 0;
    int intervaloFinal = 0;

    // Aceita o divisor
    printf("Entre com o valor do divisor: ");
    scanf("%i", &divisor);
    // Aceita o início do intervalo
    printf("Inicio do intervalo: ");
    scanf("%i", &intervaloInicio);
    // Aceita o final do intervalo
    printf("Final do intervalo: ");
    scanf("%i", &intervaloFinal);

    
    printf("Numeros divisiveis por %i no intervalo de %i a %i:\n", divisor, intervaloInicio, intervaloFinal);
    // Monta um loop com o intervalo especificado
    for(int i = intervaloInicio; i <= intervaloFinal; i++){
        // Testa se o número é divisível
        if (i % divisor == 0){
            printf("%i ", i);
        }
    }
    printf("\n");

}