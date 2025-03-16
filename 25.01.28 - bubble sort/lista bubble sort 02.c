#include <stdio.h>

int main(){

    int vetor[5] = {7, 4, 2, 8, 5};

    printf("Original: ");
    for(int i = 0; i < 5; i++){
        printf("%d\t", vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(vetor[j] < vetor[j+1]){
                int aux;
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("\nOrdenado: ");
    for(int i = 0; i < 5; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");

    return 0;
}
