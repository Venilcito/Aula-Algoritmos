#include <stdio.h>

int main(){

    int x, y, soma = 0;
    printf("Insira dois inteiros: ");
    scanf("%d %d", &x, &y);

    if(x > y){
        int aux;
        aux = x;
        x = y;
        y = aux;
    }

    for(int i = x; i <= y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("Soma dos impares entre %d e %d: %d", x, y, soma);

    return 0;
}