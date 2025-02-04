#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteador(){

    srand(time(NULL));
    int vetor[10], maior = vetor[0], menor = vetor[0];

    for(int i = 0; i < 10; i++){
        vetor[i] = rand() % 100;

        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}

int main(){

    sorteador();

    return 0;
}
