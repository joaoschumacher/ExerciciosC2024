/*
 * Programa: exercicio_007.c
 * Descrição: Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
 * deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
 * segue a regra: o desconto deve ser 11% do valor do salário. Entretanto, o valor máximo de desconto é
 * 318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de constantes
    const float descontoMaximo = 318.20;
    const float taxaDesconto = 11.0;
    
    // Declaração de variáveis
    float salario = 0.0;
    float valorDesconto = 0.0;

    // Pede um salário
    printf("Digite o salário: ");
    scanf("%f", &salario);

    // Calcula o desconto
    valorDesconto = salario * taxaDesconto / 100;
     
    // Se o valor de desconto for maior que o máximo
    if(valorDesconto > descontoMaximo) {
    // Atribui valor máximo ao desconto
        valorDesconto = descontoMaximo;        
    }

    // Exibe resultado
    printf("\nPara o salário de R$ %.2f o valor descontado será de R$ %.2f\n\n", salario, valorDesconto);
}