#include <stdio.h>
#include <string.h>
#include "livro.h"

/*
#define MAX_TAM_TITULO_LIVRO 51
#define MAX_TAM_COD_LIVRO 11
#define MAX_TAM_GENERO_LIVRO 51
*/

/*
typedef struct {
    char titulo[MAX_TAM_TITULO_LIVRO];
    char codigo[MAX_TAM_COD_LIVRO];
    char genero[MAX_TAM_GENERO_LIVRO];
    int quantidadeExemplares;
} Livro;
*/

/*
Função que cria um livro a partir dos parâmetros fornecidos e retorna o livro criado.
@param titulo: String com o Título do livro.
@param codigo: String com o Código do livro.
@param genero: String com o Gênero do livro.
@param quantidadeExemplares: Quantidade de exemplares do livro disponíveis no acervo.
@return Livro criado.
*/
Livro criaLivro(char *titulo, char *codigo, char *genero, int quantidadeExemplares){
    Livro livro;
    strcpy(livro.titulo, titulo);
    strcpy(livro.codigo, codigo);
    strcpy(livro.genero,genero);
    livro.quantidadeExemplares = quantidadeExemplares;
    return livro;
    
}

/*
Função que lê os dados de um livro a partir da entrada padrão e retorna o livro lido.
Veja o enunciado e os casos de teste para mais detalhes sobre o formato da entrada.
@return Livro lido.
*/
Livro leLivro(){
    Livro livro;
    scanf(" %50[^\n]", livro.titulo);
    scanf(" %10[^\n]",livro.codigo);
    scanf(" %50[^\n]",livro.genero);
    scanf("%d", &livro.quantidadeExemplares);
    return livro;

}

/*
Função que compara o código de um livro com um código fornecido.
Se os códigos forem iguais, retorna 1. Caso contrário, retorna 0.
@param livro: Livro a ser comparado.
@param codigo: String com o código a ser comparado.
@return 1 se os códigos forem iguais, 0 caso contrário.
*/
int comparaCodigoLivro(Livro livro, char *codigo){
    if(strcmp(livro.codigo, codigo) == 0){
        return 1;
    }
    return 0;
}

/*
Função que retorna a quantidade de exemplares de um livro.
@param livro: Livro do qual se deseja obter a quantidade de exemplares.
@return Quantidade de exemplares do livro.
*/
int obterQuantidadeExemplaresLivro(Livro livro){
    int qtd;
    qtd = livro.quantidadeExemplares;
    return qtd;
}

/*
Função que copia a código do livro para uma string fornecida como parâmetro.
@param livro: Ponteiro para o livro do qual se deseja obter o código.
@param cod: String na qual o código do livro será copiado.
*/
void obterCodigoLivro(Livro livro, char *cod){
    strcpy(cod, livro.codigo);
}

