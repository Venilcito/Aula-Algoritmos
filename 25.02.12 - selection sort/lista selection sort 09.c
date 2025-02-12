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

int ordenado(int vetor[], int n){
    for (int i = 0; i < n - 1; i++){
        if (vetor[i] > vetor[i + 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    int vetor[5] = {1, 2, 3, 4, 5};
    
    if(ordenado(vetor, 5)){
        printf("O vetor ja esta ordenado!\n");
    } else{
        printf("Vetor ordenado: ");
        selectionsort(vetor, 5);
        for (int i = 0; i < 5; i++) printf("%d ", vetor[i]);
        printf("\n");
    }

    return 0;
}