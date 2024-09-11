#include <stdio.h>

int main(){

    int matriz[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Insira o valor [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    for(j = 0; j < 4; j++){
        printf("Soma da coluna %d: %d\n", j + 1, matriz[0][j] + matriz[1][j] + matriz[2][j] + matriz[3][j]);
    }

    return 0;
}