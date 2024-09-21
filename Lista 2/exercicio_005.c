/*
 * Programa: exercicio_005.c
 * Descrição: Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer. Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    float precoGasolina = 0.00;
    float valorMotorista = 0.00;
    float litros = 0.00;

    // Pede o preço da gasolina e quanto o motorista possui de dinheiro
    printf("Qual o preco atual da gasolina: ");
    scanf("%f", &precoGasolina);    
    printf("Quanto dinheiro o motorista tem disponivel: ");
    scanf("%f", &valorMotorista);

    // Calcula quantidade de gasolina que o motorista pode comprar
    litros = valorMotorista / precoGasolina;

    // Exibe o resultado
    printf("\nCom R$ %.2f e possivel abastecer %.2f litros de gasolina.\n", valorMotorista, litros);    
}