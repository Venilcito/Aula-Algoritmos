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

    printf("\nMatriz espelhada:\n");
    for(i = 0; i < 4; i++){
        for(j = 3; j >= 0; j--){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}