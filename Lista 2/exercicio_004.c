/*
 * Programa: exercicio_004.c
 * Descrição: Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Constantes
    const float mediaAprovacao = 6;
    // Declaração das variáveis
    float grauA = 0.00;
    float grauB = 0.00;
    float mediaFinal = 0.00;

    // Pede as notas do grau A e B ao usuário
    printf("Calculadora de média final na Unisinos\n\n");
    printf("Digite sua nota no grau A: ");
    scanf("%f", &grauA);
    printf("Digite sua nota no grau B: ");
    scanf("%f", &grauB);

    // Calcula média final
    mediaFinal = (grauA + 2*grauB) / 3;

    // Exibe resultado na tela
    printf("\n\nSua nota é %.2f\n", mediaFinal);    
    if(mediaFinal >= mediaAprovacao) {
        printf("Você passou!\n");
    } else {
        printf("Você reprovou!\n");
    }
}