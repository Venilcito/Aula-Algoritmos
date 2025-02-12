#include <stdio.h>

void selectionsort(int vetor[], int n){
    int menor, temp;
    for (int i = 0; i < n - 1; i++){
        menor = i;
        for (int j = i + 1; j < n; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        if (menor != i){
            temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    }
}

void sortmatriz(int matriz[3][3]){
    for (int i = 0; i < 3; i++) {
        selectionsort(matriz[i], 3);
    }
}

int main(){
    
    int matriz[3][3] = {{9, 2, 3}, {6, 1, 5}, {7, 8, 4}};
    sortmatriz(matriz);
    printf("Matriz ordenada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}