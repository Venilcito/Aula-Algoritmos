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

int mergeSort(int vetor[], int inicio, int fim, int prof) {
    if (inicio >= fim - 1) {
        return prof;
    }

    int meio = (inicio + fim) / 2;

    int esquerda = mergeSort(vetor, inicio, meio, prof + 1);
    int direita = mergeSort(vetor, meio, fim, prof + 1);

    intercala(inicio, meio, fim, vetor);

    return (esquerda > direita) ? esquerda : direita;
}

int main(){
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

	int profundidade = mergeSort(vetor, 0, tam, 1);

	printf("Vetor ordenado: ");
	for (int i = 0; i < tam; i++){
		printf("%d ", vetor[i]);
	}
	printf("\nProfundidade maxima: %d\n", profundidade);
	 
    return 0;
}