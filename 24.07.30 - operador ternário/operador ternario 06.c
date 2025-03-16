#include <stdio.h>

int main(){

    int a, b;
    printf("Insira 2 valores: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Ordem crescente: %d, %d\n", b, a) : printf("Ordem crescente: %d, %d\n", a, b);

    return 0;
}