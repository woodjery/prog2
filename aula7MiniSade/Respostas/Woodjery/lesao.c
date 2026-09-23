
#include <stdio.h>
#include <string.h>
#include "lesao.h"
#include "constantes.h"


tLesao leLesao(){
    tLesao l;
    scanf("\n%[^\n]", l.cartaoSus);
    scanf("\n%[^\n]", l.idLesao);
    scanf("\n%[^\n]", l.diagnostico);
    scanf("\n%[^\n]", l.regiaoCorpo);
    scanf("%d\n", &l.malignidade);

    return l;
}
void printLesao(tLesao *les, int qtdLesoes){
    for (int i=0; i<qtdLesoes; i++)
        printf("%s ", les[i].idLesao);
}
void obtemCartaoSusLesao(tLesao les, char cartaoSus[]){
    strcpy(cartaoSus, les.cartaoSus);
}
int chanceCirirgiaLesao(tLesao les){
    return les.malignidade >= 50;
}


