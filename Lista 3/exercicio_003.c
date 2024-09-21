/*
 * Programa: exercicio_003.c
 * Descrição: Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
 * o resultado.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição de variáveis
    float numero = 0.0;
    float resultado = 0.0;

    // Pede o número para o usuário
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Testa se é positivo ou negativo
    if(numero >= 0) {
        resultado = numero * 2;
    } else {
        resultado = numero * 3;
    }

    // Exibe o resultado
    printf("O resultado e: %f\n", resultado);
}