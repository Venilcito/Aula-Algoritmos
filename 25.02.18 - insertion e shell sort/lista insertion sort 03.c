#include <stdio.h>
#include <string.h>

void insertionsort(char vetor[10][10], int n){
    int i, j;
    char key[10];
    for(i = 1; i < n; i++){
        strcpy(key, vetor[i]);
        j = i - 1;
        
        while(j >= 0 && strcmp(vetor[j], key) > 0){
            strcpy(vetor[j+1], vetor[j]);
            j--;
        }
        strcpy(vetor[j+1], key);
    }
}

int main(){
    
    char vetor[10][10] = {"venilso", "samuel", "miotto", "thiago", "ithony", "alexandre"};
    int tam = 6;
    
    insertionsort(vetor, tam);
    
    printf("Ordem alfabetica:\n\n");
    for(int i = 0; i < tam; i++){
        printf("%s\n", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
