#include <stdio.h>

int main(){

    int vetor[10], naorep[10], repetido = 0, posicao = 0;

    for(int v = 0; v < 10; v++){
        printf("Insira o valor %d: ", v + 1);
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
