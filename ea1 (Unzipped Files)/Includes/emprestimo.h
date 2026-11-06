

#ifndef _EMPRESTIMO_H
#define _EMPRESTIMO_H

#define MAX_TAM_COD 11

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    char codLivro[MAX_TAM_COD];
    char codUsuario[MAX_TAM_COD];
} Emprestimo;

/*
Função que cria uma data a partir do dia, mês e ano fornecidos e retorna a data criada.
@param dia: Dia da data.
@param mes: Mês da data.
@param ano: Ano da data.
@return Data criada.
*/
Data criaData(int dia, int mes, int ano);

/*
Função que lê uma data do formato DD/MM/AAAA a partir da entrada padrão e retorna a data lida.
@return Data lida.
*/
Data leData();

/*
Função que imprime uma data no formato DD/MM/AAAA na saída padrão (com \n no final)
@param d: Data a ser impressa.
*/
void imprimeData(Data d);

/*
Função que compara duas datas e retorna 1 se forem iguais e 0 caso contrário.
@param d1: Primeira data a ser comparada.
@param d2: Segunda data a ser comparada.
@return 1 se as datas forem iguais, 0 caso contrário.
*/
int comparaData(Data d1, Data d2);

/*
Função que cria um Empréstimo a partir dos parâmetros fornecidos e retorna o empréstimo criado.
@param data: Data do empréstimo.
@param codLivro: String com o Código do livro emprestado.
@param codUsuario: String com a Matrícula do usuário que realizou o empréstimo.
*/
Emprestimo criaEmprestimo(Data data, char *codLivro, char *codUsuario);

/*
Função que imprime os dados de um empréstimo na saída padrão de acordo com o formato especificado.
Veja o enunciado e os casos de teste para mais detalhes.
@param e: Empréstimo a ser impresso.
*/
void imprimeEmprestimo(Emprestimo e);

/*
Função que compara o código do livro de um empréstimo com um código fornecido.
Se os códigos forem iguais, retorna 1. Caso contrário, retorna 0.
@param e: Empréstimo a ser comparado.
@param codLivro: String com o código do livro a ser comparado.
@return 1 se os códigos forem iguais, 0 caso contrário.
*/
int comparaCodLivroEmprestimo(Emprestimo e, char *codLivro);

/*
Função que compara o código do usuário de um empréstimo com uma matrícula fornecida.
Se as matrículas forem iguais, retorna 1. Caso contrário, retorna 0.
@param e: Empréstimo a ser comparado.
@param codUsuario: String com a matrícula do usuário a ser comparada.
@return 1 se as matrículas forem iguais, 0 caso contrário.
*/
int comparaCodUsuarioEmprestimo(Emprestimo e, char *codUsuario);

/*
Função que retorna a data de um empréstimo.
@param e: Empréstimo do qual se deseja obter a data.
@return Data do empréstimo.
*/
Data getDataEmprestimo(Emprestimo e);

#endif
