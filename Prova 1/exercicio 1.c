#include <stdio.h>

int main(){

    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade < 12){
        printf("Preco do ingresso: R$ 5.00\n");
    } else if(idade < 18){
        printf("Preco do ingresso: R$ 10.00\n");
    } else if(idade < 60){
        printf("Preco do ingresso: R$ 20.00\n");
    } else {
        printf("Preco do ingresso: R$ 15.00\n");
    }

    return 0;
}