#include <stdio.h>

int main(){

    int vetor[6] = {5, 2, 9, 1, 5, 6};

    printf("\nOriginal: ");
    for(int i = 0; i < 6; i++){
        printf("%d\t", vetor[i]);
    }

    for(int i = 0; i < 1000; i++){
        int troca = 0;

        for(int j = 0; j < 6; j++){
            if(vetor[j] > vetor[j+1]){
                int aux;
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;

                troca = 1;
            }
        }

        if(!troca){break;}
    }

    printf("\nOrdenado: ");
    for(int i = 0; i < 6; i++){
        printf("%d\t", vetor[i]);
    }

    return 0;
}
