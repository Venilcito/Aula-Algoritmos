#include <stdio.h>

int selectionsort(int vetor[], int n){
    int menor, temp, trocas = 0;
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
            trocas++;
        }
    }
    return trocas;
}

int main(){

    int vetor[10] = {7, 4, 1, 2, 3, 5, 6, 8, 9, 0};
    int trocas = selectionsort(vetor, 10);
    
    printf("Vetor ordenado: ");
    for (int i = 0; i < 6; i++) printf("%d ", vetor[i]);
    printf("\nQuant. de trocas: %d\n", trocas);

    return 0;
}