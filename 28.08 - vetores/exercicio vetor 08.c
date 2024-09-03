#include <stdio.h>

int main(){

    int vetor[8];

    for(int v = 0; v <= 7; v++){
        printf("Insira o valor %d: ", v + 1);
        scanf("%d", &vetor[v]);
    }

    int aux = vetor[0];

    for(int i = 0; i <= 6; i++){
        vetor[i] = vetor[i + 1];
    }

    vetor[7] = aux;
    printf("Vetor rotacionado: ");

    for(int w = 0; w <= 7; w++){
        printf("%d ", vetor[w]);
    }
    printf("\n");

    return 0;
}