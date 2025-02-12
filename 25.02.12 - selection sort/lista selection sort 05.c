#include <stdio.h>
#include <string.h>

void selectionsort(char vetor[], int n){
    int menor;
    char temp;
    for (int i = 0; i < n - 1; i++){
        menor = i;
        for (int j = i + 1; j < n; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        if (menor != i){
            temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    }
}

int main(){
    
    char vetor[6] = {'z', 'a', 'd', 'b', 'y', 'c'};
    selectionsort(vetor, 6);
    printf("Vetor ordenado: ");
    for (int i = 0; i < 6; i++) printf("%c ", vetor[i]);
    printf("\n");

    return 0;
}