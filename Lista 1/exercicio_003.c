#include <stdio.h>

int main()
{
    // Declaração de variáveis
    char opcao;

    // Faz a pergunta e mostra as alternativas
    printf("Qual é o verdadeiro nome do super-herói Batman? \n");
    printf("a) Bruce Wayne\n");
    printf("b) Clark Kent\n");
    printf("c) Peter Parker\n");
    printf("d) Tony Stark\n");
    printf("e) Steve Rogers\n");
    printf("Sua opcao: ");
    scanf("%c", &opcao);

    // Testa se digitou a opção correta
    if(opcao == 'a') {
        printf("Você acertou!\n");
    } else {
        printf("Você errou!\n");
    }
}