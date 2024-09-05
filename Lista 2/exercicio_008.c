/*
 * Programa: exercicio_0081.c
 * Descrição: Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição de variáveis
    float temperaturaC = 00.0;
    float temperaturaF = 00.0;

    // Pede uma temperatura em Celsius
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &temperaturaC);

    // Converte a temperatura em Celsius para Fahrenheit 
    temperaturaF =  (temperaturaC * 9/5) + 32.0;

    // Exibe o resultado
    printf("\nA temperatura %.1f °C é igual %.1f °F\n", temperaturaC, temperaturaF);
}