#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrizB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    printf("Soma das duas matrizes:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}