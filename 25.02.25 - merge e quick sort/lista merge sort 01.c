#include <stdio.h>
#include <stdlib.h>

void intercala(int inicio, int meio, int fim, int vetor[]){
    int *ponteiro;
    ponteiro = malloc((fim - inicio) * sizeof(int));
    
    int indiceEsquerda = inicio, indiceDireita = meio;
    int indiceTemp = 0;
    
    while(indiceEsquerda < meio && indiceDireita < fim){
        if(vetor[indiceEsquerda] <= vetor[indiceDireita]){
            ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
        } else{
            ponteiro[indiceTemp++] = vetor[indiceDireita++];
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
}

void mergeSort(int vetor[], int inicio, int fim){
    if(inicio < fim - 1){
        int meio = (inicio + fim) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio, fim);
        intercala(inicio, meio, fim, vetor);
    }
}

int main(){
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

	mergeSort(vetor, 0, tam);

	printf("Vetor ordenado: ");
	for (int i = 0; i < tam; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	 
    return 0;
}