/*
 * Programa: exercicio_004.c
 * Descrição: Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um programa que:
 *    a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
 *    b. Calcule o total de passos dados na semana.
 *    c. Calcule a média diária de passos.
 *    d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
 *       informe quais dias a meta foi alcançada.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

const int diasSemana = 7;

int main()
{
    // Definição de variávies
    int passosPorDia[diasSemana] = {};
    int somaTotal = 0;
    float media = 0.0;

    // Aceita o número de passos para cada dia
    for (int i = 0; i < diasSemana; i++) {
        printf("Numero de passos no dia %i: ", i + 1);
        scanf("%i", &passosPorDia[i]);
    }

    // Loop para varrer o array
    for (int i = 0; i < diasSemana; i++) {
        // Soma todos os passos
        somaTotal += passosPorDia[i];
        // Faz a média diária
        media = somaTotal / diasSemana;
        // Se atingir a meta diária
        if (passosPorDia[i] >= 10000) {
            printf("Meta de 10.000 passos atingida no dia %i com %i passos.\n", i + 1, passosPorDia[i]);
        }
    }
    // Mostra resultados
    printf("O numero total de passos foi %i passos.\n", somaTotal);
    printf("A media de passos diarios foi %.2f passos/dia.\n", media);
}