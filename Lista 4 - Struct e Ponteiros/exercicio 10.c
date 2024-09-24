#include <stdio.h>

int main(){

    int vetor[5], *ponteiro;
    ponteiro = vetor;

    for(int i = 0; i < 5; i++){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &ponteiro[i]);
    }

    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Dobro do valor %d: %d\n", i + 1, *(ponteiro + i) * 2);
    }

    return 0;
}