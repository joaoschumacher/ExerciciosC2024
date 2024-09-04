/*
 * Programa: exercicio_002.c
 * Descrição: Escreva um programa que leia a cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o valor total em reais que ele precisará pagar
 * Autor: João Pedro Schumacher
 * 
 */
#include <stdio.h>

int main()
{
    // Declaração de variáveis
    float cotacaoDolar = 0.00;
    float valorDolar = 0.00;
    float valorReais = 0.00;
    
    // Aceita o valor da cotação do dolar
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);
    
    // Aceita o valor em dolares desejado pelo usuário
    printf("Digite o valor em dolares desejado: ");
    scanf("%f", &valorDolar);
    
    // Calcula o valor em reais
    valorReais = valorDolar * cotacaoDolar;
    // Exibe o resultado
    printf("O valor necessario para comprar $ %.2f é R$ %.2f\n", valorDolar, valorReais);
    
    return 0;
}
