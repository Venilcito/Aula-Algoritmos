#include <stdio.h>

int main(){

    double vetor[10] = {5.6, 8.4, 3.14, 6.54, 9.99, 0.32, 0.1, 4.4, 8.1, 9};
    double *ponteiro;
    ponteiro = vetor;

    for(int i = 0; i < 10; i++){
        printf("Elemento %d: endereco %p\n", i + 1, (ponteiro + i));
    }

    return 0;
}