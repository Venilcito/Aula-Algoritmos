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
        if(*(ponteiro + i) % 2 == 0){
            printf("Valor par %d: endereco %p\n", *(ponteiro + i), (ponteiro + i));
        }
    }

    return 0;
}