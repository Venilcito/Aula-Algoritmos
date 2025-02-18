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
    
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    
    int intervalo = 3;
    
    insertionsort(vetor, intervalo);
        
    printf("Vetor ordenado (ate o valor %d): ", intervalo);
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}