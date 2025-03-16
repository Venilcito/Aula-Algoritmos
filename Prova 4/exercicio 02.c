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

    int pesos[] = {88, 120, 75, 105, 95, 130, 60};
    int tam = sizeof(pesos)/sizeof(pesos[0]);

	mergeSort(pesos, 0, tam);

	printf("Senhas em ordem crescente:\n");
	for (int i = 0; i < tam; i++){
		printf("%d  ", pesos[i]);
	}
	printf("\n");
	 
    return 0;
}