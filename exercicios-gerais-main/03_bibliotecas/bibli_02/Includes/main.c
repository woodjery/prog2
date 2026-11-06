#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int rows1, cols1;
    int rows2, cols2;
    int opcao;
    scanf("%d%d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    matrix_read(rows1, cols1, matrix1);
    scanf("%d%d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    matrix_read(rows2, cols2, matrix2);

    do{
        printf("\n");
        
        printf("1 - Somar matrizes\n");
        printf("2 - Subtrair matrizes\n");
        printf("3 - Multiplicar matrizes\n");
        printf("4 - Multiplicacao de uma matriz por escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida:\n");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
            //soma
                if(possible_matrix_sum(rows1, cols1,rows2, cols2)){
                    int result[rows1][cols1];
                    matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols1, result);
                }
                break;
            case 2:
            //sub
            if(possible_matrix_sub(rows1, cols1, rows2, cols2)){
                int result[rows1][cols1];
                    matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols1, result);
            }
                break;
            case 3:
            // multi
            if(possible_matrix_multiply(cols1, rows2)){
                int result[rows1][cols2];
                matrix_multiply(rows1, cols1,  matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols2, result);
            }
                break;
            case 4: {
            //multi matrix por escalar
                int scalar;
                int escolhe;
                scanf("%d", &scalar);
                scanf("%d", &escolhe);
                if(escolhe==1){
                    scalar_multiply(rows1, cols1, matrix1, scalar);
                }else if(escolhe==2){
                    scalar_multiply(rows2, cols2,matrix2, scalar);
                }
                break;
            }
            case 5: {
            //transporta
            int transposta1[cols1][rows1];
            int transposta2[cols2][rows2];
                transpose_matrix(rows1, cols1, matrix1, transposta1);
                transpose_matrix(rows2, cols2, matrix2, transposta2);

                matrix_print(cols1, rows1, transposta1);
                matrix_print(cols2, rows2, transposta2);
                break;
            }
            case 6:
            //encerrar
            printf("Encerrar o programar\n");
                break;

        }

    }while(opcao!=6);

    return 0;
}