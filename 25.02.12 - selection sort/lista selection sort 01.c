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

int main(){
    
    int vetor[10] = {7, 4, 1, 2, 3, 5, 6, 8, 9, 0};
    selectionsort(vetor, 10);
    printf("Vetor ordenado: ");
    for (int i = 0; i < 10; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}