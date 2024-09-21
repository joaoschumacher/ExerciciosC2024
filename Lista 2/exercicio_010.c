/*
 * Programa: exercicio_010.c
 * Descrição: O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer
 * que você calcule quanto cada cliente gastou na loja apenas informando o número de
 * camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os
 * cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o
 * total. Exiba na tela o valor do desconto e o valor da compra.
 * Autor: João Pedro Schumacher
 *
 */
#include <stdio.h>

// Definição de constantes
#define PORCENTAGEM_DESCONTO 10.0
#define VALOR_CAMISETA 25.0
#define VALOR_CALCA 100.0
#define VALOR_CINTO 40.0

int main()
{
    // Definição das variáveis
    float valorCompra = 0.0;
    float valorCompraDesconto = 0.0;
    int quantidadeCamisetas = 0;
    int quantidadeCalcas = 0;
    int quantidadeCintos = 0;

    // Pede a quantidade de camisetas, calças e cintos
    printf("Digite a quantidade de camisetas: ");
    scanf("%i", &quantidadeCamisetas);
    printf("Digite a quantidade de calcas: ");
    scanf("%i", &quantidadeCalcas);
    printf("Digite a quantidade de cintos: ");
    scanf("%i", &quantidadeCintos);

    // Calcula o valor total
    valorCompra = ((quantidadeCamisetas * VALOR_CAMISETA) + (quantidadeCalcas * VALOR_CALCA) + (quantidadeCintos * VALOR_CINTO));
    // Aplica o desconto
    valorCompraDesconto = valorCompra - (valorCompra * PORCENTAGEM_DESCONTO / 100);

    // Exibe os resultados
    printf("O usuario comprou:\n");
    printf("%i camisetas\n", quantidadeCamisetas);
    printf("%i calcas\n", quantidadeCalcas);
    printf("%i cintos\n", quantidadeCintos);
    printf("O total da compra com %.0f%% de desconto e: %.2f R$\n", PORCENTAGEM_DESCONTO, valorCompraDesconto);
}