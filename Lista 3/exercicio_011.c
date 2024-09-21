/*
 * Programa: exercicio_011.c
 * Descrição: Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de
 * cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50,
 * R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao
 * solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram
 * exibidas informações sobre as demais cédulas):
 * 1 nota(s) de R$ 10.
 * 1 nota(s) de R$ 5.
 * 3 nota(s) de R$ 1.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int valor = 0.0;
    int valorAuxiliar = 0.0;
    int quantidadeNota = 0;
    int valorNota = 0;

    // Pede um valor para o usuário
    printf("Digite um valor?");
    scanf("%i", &valor);
    valorAuxiliar = valor;

    printf("---Resultado---\n");
    // Calcula quantas notas de cada tipo são necessárias
    for (int i = 0; i < 6; i++) {
    // Define qual nota será testada
        switch (i) {
        case 0:
            valorNota = 100;
            break;
        case 1:
            valorNota = 50;
            break;
        case 2:
            valorNota = 20;
            break;
        case 3:
            valorNota = 10;
            break;
        case 4:
            valorNota = 5;
            break;
        case 5:
            valorNota = 1;
            break;
        }

    // Se a nota for menor que o valor restante 
        if (valorAuxiliar >= valorNota) {
    // Quantidade de notas 
            quantidadeNota = valorAuxiliar / valorNota;
    // Calcula valor restante 
            valorAuxiliar = valorAuxiliar % valorNota;
    // Exibe a quantidade necessárias de uma nota
            printf("%i - Notas de R$ %i\n", quantidadeNota, valorNota);
        }
    }


    return 0;
}