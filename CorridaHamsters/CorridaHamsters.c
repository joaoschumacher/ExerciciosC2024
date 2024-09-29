/*
 * Programa: CorridaHamsters.c
 * Descrição: Dois hamsters, cada um em sua bola, estão participando de uma corrida em um tabuleiro de 12 posições,
 * numeradas de 0 a 12. Ambos os hamsters começam a corrida na posição 0. A cada turno, um número
 * inteiro é sorteado para determinar o movimento de cada hamster, de acordo com as seguintes regras:
 * regras:
 *                                 +-----------------+--------------------------+
 *                                 | Número Sorteado | Movimento                |
 *                                 +-----------------+--------------------------+
 *                                 |        1        | Avança 1 posição (+1)    |
 *                                 |        2        | Avança 2 posições (+2)   |
 *                                 |        3        | Não se move (0)          |
 *                                 |        4        | Retrocede 1 posição (-1) |
 *                                 |        5        | Retrocede 2 posições (-2)|
 *                                 +-----------------+--------------------------+
 * Regras da corrida
 * 1. A cada turno, um número inteiro entre 1 e 5 é sorteado separadamente para cada hamster.
 * 2. Com base no número sorteado, o hamster avança ou retrocede de acordo com a tabela.
 * 3. Se um hamster tenta retroceder além da posição 0, ele permanece na posição 0.
 * 4. A corrida termina quando um dos hamsters atinge ou ultrapassa a posição 12, sendo declarado o vencedor.
 * 5. Caso ambos os hamsters alcancem a posição 12 no mesmo turno, há um empate.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para imprimir o tabuleiro com as posições dos hamsters atualizadas
void imprimirTabuleiro(int pos1, int pos2) {
    printf("Tabuleiro:  ");
    for (int i = 0; i <= 12; i++) {
        printf("%2d  ", i);
    }
    printf("\n");

    // Hamster 1
    printf("Hamster 1:  ");
    for (int i = 0; i <= 12; i++) {
        if (i == pos1) {
            printf("~c: ");
        } else {
            printf(" -  ");
        }
    }
    printf("\n");

    // Hamster 2
    printf("Hamster 2:  ");
    for (int i = 0; i <= 12; i++) {
        if (i == pos2) {
            printf("~c: ");
        } else {
            printf(" -  ");
        }
    }
    printf("\n");
}


int main()
{
    printf("**************************************************************\n");
    printf("*              CORRIDA DE HAMSTERS NO TABULEIRO              *\n");
    printf("**************************************************************\n");
    printf("+--Turno 0 ---------------------------------------------------+\n");
    imprimirTabuleiro(0, 0);
    printf("\n");

    // Declaração de variáveis
    int numeroSorteado1 = 0;
    int numeroSorteado2 = 0;
    int posicaoHamster1 = 0;
    int posicaoHamster2 = 0;
    int turnos = 0;

    while (posicaoHamster1 != 12 && posicaoHamster2 != 12) {

        // Inicializa gerador de números aleatórios
        srand(time(0));

        // Sorteia um número de 1 a 5 para cada hamster
        numeroSorteado1 = (1) + rand() % (5 - 1 + 1);
        //Executa ação sorteada
        switch (numeroSorteado1) {
        case 1: // Avança 1 posição (+1) 
            posicaoHamster1++;   
            break;
        case 2: // Avança 2 posições (+2)   
            posicaoHamster1 += 2;   
            break;
        case 3: // Não se move (0)          
            break;
        case 4: // Retrocede 1 posição (-1) 
            posicaoHamster1--;   
            break;
        case 5: // Retrocede 2 posições (-2)
            posicaoHamster1 -= 2;   
            break;
        }
        // Se posição menor que zero, define 0
        if(posicaoHamster1 < 0) {
            posicaoHamster1 = 0;
        }
        // Se posição maior que 12, define 12
        if(posicaoHamster1 > 12) {
            posicaoHamster1 = 12;
        }

        // Sorteia um número de 1 a 5 para cada hamster
        numeroSorteado2 = (1) + rand() % (5 - 1 + 1);
        //Executa ação sorteada
        switch (numeroSorteado2) {
        case 1: // Avança 1 posição (+1)   
            posicaoHamster2++;   
            break;
        case 2: // Avança 2 posições (+2)  
            posicaoHamster2 += 2;    
            break;
        case 3: // Não se move (0)          
            break;
        case 4: // Retrocede 1 posição (-1) 
            posicaoHamster2--;   
            break;
        case 5: // Retrocede 2 posições (-2)
            posicaoHamster2 -= 2; 
            break;
        }
        // Se posição menor que zero, define 0
        if(posicaoHamster2 < 0) {
            posicaoHamster2 = 0;
        }
        // Se posição maior que 12, define 12
        if(posicaoHamster2 > 12) {
            posicaoHamster2 = 12;
        }
        // Conta os turnos
        turnos++;
        // Imprime o tabuleiro com os resultados atuais
        printf("+--Turno %i ---------------------------------------------------+\n", turnos);
        imprimirTabuleiro(posicaoHamster1, posicaoHamster2);
        // Espera o usuário querer ir para o próximo turno
        printf("Enter para ir para o proximo turno...");
        getchar();

    }
    // Verifica o resultado da corrida
    if (posicaoHamster1 == 12 && posicaoHamster2 == 12) {
        printf("Resultado: Empate! Ambos os hamsters chegaram ao final ao mesmo tempo!\n");
    } else if (posicaoHamster1 == 12) {
        printf("Resultado: Hamster 1 venceu a corrida!\n");
    } else {
        printf("Resultado: Hamster 2 venceu a corrida!\n");
    }
}