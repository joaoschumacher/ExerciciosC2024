/*
 * Programa: exercicio_012.c
 * Descrição: A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
 * algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir: 
 * 
 *                                   +----------------+--------------------+
 *                                   | Categoria       | Idade             |
 *                                   +----------------+--------------------+
 *                                   | Infantil A      | 5-7 anos          |
 *                                   | Infantil B      | 8-10 anos         |
 *                                   | Juvenil A       | 11-13 anos        |
 *                                   | Juvenil B       | 14-17 anos        |
 *                                   | Sênior          | Maiores de 18 anos|
 *                                   +----------------+--------------------+
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int idade = 0;

    // Pede a idade do nadador
    printf("Digite a idade do nadador: ");
    scanf("%i", &idade); 

    // Testa qual a categoria do nadador de acordo com a tabela 
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n\n");
    } else if (idade >= 18) {
        printf("Categoria: Senior\n\n");
    } else {
        printf("Idade fora das categorias.\n\n");
    }
    return 0;
}