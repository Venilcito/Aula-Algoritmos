#include <stdio.h>

int main(){

    int a;
    printf("Insira um valor inteiro: ");
    scanf("%d", &a);

    (a >= 0) ? printf("Numero positivo\n") : printf("Numero negativo\n");

    return 0;
}