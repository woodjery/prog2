#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"

struct Tabuleiro{
    int casas[TAM_TABULEIRO][TAM_TABULEIRO];
};

/**
 * Aloca e retorna uma estrutura do tipo tTabuleiro.
 * Se a alocação falhar, o programa é encerrado.
 * 
 * @return a estrutura do tipo tTabuleiro alocada.
 */
tTabuleiro* CriaTabuleiro(){
    tTabuleiro* tabuleiro = malloc(sizeof(tTabuleiro));
    if(tabuleiro == NULL){
        printf("Erro na alocacao\n");
        exit(1);
    }
    for(int i = 0; i<TAM_TABULEIRO; i++){
        for(int j = 0; j<TAM_TABULEIRO; j++){
            tabuleiro->casas[i][j]=0;
        }
    }
    return tabuleiro;
}


/**
 * Libera a memória de uma estrutura do tipo tTabuleiro.
 * 
 * @param tabuleiro a estrutura do tipo tTabuleiro a ser liberada.
 */
void DestroiTabuleiro(tTabuleiro* tabuleiro){
    free(tabuleiro);
}


/**
 * Marca uma posição do tabuleiro com a peça do jogador.
 * 
 * @param tabuleiro o tabuleiro atual.
 * @param peca a peça do jogador (1 ou 2).
 * @param x a coordenada X da posição.
 * @param y a coordenada Y da posição.
 */
void MarcaPosicaoTabuleiro(tTabuleiro* tabuleiro, int peca, int x, int y){
    if(EhPosicaoValidaTabuleiro(x,y)){
        tabuleiro->casas[y][x]=peca;
    }
}


/**
 * Verifica se há alguma posição livre no tabuleiro.
 * 
 * @param tabuleiro o tabuleiro atual.
 * 
 * @return 1 se há alguma posição livre, 0 caso contrário.
 */
int TemPosicaoLivreTabuleiro(tTabuleiro* tabuleiro){
    for(int i = 0; i<TAM_TABULEIRO; i++){
        for(int j = 0; j<TAM_TABULEIRO; j++){
            if(tabuleiro->casas[i][j]==0){
                return 1;
            }    
        }
    }
    return 0;
}


/**
 * Verifica se a posição do tabuleiro está marcada com a peça do jogador.
 * 
 * @param tabuleiro - o tabuleiro atual.
 * @param x a coordenada X da posição.
 * @param y a coordenada Y da posição.
 * @param peca a peça do jogador (1 ou 2).
 * 
 * @return 1 se a posição está marcada com a peça do jogador, 0 caso contrário.
 */
int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro* tabuleiro, int x, int y, int peca){
    if(!EhPosicaoValidaTabuleiro(x,y)){
        return 0;
    }
    return tabuleiro->casas[y][x] == peca;
}


/**
 * Verifica se a posição do tabuleiro está livre.
 * 
 * @param tabuleiro o tabuleiro atual.
 * @param x a coordenada X da posição.
 * @param y a coordenada Y da posição.
 * 
 * @return 1 se a posição está livre, 0 caso contrário.
 */
int EstaLivrePosicaoTabuleiro(tTabuleiro* tabuleiro, int x, int y){
    if(!EhPosicaoValidaTabuleiro(x,y)){
        return 0;
    }
    return tabuleiro->casas[y][x]== 0;
}


/**
 * Verifica se a posição do tabuleiro é válida.
 * 
 * @param x a coordenada X da posição.
 * @param y a coordenada Y da posição.
 * 
 * @return 1 se a posição é válida, 0 caso contrário.
 */
int EhPosicaoValidaTabuleiro(int x, int y){
    if(x>=0 && x<TAM_TABULEIRO && y>=0 && y<TAM_TABULEIRO){
        return 1;
    }
    return 0;
}


/**
 * Imprime o tabuleiro.
 * 
 * @param tabuleiro o tabuleiro atual.
 */
void ImprimeTabuleiro(tTabuleiro* tabuleiro){
    for(int i=0; i<TAM_TABULEIRO; i++){
        printf("\t");
        for(int j=0; j<TAM_TABULEIRO; j++){
            if(tabuleiro->casas[i][j]==0){
                printf("-");
            }else if(tabuleiro->casas[i][j]== PECA_1){
                printf("X");
            }else if(tabuleiro->casas[i][j]== PECA_2){
                printf("0");
            }
        }
        printf("\n");
    }
}

