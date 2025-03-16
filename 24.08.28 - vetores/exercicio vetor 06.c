#include <stdio.h>

int main(){

    int vetor[15];
    int pares = 0, impares = 0;

    for(int v = 0; v <= 14; v++){
        printf("Insira o valor %d: ", v + 1);
        scanf("%d", &vetor[v]);
    }

    for(int i = 0; i <= 14; i++){
        (vetor[i] % 2 == 0) ? pares++ : impares++;
    }

    printf("Numero de pares:   %d\n", pares);
    printf("Numero de impares: %d\n", impares);

    return 0;
}