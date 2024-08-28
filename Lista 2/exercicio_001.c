#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int minutos = 0;
    int segundos = 0;
    
    // Aceita um tempo do usuário
    printf("Digite um tempo em minutos: ");
    scanf("%i", &minutos);
    
    // Exibe os resultados
    printf("Foi digitado %i minuto(s)\n", minutos);
    segundos = minutos * 60;
    printf("Isso e igual a %i segundos\n", segundos);

    return 0;
}