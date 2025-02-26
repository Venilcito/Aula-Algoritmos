#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int dividir(int vetor[], int inicio, int fim, int *trocas) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++){
        (*trocas)++;
        if (vetor[j] < pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }

    trocar(&vetor[i + 1], &vetor[fim]);
    return (i + 1);
}

void quickSort(int vetor[], int inicio, int fim, int *trocas) {
    if (inicio < fim) {
        int indicePivo = dividir(vetor, inicio, fim, trocas);

        quickSort(vetor, inicio, indicePivo - 1, trocas);
        quickSort(vetor, indicePivo + 1, fim, trocas);
    }
}

int main() {
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int trocas = 0;

    quickSort(vetor, 0, n - 1, &trocas);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Quant. de comparacoes: %d\n", trocas);

    return 0;
}