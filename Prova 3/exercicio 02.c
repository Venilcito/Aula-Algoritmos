#include <stdio.h>

int buscabinaria(int lista[], int tam, int valor){
    int direita = tam - 1, esquerda = 0, meio;
    int encontrado = 0;

    while(esquerda <= direita && !encontrado){
        meio = (esquerda + direita) / 2;

        if(lista[meio] == valor){
            encontrado = 1;
        } else if(lista[meio] > valor){
            direita = meio - 1;
        } else{
            esquerda = meio + 1;
        }
    }

    return meio;
}

int main(){

    int vetor[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 120};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

    int valor;
    printf("Insira um valor: ");
    scanf("%d", &valor);

    int proximo = buscabinaria(vetor, tam, valor);

    printf("\nValores maiores ou iguais a %d:\n", valor);
    for(int i = proximo; i < tam; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");

    return 0;
}