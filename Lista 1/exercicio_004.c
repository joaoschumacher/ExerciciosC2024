/*
 * Programa: exercicio_004.c
 * Descrição: Define por constantes 1 pergunta e 5 alternativas, escolhendo uma como correta. Dessa forma pode ser feita qualquer pergunta com 5 alternativas 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Definição da pergunta, alternativas e resposta correta como constantes
    const char *pergunta = "Qual é o verdadeiro1 nome do super-herói Batman?";
    const char *alternativaA = "Bruce Wayne";
    const char *alternativaB = "Clark Kent";
    const char *alternativaC = "Peter Parker";
    const char *alternativaD = "Tony Stark";
    const char *alternativaE = "Steve Rogers";
    const char respostaCorreta = 'a';

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
        printf("Você acertou!\n");
    } else {
        printf("Você errou!\n");
    }

    return 0;
}