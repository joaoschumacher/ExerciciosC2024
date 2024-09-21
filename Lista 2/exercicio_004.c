/*
 * Programa: exercicio_004.c
 * Descrição: Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Constantes
#define MEDIA_APROVACAO 6.0

int main()
{
    // Declaração das variáveis
    float grauA = 0.00;
    float grauB = 0.00;
    float mediaFinal = 0.00;

    // Pede as notas do grau A e B ao usuário
    printf("Calculadora de media final na Unisinos\n\n");
    printf("Digite sua nota no grau A: ");
    scanf("%f", &grauA);
    printf("Digite sua nota no grau B: ");
    scanf("%f", &grauB);

    // Calcula média final
    mediaFinal = (grauA + 2*grauB) / 3;

    // Exibe resultado na tela
    printf("\n\nSua media final e %.2f\n", mediaFinal);    
    if(mediaFinal >= MEDIA_APROVACAO) {
        printf("Voce passou!\n");
    } else {
        printf("Voce reprovou!\n");
    }
}