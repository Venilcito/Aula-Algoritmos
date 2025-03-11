#include <stdio.h>

int main(){

    int numero, maior = 0;
    printf("Maior entre 10 numeros:\n\n");

    for(int i = 1; i <= 10; i++){
        printf("Insira o valor %d: ", i);
        scanf("%d", &numero);

        if(numero > maior){
            maior = numero;
        }
    }

    printf("\nO maior valor e %d\n", maior);

    return 0;
}