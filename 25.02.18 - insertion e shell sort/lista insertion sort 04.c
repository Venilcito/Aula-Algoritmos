#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
} pessoa;

void insertionsort(pessoa vetor[], int n){
    int i, j;
    pessoa key;
    for(i = 1; i < n; i++){
        key = vetor[i];
        j = i - 1;
        
        while(j >= 0 && vetor[j].idade > key.idade){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = key;
    }
}

int main(){
    
    pessoa vetor[] = {
        {"Meupai", 55},
        {"Thiago", 19},
        {"Vinicius", 18},
        {"Matusalem", 329}
    };
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    
    insertionsort(vetor, tam);
    
    printf("Ordem crescente de idades:\n");
    for (int i = 0; i < tam; i++) {
        printf("%s - %d\n", vetor[i].nome, vetor[i].idade);
    }
    printf("\n");
    
    return 0;
}