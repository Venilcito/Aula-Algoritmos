#include <stdio.h>

void selectionsort(float vetor[], int n){
    int menor;
    float temp;
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
    
    float vetor[5] = {3.2, 1.5, 4.7, 2.1, 0.9};
    selectionsort(vetor, 5);
    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++) printf("%.1f ", vetor[i]);
    printf("\n");

    return 0;
}