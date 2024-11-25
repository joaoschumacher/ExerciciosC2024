/*
 * Programa: TrabalhoPraticoGB.c
 * Descrição: Você foi contratado para desenvolver um programa que auxilie um alquimista em sua jornada de criação de poções. O sistema 
 * deve permitir o controle do estoque de ingredientes e o preparo de poções com base em um conjunto de receitas pré-definidas. 
 * O programa deve ter um menu com as opções descritas a seguir, e todos os dados deverão ser armazenados usando arrays e structs.
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>

// Struct de ingrediente
typedef struct {
    char nome[30];
    int quantidade;
} Ingrediente;

// Struct de poção
typedef struct {
    char nome[30];
    int ingredientes[7];  
    int quantidades[7];   
} Pocao;

// Função aceita uma entrada do usuário com um valor mínimo e máximo, caso esteja fora do intervalo retorna -1
int aceitaOpcao(int minimo, int maximo) {
    // Declaração das variáveis da função
    int entrada = 0;
    scanf("%i", &entrada);
    // Se for uma entrada válida
    if (entrada >= minimo && entrada <= maximo) {
        return entrada;
    } else {
        return -1;
    }
}

// Consulta os ingredientes disponíveis 
void consultarIngredientes(Ingrediente ingredientes[], int numIngredientes) {
    printf("\n=== Ingredientes Disponiveis ===\n");
    for (int i = 0; i < numIngredientes; i++) {
        printf("%i. %s: %i\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
    }
}

// Função para preparar a poção
void prepararPocao(Ingrediente ingredientes[], Pocao pocoes[], int numeroIngredientes, int numeroPocoes) {
    // Declaração das variáveis da função
    int opcao = 0;
    Pocao opcaoPocao;
    int podePreparar = 1;
    // Loop para aceitar poção
    do {
        // Aceita e valida se a poção é válida
        printf("\n=== Pocoes ===\n");
        for (int i = 0; i < numeroPocoes; i++) {
            printf("%i. %s\n", i + 1, pocoes[i].nome);
        }
        printf("\nEscolha uma opcao: ");
        opcao = aceitaOpcao(1, numeroPocoes);
        if (opcao == -1) {
            printf("------------------------------------------------");
            printf("\nA pocao selecionada nao existe. Tente novamente.\n");
            printf("------------------------------------------------");
        }
    } while (opcao == -1);
    opcao--;
    opcaoPocao = pocoes[opcao];

    // Loop para testar se possui os ingredientes necessários para preparar a poção
    for (int i = 0;opcaoPocao.ingredientes[i] != -1; i++) {
        int indiceIngrediente = opcaoPocao.ingredientes[i];
        // Se faltou algum item exibe um aviso
        if (ingredientes[indiceIngrediente].quantidade < opcaoPocao.quantidades[i]) {
            printf("Falta de %s: necessário %d, disponível %d\n",
                   ingredientes[indiceIngrediente].nome,
                   opcaoPocao.quantidades[i],
                   ingredientes[indiceIngrediente].quantidade);
            podePreparar = 0;
        }
    }

    // Se não tem nenhum ingrediente faltando, pode preparar a poção
    if (podePreparar) {
        // Remove do estoque os ingredientes que serão utilizados
        for (int i = 0; opcaoPocao.ingredientes[i] != -1; i++) {
            int indiceIngrediente = opcaoPocao.ingredientes[i];
            ingredientes[indiceIngrediente].quantidade -= opcaoPocao.quantidades[i];
        }
        printf("Poção criada com sucesso!\n");
        // Exibe o estoque de ingredientes atualizado
        printf("Estoque atualizado:");
        consultarIngredientes(ingredientes, numeroIngredientes);
    }
}

// Função para reabastecer os ingredientes do estoque
void reabastecerIngrediente(Ingrediente ingredientes[], int numIngredientes) {
    // Declaração das variáveis da função
    int opcao = 0;
    int quantidade = 0;
    // Loop para aceitar o ingrediente
    do {
        // Exibe a lista de ingredientes e aceita qual será reabastecido
        consultarIngredientes(ingredientes, numIngredientes);
        printf("\nEscolha uma opcao: ");
        opcao = aceitaOpcao(1, numIngredientes);
        // Testa se informou um ingrediente que existe
        if (opcao == -1) {
            printf("------------------------------------------------");
            printf("\nO ingrediente selecionado nao existe. Tente novamente.\n");
            printf("------------------------------------------------");
        }
    } while (opcao == -1);
    opcao--;
    // Loop para aceitar a quantidade
    do {
        printf("Quantidade: ");
        scanf("%i", &quantidade);
        // Testa se informou um número positivo
        if (quantidade <= 0) {
            printf("------------------------------------------------");
            printf("\nA quantidade informada nao e valida. Tente novamente.\n");
            printf("------------------------------------------------\n");
        }
    } while (quantidade <= 0);
    // Soma o valor informado com a quantia atual do ingrediente no estoque
    ingredientes[opcao].quantidade += quantidade;
}

// Declaração de constantes
#define NUM_INGREDIENTES 7
#define NUM_POCOES 5

int main()
{
    // Inicialização dos ingredientes
    Ingrediente ingredientes[NUM_INGREDIENTES] = {
        {"Po de Fenix (mg)", 100},
        {"Essencia Celestial (ml)", 50},
        {"Raiz de Dragao (mg)", 45},
        {"Orvalho Lunar (ml)", 30},
        {"Flores secas (mg)", 200},
        {"Elixir amargo (ml)", 20},
        {"Lagrimas de unicornio (ml)", 15}
    };

    // Inicialização das poções
    Pocao pocoes[NUM_POCOES] = {
        {"Pocao de Cura", {0, 1, 4, 6, -1}, {30, 20, 20, 10, -1}},
        {"Pocao Forca da Floresta", {3, 2, 4, -1}, {20, 30, 30, -1}},
        {"Pocao Sabedoria da Riqueza", {1, 0, -1}, {30, 50, -1}},
        {"Pocao Sorte no Amor", {3, 4, 6, -1}, {10, 50, 5, -1}},
        {"Pocao Malvada", {5, 2, -1}, {10, 15, -1}}
    };

    // Declaração de variáveis
    int opcao = 0;

    do {
        // Menu principal
        printf("\n=== Menu Principal ===\n");
        printf("1. Consultar Ingredientes Disponiveis\n");
        printf("2. Preparar Pocao\n");
        printf("3. Reabastecer Ingrediente\n");
        printf("4. Sair do Programa\n");
        printf("Escolha uma opcao: ");
        // Aceita uma opção do menu validando se é correta
        opcao = aceitaOpcao(1, 4);
        switch (opcao) {
            case 1:
                consultarIngredientes(ingredientes, NUM_INGREDIENTES);
                break;
            case 2:
                prepararPocao(ingredientes, pocoes, NUM_INGREDIENTES, NUM_POCOES);
                break;
            case 3:
                reabastecerIngrediente(ingredientes, NUM_INGREDIENTES);
                break;
            case 4:
                printf("------------------------------------------------");
                printf("\nEncerrando o programa. Adeus!\n");
                printf("------------------------------------------------");
                break;
            default:
                printf("------------------------------------------------");
                printf("\nA opcao selecionada e invalida. Tente novamente.\n");
                printf("------------------------------------------------");
        }
    } while (opcao != 4);
    return 0;
}