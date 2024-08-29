#include <stdio.h>

// Declaração de constantes
#define PRECO_BUFFET_QUILO 40.00;

int main()
{
    // Declaração de variáveis
    float pesoPrato = 0.0;
    float resultadoPreco = 0.0;

    // Aceita o peso do prato do cliente em gramas 
    printf("Digite o peso do prato em gramas: ");
    scanf("%f", &pesoPrato);
    
    // Calcula o preço total
    resultadoPreco = (pesoPrato / 1000) * PRECO_BUFFET_QUILO;

    // Exibe o total que o cliente deve pagar
    printf("O total a pagar e R$ %.2f\n", resultadoPreco);

    return 0;
}