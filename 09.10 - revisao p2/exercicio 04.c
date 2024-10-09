#include <stdio.h>

int main(){

    int tami, tamj;
    printf("Insira a altura das matrizes:  ");
    scanf("%d", &tami);
    printf("Insira a largura das matrizes: ");
    scanf("%d", &tamj);
    printf("\n");

    int matrizA[tami][tamj], matrizB[tami][tamj];

    printf("Matriz A:\n");
    for(int i = 0; i < tami; i++){
        printf("Insira os %d valores da linha %d: ", tamj, i + 1);
        for(int j = 0; j < tamj; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n");

    printf("Matriz B:\n");
    for(int i = 0; i < tami; i++){
        printf("Insira os %d valores da linha %d: ", tamj, i + 1);
        for(int j = 0; j < tamj; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("\n");

    printf("Multiplicação dos opostos:\n");
    for(int i = 0; i < tami; i++){
        for(int j = 0; j < tamj; j++){
            printf("matrizA[%d][%d] * matrizB[%d][%d] = %d\n", i, j, tami - 1 - i, tamj - 1 - j, matrizA[i][j] * matrizB[tami - 1 - i][tamj - 1 - j]);
        }
    }

    return 0;
}