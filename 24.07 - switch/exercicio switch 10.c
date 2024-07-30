#include <stdio.h>

int main(){

    printf("Codigo | Produto\n");
    printf("100    | Cachorro Quente\n");
    printf("101    | Bauru Simples\n");
    printf("102    | Bauru com Ovo\n");
    printf("103    | Hamburguer\n");
    printf("104    | Cheeseburger\n");
    printf("105    | Refrigerante\n\n");

    int codigo;
    printf("Insira o codigo de produto: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 100:
            printf("Cachorro Quente: R$ 1,70\n");
            break;
        case 101:
            printf("Bauru Simples: R$ 2,30\n");
            break;
        case 102:
            printf("Bauru com Ovo: R$ 2,60\n");
            break;
        case 103:
            printf("Hamburguer: R$ 2,40\n");
            break;
        case 104:
            printf("Cheeseburger: R$ 2,50\n");
            break;
        case 105:
            printf("Refrigerante: R$ 1,00\n");
            break;
        default:
            printf("Codigo Invalido!\n");
    }

    return 0;
}