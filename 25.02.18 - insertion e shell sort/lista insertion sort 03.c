#include <stdio.h>
#include <string.h>

void insertionsort(char vetor[], int n){
    int i, j;
    char key;
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
    
    char vetor[] = {'b', 'd', 'e', 'a', 'c'};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    
    insertionsort(vetor, tam);
    
    printf("Vetor ordenado: ");
    for(int i = 0; i < tam; i++){
        printf("%c ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}