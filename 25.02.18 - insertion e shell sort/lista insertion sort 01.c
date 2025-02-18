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
    
    int vetor[] = {3, 2, 8, 9, 1, 6, 4, 5, 7};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    
    insertionsort(vetor, tam);
    
    printf("Vetor ordenado: ");
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}