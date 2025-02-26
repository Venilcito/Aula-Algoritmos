#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} pessoa;

void trocar(pessoa *a, pessoa *b) {
    pessoa temp = *a;
    *a = *b;
    *b = temp;
}

int dividir(pessoa vetor[], int inicio, int fim) {
    pessoa pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j].salario < pivo.salario){
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }

    trocar(&vetor[i + 1], &vetor[fim]);
    return (i + 1);
}

void quickSort(pessoa vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int indicePivo = dividir(vetor, inicio, fim);

        quickSort(vetor, inicio, indicePivo - 1);
        quickSort(vetor, indicePivo + 1, fim);
    }
}

int main() {
    pessoa vetor[] = {
        {"Miotto", 19, 1600},
        {"Thiago", 19, 2025.50},
        {"Vinicius", 18, 1234.56},
        {"Samuel", 18, 3214.21}
    };
    int n = sizeof(vetor) / sizeof(vetor[0]);

    quickSort(vetor, 0, n - 1);

    printf("Ordem crescente de salario:\n\n");
    for (int i = 0; i < n; i++) {
        printf("%s, %d anos - %.2f\n", vetor[i].nome, vetor[i].idade, vetor[i].salario);
    }

    return 0;
}