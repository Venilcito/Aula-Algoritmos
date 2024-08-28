#include <stdio.h>

int main(){

    int vetor[10];
    int numero = 0;

    for(int v = 0; v <= 9; v++){
        int valor;
        printf("Insira o valor %d: ", v + 1);
        scanf("%d", &valor);

        if (numero == 0 || valor != vetor[numero - 1]) {
            vetor[numero] = valor;
            numero++;
        }
    }

    printf("Vetor sem numeros duplicados: ");
    for (int i = 0; i < numero; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}