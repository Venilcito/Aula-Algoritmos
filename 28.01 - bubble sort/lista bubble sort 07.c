#include <stdio.h>

int main(){

    int vetor[6] = {3, 6, 8, 5, 2, 7};
    int pares[6], pos = 0;

    printf("Original: ");
    for(int i = 0; i < 6; i++){
        printf("%d\t", vetor[i]);
    }

    for(int i = 0; i < 6; i++){
        if(vetor[i] % 2 == 0){
            pares[pos] = vetor[i];
            pos++;
        }
    }

    for(int i = 0; i < pos; i++){
        for(int j = 0; j < pos-1; j++){
            if(pares[j] > pares[j+1]){
                int aux;
                aux = pares[j];
                pares[j] = pares[j+1];
                pares[j+1] = aux;
            }
        }
    }

    pos = 0;
    for(int i = 0; i < 6; i++){
        if(vetor[i] % 2 == 0){
            vetor[i] = pares[pos];
            pos++;
        }
    }

    printf("\nOrdenado: ");
    for(int i = 0; i < 6; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");

    return 0;
}