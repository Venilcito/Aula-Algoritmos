#include <stdio.h>

int main(){

    int vetor[3], matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o valor [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz * Vetor =\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j] * vetor[j]);
        }
        printf("\n");
    }

    return 0;
}