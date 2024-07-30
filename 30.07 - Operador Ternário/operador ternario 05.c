#include <stdio.h>

int main(){

    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    (idade < 18) ? printf("Voce nao e obrigado a votar\n") : printf("Voce e obrigado a votar!\n");

    return 0;
}