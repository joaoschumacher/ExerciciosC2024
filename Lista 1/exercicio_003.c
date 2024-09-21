/*
 * Programa: exercicio_003.c
 * Descrição: Pergunta qual o nome verdadeiro do Batman e apresenta 5 alternativas
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    char opcao;

    // Faz a pergunta e mostra as alternativas
    printf("Qual e o verdadeiro nome do super-heroi Batman? \n");
    printf("a) Bruce Wayne\n");
    printf("b) Clark Kent\n");
    printf("c) Peter Parker\n");
    printf("d) Tony Stark\n");
    printf("e) Steve Rogers\n");
    printf("Sua opcao: ");
    scanf("%c", &opcao);

    // Testa se digitou a opção correta
    if(opcao == 'a') {
        printf("Voce acertou!\n");
    } else {
        printf("Voce errou!\n");
    }
}