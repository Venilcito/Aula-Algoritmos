#include <stdio.h>

int main(){

    int vetor[10];

    for(int v = 0; v <= 9; v++){
        printf("Insira o valor %d: ", v + 1);
        scanf("%d", &vetor[v]);
    }

    printf("\nOrdem contraria dos valores: ");

    for(int i = 9; i >= 0; i--){
        printf("%d ", vetor[i]);
    }

    return 0;
}