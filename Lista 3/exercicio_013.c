/*
 * Programa: exercicio_013.c
 * Descrição: Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
 * as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
 * em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
 * A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
 * grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.
 * 
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
    float grauC = 0.00;
    float mediaFinal = 0.00;
    char opcaoRecuperacao;

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
        printf("Voce ficou em recuperacao! Ira fazer o grau C, deseja substituir a nota do Grau A ou B?    [a]Grau A   [b]Grau B  ");
    // Limpa o buffer antes de ler a opção
        getchar();  // Remove o caractere de nova linha do buffer
        scanf("%c", &opcaoRecuperacao);

        printf("\n\nDigite sua nota no grau C: ");
        scanf("%f", &grauC);

        if (opcaoRecuperacao == 'a'){
            // Calcula média final substituindo Grau A
            mediaFinal = (grauC + 2*grauB) / 3;
        } else {
            // Calcula média final substituindo Grau B
            mediaFinal = (grauA + 2*grauC) / 3;
        }
    // Exibe resultado na tela
        printf("\n\nSua media final e %.2f\n", mediaFinal);    
        if(mediaFinal >= MEDIA_APROVACAO) {
            printf("Voce passou!\n");
        } else {
            printf("Voce reprovou!\n");
        }
    }


    return 0;
}