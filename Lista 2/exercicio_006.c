/*
 * Programa: exercicio_006.c
 * Descrição: A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em um dia e calcule o total arrecadado.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de constantes
    int quantidadeTables = 0;
    int quantidadeSmartphones = 0;
    float totalVendido = 0.00;

    // Pede as quantidades de produtos vendidos
    printf("Digite quantos Tablets foram vendidos: ");
    scanf("%d", &quantidadeTables);
    printf("Digite quantos Smartphones foram vendidos: ");
    scanf("%d", &quantidadeSmartphones);

    // Calcula valor total
    totalVendido = quantidadeSmartphones * 1000 + quantidadeTables * 1500;

    // Exibe resultado
    printf("\nResultados no final do dia:\n");
    printf("Foram vendidos %.2f R$ em produtos.\n", totalVendido);
}