#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int dividir(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] < pivo){
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }

    trocar(&vetor[i + 1], &vetor[fim]);
    return (i + 1);
}

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim){
        int indicePivo = dividir(vetor, inicio, fim); 

        quickSort(vetor, inicio, indicePivo - 1);
        quickSort(vetor, indicePivo + 1, fim);
    }
}

int main(){
    
    int tempos[] = {945, 850, 720, 800, 765, 920, 890};
    int tam = sizeof(tempos)/sizeof(tempos[0]);
    
    quickSort(tempos, 0, tam - 1);
    
    printf("Tempos em ordem:\n");
    for(int i = 0; i < tam; i++){
        printf("%d  ", tempos[i]);
    }
    printf("\n");
    
    return 0;
}