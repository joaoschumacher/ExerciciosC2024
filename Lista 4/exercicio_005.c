/*
 * Programa: exercicio_005.c
 * Descrição: Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
 * de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
 * e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
 * estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
 * média geral dos alunos.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Constantes
#define MEDIA_APROVACAO 6.0

int main()
{
    // Declaração de variáveis
    int numeroAlunos = 0;
    float grauA = 0.00;
    float grauB = 0.00;
    float grauC = 0.00;
    float mediaFinal = 0;
    char opcaoRecuperacao;

    // Aceita a quantidade de alunos
    printf("A nota de quantos alunos será calculada? ");
    scanf("%i", &numeroAlunos);

    // Loop de quantidade de alunos que serão cadastrados
    for (int i = 0; i < numeroAlunos; i++) {
        printf("--------------------------------\n");
        printf("Aluno %i:\n", i + 1);
        printf("--------------------------------\n");
        printf("Nota grau A: ");
        scanf("%f", &grauA);
        printf("Nota grau B: ");
        scanf("%f", &grauB);

        // Calcula média final
        mediaFinal = (grauA + 2*grauB) / 3;

        // Exibe resultado na tela
        printf("\n\nSua media final e %.2f\n", mediaFinal);    
        if(mediaFinal >= MEDIA_APROVACAO) {
            printf("Voce passou!\n\n");
        } else {
            printf("Voce ficou em recuperacao! Ira fazer o grau C, deseja substituir a nota do Grau A ou B?    [A]Grau A   [B]Grau B  ");
        // Limpa o buffer antes de ler a opção
            getchar();  // Remove o caractere de nova linha do buffer
            scanf("%c", &opcaoRecuperacao);

            printf("\n\nNota grau C: ");
            scanf("%f", &grauC);

            if (opcaoRecuperacao == 'A'){
                // Calcula média final substituindo Grau A
                mediaFinal = (grauC + 2*grauB) / 3;
            } else {
                // Calcula média final substituindo Grau B
                mediaFinal = (grauA + 2*grauC) / 3;
            }
        // Exibe resultado na tela
            printf("\n\nSua media final e %.2f\n", mediaFinal);    
            if(mediaFinal >= MEDIA_APROVACAO) {
                printf("Voce passou!\n\n");
            } else {
                printf("Voce reprovou!\n\n");
            }
        }
    }
    printf("--------------------------------\n");
}