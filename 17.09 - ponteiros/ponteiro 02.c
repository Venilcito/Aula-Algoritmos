#include <stdio.h>

int main(){

    int vetor[5] = {10, 20, 30, 40, 50};
    int *ponteiro;
    ponteiro = vetor;

    printf("Elementos do vetor usando ponteiro:\n");
    for(int i = 0; i < 5; i++){
        printf("Elemento %d: valor %d, endereco %p\n", i, *(ponteiro + i), (ponteiro + i));
    }

    return 0;
}