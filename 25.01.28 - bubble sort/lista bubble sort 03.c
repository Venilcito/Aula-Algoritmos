#include <stdio.h>

int main(){

    int vetor[5] = {10, 20, 5, 8, 15};

    printf("Original: ");
    for(int i = 0; i < 5; i++){
        printf("%d\t", vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(vetor[j] > vetor[j+1]){
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

    printf("\n\nMenor valor: %d\n", vetor[0]);

    return 0;
}
