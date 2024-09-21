/*
 * Programa: exercicio_009.c
 * Descrição: Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
 * de cada moeda em relação ao real. Depois apresente o seguinte menu:
 * 1) Converter de Real para Euro
 * 2) Converter de Real para Dólar
 * 3) Converter de Euro para Dólar
 * 4) Converter de Euro para Real
 * 5) Converter de Dólar para Euro
 * 6) Converter de Dólar para Real
 * Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda destino.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Declaração de constantes
#define COTACAO_DOLAR_REAL 5.5
#define COTACAO_EURO_REAL 6.1
#define COTACAO_DOLAR_EURO 0.90

int main()
{
    // Declaração de variáveis
    int opcaoMenu = 0;
    float valorInicial = 0.0;
    float valorConvertido = 0.0;
    float cotacaoConversao = 0.0;
    
    // Loop de aceitação até selecionar opção para sair
    do {
    // Exibe o menu
        printf("\n-----------Conversor de cambio de reais/dolar/euro-----------\n");
        printf("1) Converter de Real para Euro\n");
        printf("2) Converter de Real para Dolar\n");
        printf("3) Converter de Euro para Dolar\n");
        printf("4) Converter de Euro para Real\n");
        printf("5) Converter de Dolar para Euro\n");
        printf("6) Converter de Dolar para Real\n");
        printf("7) Sair\n");
    // Aceita opção escolhida
        printf("Opcao escolhida: ");
        scanf("%i", &opcaoMenu);

    // Se não for a opção de sair
        if(opcaoMenu != 7) {
    // Aceita o valor para conversão
            printf("Qual valor deseja converter: ");
            scanf("%f", &valorInicial);
        }

    // Verifica opção escolhida
        switch (opcaoMenu){
    // Converte Real para Euro
        case 1:
            printf("Valor inicial em reais: %.2f\n", valorInicial);
            valorConvertido = valorInicial / COTACAO_EURO_REAL;        
            printf("Valor convertido em euros: %.2f\n", valorConvertido);
            break;
    // Converte Real para Dolar
        case 2:
            printf("Valor inicial em reais: %.2f\n", valorInicial);
            valorConvertido = valorInicial / COTACAO_DOLAR_REAL;        
            printf("Valor convertido em dolares: %.2f\n", valorConvertido);
            break;
    // Converte Euro para Dolar
        case 3:
            printf("Valor inicial em euros: %.2f\n", valorInicial);
            valorConvertido = valorInicial / COTACAO_DOLAR_EURO;        
            printf("Valor convertido em dolares: %.2f\n", valorConvertido);
            break;
    // Converte Euro para Real
        case 4:
            printf("Valor inicial em euros: %.2f\n", valorInicial);
            valorConvertido = valorInicial * COTACAO_EURO_REAL;
            printf("Valor convertido em reais: %.2f\n", valorConvertido);
            break;
    // Converte Dolar para Euro
        case 5:
            printf("Valor inicial em dolares: %.2f\n", valorInicial);
            valorConvertido = valorInicial * COTACAO_DOLAR_EURO;
            printf("Valor convertido em euros: %.2f\n", valorConvertido);
            break;
    // Converte Dolar para Real
        case 6:
            printf("Valor inicial em dolares: %.2f\n", valorInicial);
            valorConvertido = valorInicial * COTACAO_DOLAR_REAL;
            printf("Valor convertido em reais: %.2f\n", valorConvertido);
            break;
    // Sair do programa
        case 7:
            break;
        default:
            printf("\n\nOpção invalida!\n\n");
            break;
        }
        printf("-------------------------------------------------------------\n");
    } while(opcaoMenu != 7);


    return 0;
}