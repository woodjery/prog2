


#ifndef _USUARIO_H
#define _USUARIO_H

#define MAX_TAM_NOME_USUARIO 101
#define MAX_TAM_MATRICULA_USUARIO 11
#define MAX_TAM_CATEGORIA_USUARIO 51

typedef struct {
    char nome[MAX_TAM_NOME_USUARIO];
    char matricula[MAX_TAM_MATRICULA_USUARIO];
    char categoria[MAX_TAM_CATEGORIA_USUARIO];
    int limiteEmprestimos;
} Usuario;


/*
Função que cria um usuário com os dados fornecidos.
@param nome: String com o Nome do usuário.
@param matricula: String com a Matrícula do usuário.
@param categoria: String com a Categoria do usuário (ex.: ALUNO, PROFESSOR, TECNICO).
@param limiteEmprestimos: Número máximo de empréstimos simultâneos permitidos ao usuário.
@return Usuário criado.
*/
Usuario criaUsuario(char *nome, char *matricula, char *categoria, int limiteEmprestimos);

/*
Função que lê os dados de um usuário a partir da entrada padrão e retorna o usuário lido.
Veja o enunciado e os casos de teste para mais detalhes sobre o formato da entrada.
@return Usuário lido.
*/
Usuario leUsuario();

/*
Função que compara a matrícula de um usuário com uma matrícula fornecida.
Se as matrículas forem iguais, retorna 1. Caso contrário, retorna 0.
@param usuario: Usuário a ser comparado.
@param matricula: String com a matrícula a ser comparada.
@return 1 se as matrículas forem iguais, 0 caso contrário.
*/
int comparaMatriculaUsuario(Usuario usuario, char *matricula);

/*
Função que retorna o limite de empréstimos simultâneos de um usuário.
@param usuario: Usuário do qual se deseja obter o limite de empréstimos.
@return Limite de empréstimos simultâneos do usuário.
*/
int obterLimiteEmprestimosUsuario(Usuario usuario);

/*
Função que copia a matricula de um usuário para uma string fornecida como parâmetro.
@param usuario: Ponteiro para o usuário do qual se deseja obter a matrícula.
@param mat: String na qual a matricula do usuario será copiada.
*/
void obterMatriculaUsuario(Usuario usuario, char *mat);

#endif // _USUARIO_H
