#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    double vetor[5];
    double *ponteiro;
    ponteiro = vetor;

    for(int i = 0; i < 5; i++){
        vetor[i] = rand() % 100;
        printf("Valor [%d]: %.2lf, alocado em: %p\n", i + 1, vetor[i], (void*)ponteiro + i);
    }

    return 0;
}