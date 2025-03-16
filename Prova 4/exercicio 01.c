#include <stdio.h>

void shellsort(int vetor[], int n){
    int h;
    
    for(h = 1; h < n; h = h*3+1){}
    
    for(; h > 0; h = (h-1)/3){
        for(int i = h; i < n; i++){
            int temp = vetor[i];
            int j;
            
            for(j = i; j >= h && vetor[j-h] > temp; j -= h){
                vetor[j] = vetor[j-h];
            }
            
            vetor[j] = temp;
        }
    }
}

int main(){

    int hashes[] = {9874, 1234, 6589, 7891, 2000, 4321, 1009};
    int tam = sizeof(hashes)/sizeof(hashes[0]);
    
    shellsort(hashes, tam);
    
    printf("Hashes em ordem:\n");
    for(int i = 0; i < tam; i++){
        printf("%d  ", hashes[i]);
    }
    printf("\n");
    
    return 0;
}