#include <stdio.h>

int main(){

    int vetor[10];
    int soma = 0;

    for(int v = 0; v <= 9; v++){
        printf("Insira o valor %d: ", v + 1);
        scanf("%d", &vetor[v]);
    }

    for(int i = 0; i <= 9; i++){
        soma += vetor[i];
    }
    
    printf("\nSoma dos valores: %d\n", soma);

    return 0;
}