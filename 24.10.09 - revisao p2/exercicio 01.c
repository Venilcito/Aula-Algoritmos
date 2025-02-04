#include <stdio.h>

int main(){

    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];
    printf("Insira os %d valores do vetor: ", tam);
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }
    printf("\n");

    printf("Vetor invertido: ");
    for(int i = tam - 1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
