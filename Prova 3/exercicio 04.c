#include <stdio.h>
#include <string.h>

void shakersort(char lista[10][10], int tam){
    char temp[10];
    for(int i = 0; i < tam / 2; i++){
        for(int j = i; j < tam - i - 1; j++){
            if(strcmp(lista[j], lista[j+1]) > 0){
                strcpy(temp, lista[j]);
                strcpy(lista[j], lista[j+1]);
                strcpy(lista[j+1], temp);
            }
        }
            
        for(int j = tam - i - 2; j > i; j--){
            if(strcmp(lista[j], lista[j-1]) < 0){
                strcpy(temp, lista[j]);
                strcpy(lista[j], lista[j-1]);
                strcpy(lista[j-1], temp);
            }
        }
    }
}

int main(){

    char vetor[10][10] = {"banana", "uva", "laranja", "abacaxi", "kiwi", "cereja"};
    int tam = 6;

    shakersort(vetor, tam);

    printf("Vetor Ordenado:\n\n");
    for(int i = 0; i < tam; i++){
        printf("%s\n", vetor[i]);
    }

    return 0;
}