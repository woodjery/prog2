

#include "area.h"
#include <string.h>

#define MAX_TAM_NOME 100
#define MAX_TAM_ID 5

typedef struct
{
    char nome[MAX_TAM_NOME];
    char id[MAX_TAM_ID];
    int capacidade;
} Area;

/**
 * Função que lê uma área comum de acordo com o formato de entrada descrito na
 * especificação e retorna a Area lida.
 */
Area lerArea(){
    Area area;
    scanf(" %[^\n]", area.nome);
    scanf("%s", area.id);
    scanf("%d", &area.capacidade);
    return area;

}

/**
 * Função que imprime todas as informações de uma Area conforme o formato
 * descrito na especificação. Dica: veja o arquivo de saída nos casos de teste.
 *
 */
void imprimeArea(Area a){
    printf("Area reservada:\n");
    printf("Nome: %s\n", a.nome);


}

/*
 * Função que compara se duas áreas são iguais através do
 * id delas.
 * Retorna 1 se forem iguais e 0 caso contrário
 */
int comparaArea(Area a1, Area a2){
    if(strcmp(a1.id , a2.id) ==0){
        return 1;
    }else{
        return 0;
    }
}

/*
 * Função que verifica se o id passado é igual ao id da área passada
 * Retorna 1 se for igual e 0 caso contrário
 */
int verificaIdArea(Area a, char *id){
    if(strcmp(a.id , id) == 0){
    return 1;
        return 0;
     }else{
   }

}

/**
 * Função que retorna a capacidade de uma área comum.
 */
int getCapacidadeArea(Area a){
    return a.capacidade = 30;
}
