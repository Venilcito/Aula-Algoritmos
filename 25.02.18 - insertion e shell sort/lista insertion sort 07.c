#include <stdio.h>

void insertionsort(int vetor[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = vetor[i];
        j = i - 1;
        
        while(j >= 0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = key;
    }
}

int main(){
    
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    int ordenado = 1;
    
    for(int i = 0; i < tam - 1; i++){
        if(vetor[i] > vetor[i+1]){
            ordenado = 0;
            break;
        }
    }
    
    if(ordenado){
        printf("O vetor ja esta ordenado!\n");
    } else{
        insertionsort(vetor, tam);
        
        printf("Vetor ordenado: ");
        for (int i = 0; i < tam; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
    
    return 0;
}