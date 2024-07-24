#include <stdio.h>

int main(){

    int codigo;
    printf("Insira o codigo de produto: ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1:
            printf("Alimento nao Perecivel\n");
            break;
        case 2:
            printf("Alimento Perecivel\n");
            break;
        case 3:
            printf("Vestuario\n");
            break;
        case 4:
            printf("Limpeza\n");
            break;
        default:
            printf("Codigo invalido!\n");
    }

    return 0;
}