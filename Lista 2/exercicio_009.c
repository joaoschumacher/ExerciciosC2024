/*
 * Programa: exercicio_009.c
 * Descrição: Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras
 * feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da compra 
 * com o desconto
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Definição de constantes
#define PORCENTAGEM_DESCONTO 15.0

int main()
{
    // Definição das variáveis
    float valorCompra = 0.0;
    float valorCompraDesconto = 0.0;

    // Pede o valor da compra
    printf("Digite o valor da sua compra: ");
    scanf("%f", &valorCompra);

    // Calcula o valor com desconto
    valorCompraDesconto = valorCompra - (valorCompra * PORCENTAGEM_DESCONTO/100);

    // Exibe o valor da compra com desconto
    printf("A sua compra de %.2f R$, aplicando %.0f%% fica: %.2f R$\n", valorCompra, PORCENTAGEM_DESCONTO, valorCompraDesconto);

}