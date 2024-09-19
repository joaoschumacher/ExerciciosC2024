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

int main()
{
    // Declaração de variáveis
    int opcaoMenu = 0;
    float valorInicial = 0.0;
    float valorConvertido = 0.0;
    float cotacaoConversao = 0.0;

    while(opcaoMenu != 7){
        printf("\n-----------Conversor de câmbio de reais/dólar/euro-----------\n");
        printf("1) Converter de Real para Euro\n");
        printf("2) Converter de Real para Dólar\n");
        printf("3) Converter de Euro para Dólar\n");
        printf("4) Converter de Euro para Real\n");
        printf("5) Converter de Dólar para Euro\n");
        printf("6) Converter de Dólar para Real\n");
        printf("7) Sair\n");
        printf("Opção escolhida: ");
        scanf("%i", &opcaoMenu);

        if(opcaoMenu != 7){
            printf("Qual valor deseja converter: ");
            scanf("%f", &valorInicial);
        }

        switch (opcaoMenu)
        {
        case 1:
            printf("Valor inicial em reais: %.2f\n", valorInicial);
            valorConvertido = valorInicial * 6.06;        
            printf("Valor convertido em euros: %.2f\n", valorConvertido);
            break;
        case 2:
            printf("Valor inicial em reais: %.2f\n", valorInicial);
            valorConvertido = valorInicial * 5.50;        
            printf("Valor convertido em dolares: %.2f\n", valorConvertido);
            break;
        case 3:
            printf("Valor inicial em euros: %.2f\n", valorInicial);
            valorConvertido = valorInicial * 1.11;        
            printf("Valor convertido em dolares: %.2f\n", valorConvertido);
            break;
        case 4:
            printf("Valor inicial em euros: %.2f\n", valorInicial);
            valorConvertido = valorInicial * 0.16;
            printf("Valor convertido em reais: %.2f\n", valorConvertido);
            break;
        case 5:
            printf("Valor inicial em dolares: %.2f\n", valorInicial);
            valorConvertido = valorInicial * 0.90;
            printf("Valor convertido em euros: %.2f\n", valorConvertido);
            break;
        case 6:
            printf("Valor inicial em dolares: %.2f\n", valorInicial);
            valorConvertido = valorInicial * 0.18;
            printf("Valor convertido em reais: %.2f\n", valorConvertido);
            break;
        case 7:
            break;
        default:
            printf("\n\nOpção inválida!\n\n");
            break;
        }
        printf("-------------------------------------------------------------");
    }
    return 0;
}