/*
 * Programa: 4.c
 * Descrição:  Programa “Cebolinha”: ler uma string (array de char) e converter todos os r's em l's.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

#define TAMANHO_STRING 100

// Transforma todos os r's e R's em l's e L's
void cebolinha(char string[], int tamanho){
    for (int i = 0; i < tamanho; i++) {
        // Se encontrou algum r
        if (string[i] == 'r') {
            string[i] = 'l';
        }
        // Se encontrou algum R
        if (string[i] == 'R') {
            string[i] = 'L';
        }
    }
}


int main()
{
    // Declaração de variáveis
    char myString[TAMANHO_STRING];

    // Aceita uma frase do usuário
    printf("Digite uma palavra ou frase: ");
    fgets(myString, sizeof(myString), stdin);
    printf("String digitada: %s\n", myString);
    // Transforma todos os r's e R's em l's e L's
    cebolinha(myString, TAMANHO_STRING);
    // Exibe nova string
    printf("Frase alterada: %s\n", myString);


}