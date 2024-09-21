/*
 * Programa: exercicio_015.c
 * Descrição: Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
 * normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
 * para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
 * 1 - À vista em dinheiro, recebe 15% de desconto
 * 2 - À vista no cartão de crédito, recebe 10% de desconto
 * 3 - Em duas vezes, preço normal de etiqueta sem juros
 * 4 - Em três vezes, preço normal de etiqueta mais juros de 10%
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição de variáveis
    float precoEtiqueta = 0.0;
    float valorFinal = 0.0;
    int formaPagamento = 0;

    // Pede o preço do produto pela etiqueta
    printf("Digite o valor do produto na etiqueta: ");
    scanf("%f", &precoEtiqueta);

    // Exibe as opções de pagamento
    printf("Escolha a forma de pagamento\n");
    printf("1 - A vista em dinheiro, recebe 15%% de desconto\n");
    printf("2 - A vista no cartao de credito, recebe 10%% de desconto\n");
    printf("3 - Em duas vezes, preço normal de etiqueta sem juros\n");
    printf("4 - Em três vezes, preço normal de etiqueta mais juros de 10%%\n");

    // Aceita a opção de pagamento
    printf("Sua escolha: ");
    scanf("%i", &formaPagamento);

    // Calcula valor final conforme forma de pagamento
    switch (formaPagamento)
    {
    // À vista em dinheiro (15% de desconto)
    case 1:
        valorFinal = precoEtiqueta - (precoEtiqueta * 0.15);
        printf("A vista o valor final fica R$ %.2f.\n", valorFinal);
        break;
    // À vista no cartão de crédito (10% de desconto)
    case 2:
        valorFinal = precoEtiqueta - (precoEtiqueta * 0.10);
        printf("A vista no cartao de credito o valor final fica R$ %.2f.\n", valorFinal);
        break;
    // Em duas vezes (sem juros)
    case 3:
        valorFinal = precoEtiqueta;
        printf("Em duas vezes o valor final fica R$ %.2f.\n", valorFinal);
        break;
    // Em três vezes (10% de juros)
    case 4:
        valorFinal = precoEtiqueta + (precoEtiqueta * 0.10);
        printf("Em tres vezes o valor final fica R$ %.2f.\n", valorFinal);
        break;
    // Opção inválida
    default:
        printf("Opcao invalida!\n");
        break;
    }
   
    return 0;
}