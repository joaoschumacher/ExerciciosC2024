/*
 * Programa: exercicio_004.c
 * Descrição: Crie um programa em C que gerencie o cadastro de livros em uma biblioteca. Cada livro possui as seguintes
 * informações: título, autor, ano de publicação e número de páginas.
 * a) Defina uma struct chamada Livro que contenha esses dados.
 * b) Implemente uma função
 *      Livro cadastrarLivro(char titulo[], char autor[], int ano, int paginas);
 *    que inicializa e retorna uma struct Livro.
 * c) Implemente uma função
 *      void exibirLivro(Livro livro);
 *    que exibe as informações de um livro.
 * d) No main, crie um array de struct Livro com espaço para 5 livros.
 * e) Cadastre 5 livros.
 * f) Após o cadastro, exiba todos os livros cadastrados, usando a função exibirLivro
 * 
 * Autor: João Pedro Schumacher
 * 
 */

#include <stdio.h>
#include <string.h>

const int NUMERO_LIVROS = 5;

typedef struct 
{
    char titulo[100];
    char autor[100];
    int ano;
    int paginas;
} Livro;

Livro cadastrarLivro(char titulo[], char autor[], int ano, int paginas) {
    Livro livro;
    strcpy(livro.titulo, titulo);
    strcpy(livro.autor, autor);
    livro.ano = ano;
    livro.paginas = paginas;
    return livro;
}

void exibeLivro(Livro livro) {
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicação: %d\n", livro.ano);
    printf("Número de Páginas: %d\n\n", livro.paginas);
}

int main()
{
    Livro listaLivros[NUMERO_LIVROS];
    // Cadastro dos 5 livros
    listaLivros[0] = cadastrarLivro("1984", "George Orwell", 1949, 328);
    listaLivros[1] = cadastrarLivro("Dom Quixote", "Miguel de Cervantes", 1605, 863);
    listaLivros[2] = cadastrarLivro("Orgulho e Preconceito", "Jane Austen", 1813, 279);
    listaLivros[3] = cadastrarLivro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954, 1178);
    listaLivros[4] = cadastrarLivro("O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943, 96);

    for (int i = 0; i < 5; i++) {
        exibeLivro(listaLivros[i]);
    }
}