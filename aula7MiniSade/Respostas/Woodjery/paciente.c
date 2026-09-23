#include <stdio.h>
#include "paciente.h"

#include "lesao.h"
#include "data.h"
#include "constantes.h"

/*definicao struct tPaciente
typedef struct
{
    char nomePaciente[MAX_TAM_NOME];
    tData nascimentoPaciente;
    char susPaciente[MAX_TAM_SUS];
    char generoPaciente;
    tLesao lesoesPaciente[MAX_TAM_LES];
    int qtdLesoesPaciente;
}tPaciente;
*/

tPaciente lePaciente(){
    tPaciente p;
    scanf("\n%[^\n]",p.nomePaciente);
    scanf("\n%[^\n]", p.nascimentoPaciente);
    scanf("\n%[^\n]", p.susPaciente);
    scanf("\n%[^\n]", p.generoPaciente);
    scanf("\n%[^\n]", p.lesoesPaciente);
    scanf("%d", &p.qtdLesoesPaciente);
    return p;
}

void printPaciente(tPaciente p){
    printf("")
}
void obtemCartaoSusPaciente(tPaciente p, char cartaoSus[]);
tPaciente insereLesaoPaciente(tPaciente p, tLesao les);
void obtemLesoesPaciente(tPaciente p, tLesao *saida, int qtdLesoes);
int obtemIdadePaciente(tPaciente p);
int obtemQuatidadeLesoesPaciente(tPaciente p);

