#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} aluno;

void intercala(int inicio, int meio, int fim, aluno vetor[]) {
    aluno *ponteiro = malloc((fim - inicio) * sizeof(aluno));
    
    int indiceEsquerda = inicio, indiceDireita = meio;
    int indiceTemp = 0;
    
    while (indiceEsquerda < meio && indiceDireita < fim) {
        if (vetor[indiceEsquerda].nota <= vetor[indiceDireita].nota) {
            ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
        } else {
            ponteiro[indiceTemp++] = vetor[indiceDireita++];
        }
    }
    
    while (indiceEsquerda < meio) {
        ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
    }
    
    while (indiceDireita < fim) {
        ponteiro[indiceTemp++] = vetor[indiceDireita++];
    }
    
    for (indiceEsquerda = inicio; indiceEsquerda < fim; ++indiceEsquerda) {
        vetor[indiceEsquerda] = ponteiro[indiceEsquerda - inicio];
    }
    
    free(ponteiro);
}

void mergeSort(aluno vetor[], int inicio, int fim) {
    if (inicio < fim - 1) {
        int meio = (inicio + fim) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio, fim);
        intercala(inicio, meio, fim, vetor);
    }
}

int main() {
    aluno vetor[] = {
        {"Miotto", 19, 9.5}, 
        {"Thiago", 19, 6.8}, 
        {"Vinicius", 18, 7.1}, 
        {"Samuel", 18, 2.2} 
    };
    int tam = sizeof(vetor) / sizeof(vetor[0]);

    mergeSort(vetor, 0, tam);

    printf("Ordem crescente de notas:\n\n");
    for (int i = 0; i < tam; i++) {
        printf("%s, %d anos - %.1f\n", vetor[i].nome, vetor[i].idade, vetor[i].nota);
    }
    
    return 0;
}