#include <stdio.h>

int main(){

    int matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o valor [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nSua matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}