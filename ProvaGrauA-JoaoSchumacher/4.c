/*
 * Programa: 4.c
 * Descrição: Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em
 * uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8
 * medições (um dia completo) e determine:
 *  a) A média de poluição diária.
 *  b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de
 *  alerta sobre qualidade do ar.
 *  c) Ao final, exiba o número total de medições que geraram um alerta.
 * 
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    int medicao = 0;
    float mediaPoluicao = 0;
    int alertas = 0;


    for (int i = 3; i <= 24; i+= 3)
    {
        printf("(%ih) Sensor [ppm]: ", i);
        scanf("%i", &medicao);
        if (medicao > 150) {
            printf("Alerta! Medicao de qualidade do ar excedeu 150ppm [Medido %i ppm]!\n", medicao);
            alertas++;
        } 
        mediaPoluicao += medicao;
    }

    mediaPoluicao = mediaPoluicao / 8;
    printf("\nPoluicao media diaria: %.2f\n", mediaPoluicao);
    printf("No total %i medicoes geraram alerta.", alertas);

    
}