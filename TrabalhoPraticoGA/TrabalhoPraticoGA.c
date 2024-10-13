/*
 * Programa: TrabalhoPraticoGA.c
 * Descrição: Simulação de Crescimento Bacteriano
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Declaração de variáveis
    int opcaoInicio = 1;
    int populacaoNova = 0;
    int populacaoAtual = 0;
    float taxaCrescimento = 0;
    float taxaVariacao = 0;
    int numeroCiclos = 0;
    int probabilidadeCondicao = 0;

    // Inicializa gerador de números aleatórios
    srand(time(0));


    while(opcaoInicio == 1) {
        // Exibe menu
        printf("\n\nMenu Inicial:\n");
        printf("1 - Nova Simulacao\n");
        printf("2 - Sair do Programa\n");
        printf("-> ");
        scanf("%i", &opcaoInicio);

        // Limpa a tela
        #ifdef _WIN32
        system("cls"); // Windows
        #else
        system("clear"); // Linux/macOS
        #endif

        if(opcaoInicio != 1) {
            break;
        }
        // Pede os dados de entrada
        printf("Entrada de Dados:\n");
        printf("Populacao inicial de bacterias (inteiro positivo):\n");
        scanf("%i", &populacaoAtual);
        printf("Taxa de crescimento (percentual inteiro que indica o aumento da populacao em cada ciclo):\n");
        scanf("%f", &taxaCrescimento);
        printf("Numero de ciclos (inteiro que representa quantos ciclos de crescimento serao simulados):\n");
        scanf("%i", &numeroCiclos);

        // Loop para cada ciclo
        for (int ciclo = 1; ciclo <= numeroCiclos; ciclo++){
            // Sorteia um número de 1 a 100 para definir a probabilidade de ter uma condição ambiental
            probabilidadeCondicao = rand() % 100;
            // Aplica a porcentagem de acordo com o que foi sorteado
            if(probabilidadeCondicao >= 0 && probabilidadeCondicao < 20) { // 0 a 19
                taxaVariacao = -30;
            } else if ( probabilidadeCondicao < 35) { // 20 a 34
                taxaVariacao = -25;
            } else if ( probabilidadeCondicao < 45) { // 35 a 44
                taxaVariacao = -20;
            } else if (probabilidadeCondicao < 50) { // 45 a 49
                taxaVariacao = -50;
            } else if (probabilidadeCondicao < 60) { // 50 a 59
                taxaVariacao = 20;
            } else {
                taxaVariacao = taxaCrescimento; 
            }
            // Calcula o tamanho da população nova
            populacaoNova = populacaoAtual + (populacaoAtual * (taxaVariacao / 100));
            populacaoAtual = populacaoNova;
            if(populacaoAtual <= 0) {
                populacaoAtual = 0;
            }

            // Exibe o resultado de cada ciclo
            printf("\nCiclo %i: Populacao = %i", ciclo, populacaoAtual);
            if(probabilidadeCondicao >= 0 && probabilidadeCondicao < 20) { // 0 a 19
                printf(" ( Alta Temperatura , impacto de -30%% na populacao )");
            } else if ( probabilidadeCondicao < 35) { // 20 a 34
                printf(" ( Falta de Nutrientes, impacto de -25%% na populacao )");
            } else if ( probabilidadeCondicao < 45) { // 35 a 44
                printf(" ( Excesso de Umidade , impacto de -20%% na populacao )");
            } else if (probabilidadeCondicao < 50) { // 45 a 49
                printf(" ( Radiacao Ultravioleta, impacto de -50%% na populacao )");
            } else if (probabilidadeCondicao < 60) { // 50 a 59
                printf(" ( Condicao Favoravel, impacto de 20%% na populacao )");
            }
            if(populacaoAtual == 0) {
                break;
            }
        }

        // Exibe mensagem quando encerra a simulação
        if (populacaoAtual != 0) {
            printf("\nSimulacao concluida. Populacao final: %i", populacaoAtual);
        } else {
            printf("\nSimulacao encerrada antes do tempo. Populacao morreu.");
        }
    }
}