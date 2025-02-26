#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercala(int inicio, int meio, int fim, char vetor[10][10]){
    char ponteiro[fim - inicio][10];
    
    int indiceEsquerda = inicio, indiceDireita = meio;
    int indiceTemp = 0;
    
    while(indiceEsquerda < meio && indiceDireita < fim){
        if(strcmp(vetor[indiceEsquerda], vetor[indiceDireita]) <= 0){
            strcpy(ponteiro[indiceTemp++], vetor[indiceEsquerda++]);
        } else{
            strcpy(ponteiro[indiceTemp++], vetor[indiceDireita++]);
        }
    }
    
    while(indiceEsquerda < meio){
        strcpy(ponteiro[indiceTemp++], vetor[indiceEsquerda++]);
    }
    
    while(indiceDireita < fim){
        strcpy(ponteiro[indiceTemp++], vetor[indiceDireita++]);
    }
    
    for(indiceEsquerda = inicio; indiceEsquerda < fim; ++indiceEsquerda){
        strcpy(vetor[indiceEsquerda], ponteiro[indiceEsquerda - inicio]);
    }
}

void mergeSort(char vetor[][10], int inicio, int fim){
    if(inicio < fim - 1){
        int meio = (inicio + fim) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio, fim);
        intercala(inicio, meio, fim, vetor);
    }
}

int main(){
    char vetor[10][10] = {"venilso", "samuel", "miotto", "thiago", "ithony", "alexandre"};
    int tam = 6;

    mergeSort(vetor, 0, tam);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tam; i++) {
        printf("%s\n", vetor[i]);
    }
    
    return 0;
}