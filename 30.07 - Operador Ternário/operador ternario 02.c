#include <stdio.h>

int main(){

    int a, b;
    printf("Insira 2 numeros: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d e o maior\n", a) : printf("%d e o maior\n", b);

    return 0;
}