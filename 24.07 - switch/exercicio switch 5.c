#include <stdio.h>

int main(){

    int codigo;
    printf("Insira o codigo do produto: ");
    scanf("%d",&codigo);

    switch (codigo){
    case 1:
        printf("Produto: Arroz\n");
        printf("Preco: R$ 29.90\n");
        break;
    case 2:
        printf("Produto: Feijao\n");
        printf("Preco: R$ 7.99\n");
        break;
    case 3:
        printf("Produto: Bolacha\n");
        printf("Preco: R$ 1.75\n");
        break;
    case 4:
        printf("Produto: Copo Americano\n");
        printf("Preco: R$ 0.99\n");
        break;
    case 5:
        printf("Produto: Morangos\n");
        printf("Preco: R$ 6.25\n");
        break;
    case 6:
        printf("Produto: Cadeira de Praia\n");
        printf("Preco: R$ 65.45\n");
        break;
    case 7:
        printf("Produto: Pao Frances\n");
        printf("Preco: R$ 0.89\n");
        break;
    case 8:
        printf("Produto: Coca-Cola\n");
        printf("Preco: R$ 8.35\n");
        break;
    case 9:
        printf("Produto: Pao de Queijo\n");
        printf("Preco: R$ 1.51\n");
        break;
    case 10:
        printf("Produto: Cafe\n");
        printf("Preco: R$ 15.86\n");
        break;
    default:
        printf("Codigo invalido\n");
    }

    return 0;
}