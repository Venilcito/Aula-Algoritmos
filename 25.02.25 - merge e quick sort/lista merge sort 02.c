#include <stdio.h>
#include <stdlib.h>

int intercala(int inicio, int meio, int fim, int vetor[]){
    int *ponteiro;
    ponteiro = malloc((fim - inicio) * sizeof(int));
    
    int indiceEsquerda = inicio, indiceDireita = meio;
    int indiceTemp = 0, trocas = 0;
    
    while(indiceEsquerda < meio && indiceDireita < fim){
        if(vetor[indiceEsquerda] <= vetor[indiceDireita]){
            ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
        } else{
            ponteiro[indiceTemp++] = vetor[indiceDireita++];
            trocas += (meio - indiceEsquerda);
        }
    }
    
    while(indiceEsquerda < meio){
        ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
    }
    
    while(indiceDireita < fim){
        ponteiro[indiceTemp++] = vetor[indiceDireita++];
    }
    
    for(indiceEsquerda = inicio; indiceEsquerda < fim; ++indiceEsquerda){
        vetor[indiceEsquerda] = ponteiro[indiceEsquerda - inicio];
    }
    
    free(ponteiro);
    return trocas;
}

int mergeSort(int vetor[], int inicio, int fim){
    int trocas = 0;
    if(inicio < fim - 1){
        int meio = (inicio + fim) / 2;

        trocas += mergeSort(vetor, inicio, meio);
        trocas += mergeSort(vetor, meio, fim);
        trocas += intercala(inicio, meio, fim, vetor);
    }
    return trocas;
}

int main(){
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

    int trocas = mergeSort(vetor, 0, tam);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("Quant. de Trocas: %d\n", trocas);
    
    return 0;
}