#include <stdio.h>
#include <string.h>

int mapear(char vetor[][10], int i){
    if(strcmp(vetor[i], "Do") == 0){return 1;}
    else if(strcmp(vetor[i], "Re") == 0){return 2;}
    else if(strcmp(vetor[i], "Mi") == 0){return 3;} 
    else if(strcmp(vetor[i], "Fa") == 0){return 4;} 
    else if(strcmp(vetor[i], "Sol") == 0){return 5;} 
    else if(strcmp(vetor[i], "La") == 0){return 6;} 
    else{return 7;}
}

void insertionsort(int vetor[], char notas[][10], int n){
    int i, key, j;
    char keychar[10];
    
    for(i = 1; i < n; i++){
        key = vetor[i];
        strcpy(keychar, notas[i]);
        j = i - 1;
        
        while(j >= 0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            strcpy(notas[j+1], notas[j]);
            j--;
        }
        
        vetor[j+1] = key;
        strcpy(notas[j+1], keychar);
    }
}

int main(){
    
    char notas[][10] = {"Sol", "Mi", "Do", "La", "Fa", "Si", "Re"};
    int tam = 7, notasint[7];
    
    for(int i = 0; i < tam; i++){
        notasint[i] = mapear(notas, i);
    }
    
    insertionsort(notasint, notas, tam);
    
    printf("Notas em ordem:\n");
    for(int i = 0; i < tam; i++){
        printf("%s  ", notas[i]);
    }
    printf("\n");
    
    return 0;
}