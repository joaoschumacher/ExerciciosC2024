/*
 * Programa: exercicio_014.c
 * Programa: exercicio_014.c
 * Descrição: Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
 * conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
 * conforme a seguinte tabela:
 * a) crianças com menos de 10 anos pagam R$100;
 * b) dependentes com idade entre 10 e 30 anos pagam R$220;
 * c) dependentes com idade entre 31 e 60 anos pagam R$ 395;3
 * d) dependentes com mais de 60 anos pagam R$ 480. 
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int idade;
    float valorPlano = 300.00;  
    float adicional = 0.00;     

    // Entrada: Pergunta a idade do dependente
    printf("Digite a idade do dependente: ");
    scanf("%i", &idade);

    // Condições para calcular o adicional com base na idade
    if (idade < 10) {
        adicional = 100.00;  
    } else if (idade <= 30) {
        adicional = 220.00;  
    } else if (idade <= 60) {
        adicional = 395.00;  
    } else {
        adicional = 480.00;  
    }

    // Calcula o valor final do plano de saúde
    float valorTotal = valorPlano + adicional;

    // Saída: Exibe o valor total a ser pago
    printf("O valor total a ser pago pelo plano de saude e: R$ %.2f\n", valorTotal);


    return 0;
}