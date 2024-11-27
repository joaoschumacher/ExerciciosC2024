/*
 * Programa: 3.c
 * Descrição: Correção de provas objetivas: faça um programa que permita cadastrar um vetor com
 * o gabarito de uma prova objetiva contendo 10 questões, cujos resultados podem ser de ‘a’ a ‘f’.
 * Depois disso, permita ao usuário a opção de entrar com as respostas dadas por um estudante.
 * Exemplo de gabarito:
 * a f c d d a e e b a
 * O programa deve:
 * a) Contabilizar o número de respostas certas e dar a pontuação final, de 0 a 10.
 * b) Durante o processo de correção, imprimir na tela quais questões foram acertadas e quais o
 * estudante errou. Neste caso, deve-se imprimir a resposta correta.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

#define NUM_QUESTOES 10

int main()
{

    // Declaração de variáveis
    char gabarito[NUM_QUESTOES];
    char respostas[NUM_QUESTOES];
    int pontuacao = 0;


    // Inicializa vetores
    for (int i = 0; i < NUM_QUESTOES; i++) {
        gabarito[i] = ' ';
        respostas[i] = ' ';
    }
    

    // Aceita o gabarito
    printf("Cadastre o gabarito (A ate F):\n");
    for (int i = 0; i < NUM_QUESTOES; i++) {
        printf("Questao %i = ", i+1);
        gabarito[i] = getchar();
        getchar();
    }
    
    // Aceita as respostas do estudante
    printf("Cadastre as respostas do aluno (A ate F):\n");
    for (int i = 0; i < NUM_QUESTOES; i++) {
        printf("Questao %i = ", i+1);
        respostas[i] = getchar();
        getchar();
    }
    
    // Exibe os resultados
    printf("Resultado: \n");
    for (int i = 0; i < NUM_QUESTOES; i++) {
        printf("Questao %i: ", i+1);
        // Se a resposta do aluno for igual a do gabarito
        if (gabarito[i] == respostas[i]) {
            printf("Resposta correta!\n");
            pontuacao++;
        } else {
            printf("Resposta incorreta! A resposta correta era %c\n", gabarito[i]);
        }
    }
    printf("A pontuacao do aluno e %i/%i.", pontuacao, NUM_QUESTOES);

}