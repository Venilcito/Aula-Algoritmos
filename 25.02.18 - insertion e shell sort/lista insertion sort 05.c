#include <stdio.h>

void insertionsort(float vetor[], int n){
    int i, j;
    float key;
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
    
    float vetor[] = {1.2, 5.6, 3.4, 8.9, 4.5, 7.2, 9.1, 2.2, 6.1};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    
    insertionsort(vetor, tam);
    
    printf("Vetor ordenado:  ");
    for (int i = 0; i < tam; i++) {
        printf("%.1f  ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}