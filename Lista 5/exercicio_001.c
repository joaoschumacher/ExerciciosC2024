/*
 * Programa: exercicio_001.c
 * Descrição: Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
 *    Depois disso, implemente algoritmos para:
 *      a. Imprimir o vetor
 *      b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
 *      c. Verificar o número de ocorrências do valor 50 neste vetor.
 *      d. Calcular a média dos valores do vetor
 *      e. Encontrar o maior e o menor valor dos elementos do vetor.
 *      f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
 *      g. Imprimir o vetor em ordem inversa
 *      h. Copiar os elementos em ordem inversa para outro vetor.
 *      i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
 *         elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
 *         conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
 *         acessar os vetores depois).
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializa gerador de números aleatórios
    srand(time(0));

    // Declaração das variáveis
    int v[10] = {};
    int inverseV[10] = {};
    int vPares[10] = {};
    int vImpares[10] = {};
    int tamanhoV = sizeof(v) / sizeof(v[0]);
    int ocorrencias50 = 0;
    int soma = 0;
    float media = 0;
    long double produto = 1;
    int maiorValor = 0;
    int menorValor = 90;
    int j = tamanhoV;
    int indiceImpar = 0;
    int indicePar = 0;


    // Sorteia valores e popula o array
    for (int i = 0; i < tamanhoV; i++) {
        v[i] = 10 + rand() % (90 - 10 + 1);
        j--;
        inverseV[j] = v[i];
    }

    printf("A) Vetor { ");
    // Loop para ler o vetor
    for (int i = 0; i < tamanhoV; i++) {
        printf("%i ", v[i]);
        // Verifica a quantidade de ocorrências do número 50
        if (v[i] == 50){
            ocorrencias50++;
        }
        // Faz a soma de todos os itens
        soma += v[i];
        // Faz o produto de todos os itens 
        produto *= v[i];
        // Verifica o maior valor
        if (v[i] > maiorValor) {
            maiorValor = v[i];
        }
        // Verifica o menor valor
        if (v[i] < menorValor) {
            menorValor = v[i];
        }
        // Verifica valores pares ou impares
        if (v[i] % 2 == 0) {
           vPares[indicePar] = v[i];
           indicePar++;
        } else {
           vImpares[indiceImpar] = v[i];
           indiceImpar++;
        }
    }
    printf("}\n");

    // Exibe resultados
    printf("B) ");
    if (ocorrencias50 > 0) { // Verifica se possui algum numero 50
        printf("Encontrou o numero 50!\n");
    } else {
        printf("Nao encontrou o numero 50!\n");
    }
    printf("C) Foram encontrados %i ocorrencias do numero 50.\n", ocorrencias50);
    media = (float)soma / (float)tamanhoV; // Calcula média
    printf("D) A media dos valores e %.2f!\n", media);
    printf("E) Maior valor: %i      Menor valor: %i\n", maiorValor, menorValor);
    printf("F) Soma: %i      Produto: %ld\n", soma, produto);
    printf("G) e H) Vetor inverso { ");
    for (int i = 0; i < tamanhoV; i++) { // Loop para imprimir o vetor inverso
        printf("%i ", inverseV[i]);    
    }
    printf("}\n");
    printf("I) Vetor Par { ");
    for (int i = 0; i < tamanhoV; i++) { // Loop para imprimir o vetor par
        if (vPares[i] == 0) {
            break;
        }
        printf("%i ", vPares[i]);    
    }
    printf("}\n");
    printf("   Vetor Impar { ");
    for (int i = 0; i < tamanhoV; i++) { // Loop para imprimir o vetor impar
        if (vImpares[i] == 0) {
            break;
        }
        printf("%i ", vImpares[i]);    
    }
    printf("}\n");


}