#include <stdio.h>

int insertionsort(int vetor[], int n){
    int i, key, j, trocas = 0;
    for(i = 1; i < n; i++){
        key = vetor[i];
        j = i - 1;
        
        while(j >= 0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            j--;
            trocas++;
        }
        vetor[j+1] = key;
    }
    
    return trocas;
}

int main(){
    
    int vetor[] = {1, 5, 3, 8, 4, 7, 9, 2, 6};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    
    int trocas = insertionsort(vetor, tam);
    
    printf("Vetor ordenado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nQuant. de Trocas: %d\n", trocas);
    
    return 0;
}