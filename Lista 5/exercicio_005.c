/*
 * Programa: exercicio_005.c
 * Descrição: Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
 * dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
 * dia. Escreva um programa que:
 *  a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
 *  b. Calcule o consumo total do mês.
 *  c. Calcule a média de consumo diário.
 *  d. Imprima o dia em que houve o maior consumo e o menor consumo de água.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int diasMes = 30;

int main()
{
    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Definição das variáveis
    int litrosDiaMes[diasMes] = {};
    int somaLitros = 0;
    float mediaLitros = 0.0;
    int maiorConsumoDia = 0;
    int maiorConsumo = 0;
    int menorConsumoDia = 0;
    int menorConsumo = 99999;

    // Loop para passar pelos dias do mês
    for (int i = 0; i < diasMes; i++) {
        // Aceita (por sorteio) o consumo do dia
        litrosDiaMes[i] = 100 + rand() % (500 - 100 + 1);
        // Faz os cálculos
        somaLitros += litrosDiaMes[i];
        mediaLitros = somaLitros / diasMes;
        // Verifica se é o maior consumo
        if (litrosDiaMes[i] > maiorConsumo) {
            maiorConsumo = litrosDiaMes[i];
            maiorConsumoDia = i;
        }
        // Verifica se é o menor consumo
        if (litrosDiaMes[i] < menorConsumo) {
            menorConsumo = litrosDiaMes[i];
            menorConsumoDia = i;
        }
    }

    // Exibe os resultados
    printf("\nConsumo total: %i Litros\n", somaLitros);
    printf("Media consumo diario: %.2f Litros/Dia\n", mediaLitros);
    printf("O dia %i foi o dia com maior consumo: %i Litros\n", maiorConsumoDia + 1, maiorConsumo);
    printf("O dia %i foi o dia com menor consumo: %i Litros\n", menorConsumoDia + 1, menorConsumo);
}