/*
 * Programa: exercicio_002.c
 * Descrição: Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo. 
 * A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaração de variáveis
    int numeroSorteado = 0;
    int tentativa = 0;
    int chute = 0;
    int resultado = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));

    printf("Tente adivinhar o numero que foi sorteado\n");

    // Sorteia um número de 1 a 10
    numeroSorteado = (1) + rand() % (10 - 1 + 1);

    // Loop enquanto tiver dentro das 3 tentativas e não tiver acertado
    while(tentativa != 3 && resultado == 0) {
        tentativa++;
        printf("\nTentativa %i:", tentativa);
        scanf("%i", &chute);
        // Testa se acertou
        if(chute == numeroSorteado){
            resultado++;
        }
    }
    // Testa se acertou
    if(resultado == 0){
        printf("\nVocê errou! O número era %i.", numeroSorteado);
    } else {
        printf("\nVocê acertou! O número era %i.", numeroSorteado);
    }

}