#include <stdio.h>

int main(){

    int matriz1[2][2], matriz2[2][2];
    int i, j;
    
    printf("Matriz 1:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Insira o valor [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nMatriz 2:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Insira o valor [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nMatriz com termos multiplicados:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz1[i][j] * matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}