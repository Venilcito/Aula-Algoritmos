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
    for(i = 0; i < 4; i++){
        printf("Soma da linha %d: %d\n", i + 1, matriz[i][0] + matriz[i][1] + matriz[i][2] + matriz[i][3]);
    }

    return 0;
}