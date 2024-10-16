/*
 * Programa: 3.c
 * Descrição: Em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em
 * centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5
 * dias e exiba:
 * a) O deslocamento total ao longo do período.
 * b) O maior deslocamento registrado.
 * c) A média de deslocamento diário.
 * 
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    float deslocamentoDia = 0.0;
    float deslocamentoTotal = 0.0;
    float maiorDeslocamento = 0.0;
    float mediaDeslocamento = 0.0;

    for (int i = 1; i <= 5; i++) {
        printf("Dia %i) Sensor mediu: ", i);
        scanf("%f", &deslocamentoDia);
        if (maiorDeslocamento < deslocamentoDia) {
            maiorDeslocamento = deslocamentoDia;
        }
        deslocamentoTotal += deslocamentoDia;
    }
    mediaDeslocamento = deslocamentoTotal / 5;

    printf("\n\na) Deslocamento total: %.2f cm\n", deslocamentoTotal);
    printf("b) Maior deslocamento registrado: %.2f cm\n", maiorDeslocamento);
    printf("c) Media de deslocamento diario: %.2f cm/dia", mediaDeslocamento);
    

}