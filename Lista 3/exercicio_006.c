/*
 * Programa: exercicio_006.c
 * Descrição: Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
 * disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
 * um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
 * soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
 * que o programa venceu 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Definição de variáveis
    int numeroRandom = 0;
    int numeroEscolhido = 0;
    char parOuImpar;

    // Inicializa gerador de números aleatórios
    srand(time(0));
    
    // Pergunta para o usuário se ele quer par o ímpar
    printf("Você escolhe par ou ímpar? Par [P] / Ímpar [I] ");
    scanf("%c", &parOuImpar);

    // Testa se a opção é válida
    if(parOuImpar != 'P' && parOuImpar != 'I') {
        printf("Opção inválida!\n");
        return 0;
    }

    // Pede o valor de 1 a 5
    printf("Escolha um número de 1 a 5: ");
    scanf("%i", &numeroEscolhido);

    // Testa se a opção é válida
    if(numeroEscolhido > 5 || numeroEscolhido < 0) {
        printf("Opção inválida!\n");
        return 0;
    }

    // Gera número aleatório
    numeroRandom = rand() % 6;
    printf("%i\n", numeroRandom);

    // Testa soma para ver quem ganhou
    if ((numeroEscolhido + numeroRandom) % 2 == 0) {
        if (parOuImpar == 'P') {
            printf("Você ganhou!\n");
        } else {
            printf("O programa ganhou!\n");
        }
    } else {
        if (parOuImpar == 'I') {
            printf("Você ganhou!\n");
        } else {
            printf("O programa ganhou!\n");
        }
    }
    
}