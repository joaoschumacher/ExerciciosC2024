/*
 * Programa: exercicio_007.c
 * Descrição: Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que leia o número de pássaros que o criador possui e calcule a quantidade total de ração necessária por dia.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de constantes
    const int gramasRacaoDia = 30;
    // Declaração de variáveis
    int numeroPassos = 0;
    int quantidadeRacaoDia = 0;

    // Pede a quantidade de pássaros que o criador tem
    printf("Quantos passaros você possui? ");
    scanf("%d", &numeroPassos);

    // Calcula a quantidade de ração necessária por dia
    quantidadeRacaoDia = numeroPassos * gramasRacaoDia;

    // Exibe resultado
    printf("Você precisa de %d gramas de ração por dia.\n", quantidadeRacaoDia);
}