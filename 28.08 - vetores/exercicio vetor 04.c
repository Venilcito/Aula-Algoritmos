#include <stdio.h>

int main(){

    int vetor[10];

    for(int v = 0; v <= 9; v++){
        printf("Insira o valor %d: ", v + 1);
        scanf("%d", &vetor[v]);
    }

    int maior = vetor[1], menor = vetor[1];

    for(int i = 0; i <= 9; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}