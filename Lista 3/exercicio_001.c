/*
 * Programa: exercicio_001.c
 * Descrição: Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
 * diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição das variáveis
    float primeiroValor = 0.0;
    float segundoValor = 0.0;
    float resultado = 0.0;


    // Pede dois valores ao usuário
    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiroValor);
    printf("Digite o segundo valor: ");
    scanf("%f", &segundoValor);

    // Testa se o segundo valor é zero
    if(segundoValor == 0) {
        printf("Nao e possivel digitar zero no segundo valor porque nao existe divisao por zero.\n");
        return 0;
    }

    // Calcula a divisão
    resultado = primeiroValor / segundoValor;

    // Exibe o resultado
    printf("O resultado da divisao e %f\n", resultado);
}