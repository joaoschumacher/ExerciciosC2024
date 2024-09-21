/*
 * Programa: exercicio_008.c
 * Descrição: Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
 * da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
 * for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
 * tela o valor de venda.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição das variávies
    float valorProduto = 0.0;
    float valorVenda = 0.0;

    // Aceita o valor do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    // Calcula o valor de venda
    if(valorProduto > 20){   // Se o valor for maior que 20
        if(valorProduto <= 50){ // Se o valor for menor ou igual a 50
    // Calcula o valor de venda com 35% de lucro
            valorVenda = (valorProduto * 0.35) + valorProduto;
        } else {    // Se o valor for maior que 50
    // Calcula o valor de venda com 25% de lucro
            valorVenda = (valorProduto * 0.25) + valorProduto;
        }
    } else {    // Se o valor for menor que 20
    // Calcula o valor de venda com 45% de lucro
        valorVenda = (valorProduto * 0.45) + valorProduto;
    }

    // Exibe resultado
    printf("O valor de venda sera: R$ %.2f\n\n", valorVenda);
}