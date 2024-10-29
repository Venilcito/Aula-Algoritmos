#include <stdio.h>

void troca(int *num1, int *num2, int *num3){
    int aux;
    aux = *num3;
    *num3 = *num2;
    *num2 = *num1;
    *num1 = aux;
}

int main(){

    int a = 1, b = 2, c = 3;
    int *num1 = &a, *num2 = &b, *num3 = &c;

    troca(num1, num2, num3);

    printf("Numeros trocados:\n");
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n", *num1, *num2, *num3);

    return 0;
}