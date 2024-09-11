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

int main()
{
    // Definição de constantes
    const float porcentagemDesconto = 10.0;
    const float valorCamiseta = 25.0;
    const float valorCalca = 100.0;
    const float valorCinto = 40.0;

    // Definição das variáveis
    float valorCompra = 0.0;
    float valorCompraDesconto = 0.0;
    int quantidadeCamisetas = 0;
    int quantidadeCalcas = 0;
    int quantidadeCintos = 0;

    // Pede a quantidade de camisetas, calças e cintos
    printf("Digite a quantidade de camisetas: ");
    scanf("%i", &quantidadeCamisetas);
    printf("Digite a quantidade de calças: ");
    scanf("%i", &quantidadeCalcas);
    printf("Digite a quantidade de cintos: ");
    scanf("%i", &quantidadeCintos);

    // Calcula o valor total
    valorCompra = ((quantidadeCamisetas * valorCamiseta) + (quantidadeCalcas * valorCalca) + (quantidadeCintos * valorCinto));
    // Aplica o desconto
    valorCompraDesconto = valorCompra - (valorCompra * porcentagemDesconto / 100);

    // Exibe os resultados
    printf("O usuário comprou:\n");
    printf("%i camisetas\n", quantidadeCamisetas);
    printf("%i calças\n", quantidadeCalcas);
    printf("%i cintos\n", quantidadeCintos);
    printf("O total da compra com %.0f%% de desconto é: %.2f R$\n", porcentagemDesconto, valorCompraDesconto);
}