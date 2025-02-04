#include <stdio.h>
#include <string.h>

int contador(char *x){
    int tamanho = strlen(x);
    return tamanho;
}

int main(){

    char numero[100];
    printf("Insira um valor inteiro: ");
    scanf("%s", numero);

    printf("Seu numero tem %d digitos\n", contador(numero));

    return 0;
}
