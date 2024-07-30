#include <stdio.h>

int main(){

    int codigo;
    printf("Insira o codigo de produto: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            printf("Alimento nao-perecivel\n");
            break;
        case 2 ... 4:
            printf("Alimento perecivel\n");
            break;
        case 5 ... 6:
            printf("Vestuario\n");
            break;
        case 7:
            printf("Higiene pessoal\n");
            break;
        case 8 ... 15:
            printf("Limpeza e Utensilios Domesticos\n");
            break;
        default:
            printf("Codigo invalido!\n");
    }

    return 0;
}