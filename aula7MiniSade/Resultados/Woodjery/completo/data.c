#include <stdio.h>
#include "data.h"

/*definicao da struct de data
typedef struct
{
    int dia, mes, ano;
}tData;
*/

tData leData(){
    tData  d;
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano );
    return d;
}

void printData(tData d){
    printf("%02d/%02d/%04d\n", d.dia, d.mes, d.ano);
}
int retornaAno(tData inicio){
    tData fim;
    int anos;
    fim.dia = 03;
    fim.mes = 04;
    fim.ano = 2025;
    anos = fim.ano - inicio.ano;
    if(fim.mes < inicio.mes || (fim.mes == inicio.mes && fim.dia < inicio.dia)){
        anos--;
    }
    return anos;
}


