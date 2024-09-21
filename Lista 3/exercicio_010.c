/*
 * Programa: exercicio_010.c
 * Descrição: Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
 * simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
 * começo do programa quantas faces quer, para depois fazer o sorteio.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaração de variáveis
    int opcaoMenu = 1;
    int numeroDado = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    do {
        // Exibe menu com as opções de dados
        printf("---Selecao de dados---\n");
        printf("1) Dado de 4 lados\n");
        printf("2) Dado de 6 lados\n");
        printf("3) Dado de 8 lados\n");
        printf("4) Dado de 10 lados\n");
        printf("5) Dado de 12 lados\n");
        printf("6) Dado de 16 lados\n");
        printf("0) Sair\n");

        if(opcaoMenu!=0){
        // Aceita uma opção
            printf("Sua escolha: ");
            scanf("%i", &opcaoMenu);
        }
        
        // Executa opção escolhida
        switch (opcaoMenu){
        // Gera número com dado de 4 lados
        case 1:
            numeroDado = 4;
            break;
        // Gera número com dado de 6 lados
        case 2:
            numeroDado = 6;
            break;
        // Gera número com dado de 8 lados
        case 3:
            numeroDado = 8;
            break;
        // Gera número com dado de 10 lados
        case 4:
            numeroDado = 10;
            break;
        // Gera número com dado de 12 lados
        case 5:
            numeroDado = 12;
            break;
        // Gera número com dado de 16 lados
        case 6:
            numeroDado = 16;
            break;
        // Sair do programa
        case 0:
            printf("Saindo...\n");
            break;
        // Opção inválida
        default:
            printf("Opcao invalida!\n\n");
            break;
        }
        // Se não for opção de sair nem inválida
        if (opcaoMenu >= 1 && opcaoMenu <= 6) {
            printf("Resultado do dado: %i\n\n", 1 + rand() % (numeroDado - 1 + 1));
        }
    } while(opcaoMenu!=0);

    return 0;
}