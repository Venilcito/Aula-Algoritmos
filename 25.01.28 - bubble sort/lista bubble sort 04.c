#include <stdio.h>

int main(){

    int vetor[4] = {4, 1, 7, 3};

    printf("Original: ");
    for(int i = 0; i < 4; i++){
        printf("%d\t", vetor[i]);
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            if(vetor[j] > vetor[j+1]){
                int aux;
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("\nOrdenado: ");
    for(int i = 0; i < 4; i++){
        printf("%d\t", vetor[i]);
    }

    printf("\n\nMaior valor: %d\n", vetor[3]);

    return 0;
}
