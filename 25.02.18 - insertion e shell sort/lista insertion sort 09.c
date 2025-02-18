#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int vetor[], int n){
    int temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void insertionsort(int vetor[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = vetor[i];
        j = i - 1;
        
        while(j >= 0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = key;
    }
}

int main(){
    
    int vetor1[1000], vetor2[1000];

    srand(time(NULL));

    for (int i = 0; i < 1000; i++){
        vetor1[i] = rand() % 10000;
        vetor2[i] = vetor1[i];
    }

    clock_t inicio = clock();
    insertionsort(vetor1, 1000);
    clock_t fim = clock();
    printf("Tempo do Insertion Sort: %.6f segundos\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);

    clock_t inicio2 = clock();
    bubblesort(vetor2, 1000);
    clock_t fim2 = clock();
    printf("Tempo do Bubble Sort:    %.6f segundos\n", ((double)(fim2 - inicio2)) / CLOCKS_PER_SEC);
    
    return 0;
}