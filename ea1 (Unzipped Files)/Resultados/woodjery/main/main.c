#include <stdio.h>

#include "livro.h"
#include "usuario.h"
#include "emprestimo.h"

int main(){

    Livro livros[3];

    Usuario usuarios[20];

    Emprestimo emprestimos[100];

    int qtdLivros = 0;
    int qtdUsuarios = 0;
    int qtdEmprestimos = 0;

    char tipo;

    scanf(" %c", &tipo);

    while(tipo != 'F'){

        /* Cadastro de livro */
        if(tipo == 'L'){

            if(qtdLivros < 3){

                livros[qtdLivros] = leLivro();

                qtdLivros++;
            }
        }

        /* Cadastro de usuário */
        if(tipo == 'U'){

            if(qtdUsuarios < 20){

                usuarios[qtdUsuarios] = leUsuario();

                qtdUsuarios++;
            }
        }

        /* Empréstimo */
        if(tipo == 'E'){

            
            char codLivro[11];
            char codUsuario[11];

            scanf(" %10[^\n]", codLivro);
            scanf(" %10[^\n]", codUsuario);
            Data data = leData();

            /* Procurar livro */
            int encontrouLivro = 0;
            int posicaoLivro = -1;
            for(int i = 0; i < qtdLivros; i++){
                if(comparaCodigoLivro(livros[i], codLivro)){
                    encontrouLivro = 1;
                    posicaoLivro = i;
                }
            }

            /* Procurar usuário */
            int encontrouUsuario = 0;
            int posicaoUsuario = -1;
            for(int i = 0; i < qtdUsuarios; i++){
                if(comparaMatriculaUsuario(usuarios[i], codUsuario)){
                    encontrouUsuario = 1;
                    posicaoUsuario = i;
                }
            }

            /* Contar empréstimos do livro */
            int qtdEmprestimosLivro = 0;
            for(int i = 0; i < qtdEmprestimos; i++){
                if(comparaCodLivroEmprestimo(emprestimos[i], codLivro)){
                    qtdEmprestimosLivro++;
                }
            }

            /* Contar empréstimos do usuário */
            int qtdEmprestimosUsuario = 0;
            for(int i = 0; i < qtdEmprestimos; i++){
                if(comparaCodUsuarioEmprestimo(emprestimos[i], codUsuario)){
                    qtdEmprestimosUsuario++;
                }
            }

            /* Quantidade de exemplares do livro */
            int qtdExemplares = 0;
            if(encontrouLivro == 1){
                qtdExemplares = obterQuantidadeExemplaresLivro(livros[posicaoLivro]);
            }

            /* Limite de empréstimos do usuário */
            int limiteUsuario = 0;
            if(encontrouUsuario == 1){
                limiteUsuario = obterLimiteEmprestimosUsuario(usuarios[posicaoUsuario]);
            }

            /* Verificar empréstimo duplicado */
            int emprestimoDuplicado = 0;
            for(int i = 0; i < qtdEmprestimos; i++){
                if(comparaCodLivroEmprestimo(emprestimos[i], codLivro) && 
                comparaCodUsuarioEmprestimo(emprestimos[i], codUsuario) && 
                comparaData(getDataEmprestimo(emprestimos[i]), data)){
                    emprestimoDuplicado = 1;
                }
            }

            /* Registrar empréstimo */
            if(encontrouLivro == 1 &&
               encontrouUsuario == 1 &&
               qtdEmprestimosLivro < qtdExemplares &&
               qtdEmprestimosUsuario < limiteUsuario &&
               emprestimoDuplicado == 0 &&
               qtdEmprestimos < 100){

                emprestimos[qtdEmprestimos] =
                    criaEmprestimo(
                        data,
                        codLivro,
                        codUsuario);

                qtdEmprestimos++;
            }
        }

        /* Próximo comando */
        scanf(" %c", &tipo);
    }
     printf("- - - EMPRESTIMOS - - -\n");
    for(int i = 0; i < qtdEmprestimos; i++){
        imprimeEmprestimo(emprestimos[i]);
    }

    return 0;
}