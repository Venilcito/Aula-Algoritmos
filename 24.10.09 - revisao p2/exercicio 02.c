#include <stdio.h>

int main(){

    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam], naorep[tam], repetido = 0, posicao = 0;
    printf("Insira os %d valores do vetor: ", tam);

    for(int v = 0; v < tam; v++){
        scanf("%d", &vetor[v]);
        repetido = 0;

        for (int i = 0; i < v; i++){
            if(vetor[v] == vetor[i]){
                repetido = 1;
            }
        }

        if(repetido == 0){
            naorep[posicao] = vetor[v];
            posicao++;
        }
    }

    printf("Vetor sem numeros repetidos: ");
    for(int w = 0; w < posicao; w++){
        printf("%d ", naorep[w]);
    }
    printf("\n");

    return 0;
}
