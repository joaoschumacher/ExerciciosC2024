/*
 * Programa: exercicio_004.c
 * Descrição: Define por constantes 1 pergunta e 5 alternativas, escolhendo uma como correta. Dessa forma pode ser feita qualquer pergunta com 5 alternativas 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Definição da pergunta, alternativas e resposta correta como constantes
const char pergunta[] = "Qual e o verdadeiro nome do super-heroi Batman?";
const char alternativaA[] = "Bruce Wayne";
const char alternativaB[] = "Clark Kent";
const char alternativaC[] = "Peter Parker";
const char alternativaD[] = "Tony Stark";
const char alternativaE[] = "Steve Rogers";
const char respostaCorreta = 'a';

int main()
{
    char opcao;

    // Mostra a pergunta e as alternativas
    printf("%s\n", pergunta);
    printf("a) %s\n", alternativaA);
    printf("b) %s\n", alternativaB);
    printf("c) %s\n", alternativaC);
    printf("d) %s\n", alternativaD);
    printf("e) %s\n", alternativaE);

    // Recebe a resposta do usuário
    printf("Sua opcao: ");
    scanf("%c", &opcao);  

    // Verifica se a resposta está correta
    if(opcao == respostaCorreta) {
        printf("Voce acertou!\n");
    } else {
        printf("Voce errou!\n");
    }

    return 0;
}