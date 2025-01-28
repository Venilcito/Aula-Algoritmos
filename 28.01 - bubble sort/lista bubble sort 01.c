#include <stdio.h>

int main(){

    int vetor[6] = {5, 2, 9, 1, 5, 6};

    printf("Original: ");
    for(int i = 0; i < 6; i++){
        printf("%d\t", vetor[i]);
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 5; j++){
            if(vetor[j] > vetor[j+1]){
                int aux;
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("\nOrdenado: ");
    for(int i = 0; i < 6; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");

    return 0;
}
