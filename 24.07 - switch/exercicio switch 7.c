#include <stdio.h>

int main(){

    int numero;
    printf("Insira um numero qualquer: ");
    scanf("%d", &numero);

    switch (numero){
        case 1 ... 9:
            printf("Unidade\n");
            break;
        case 10 ... 99:
            printf("Dezena\n");
            break;
        case 100 ... 999:
            printf("Centena\n");
            break;
        case 1000 ... 9999:
            printf("Milhar\n");
            break;
        case 10000 ... 99999:
            printf("Dezena de Milhar\n");
            break;
        case 100000 ... 999999:
            printf("Centena de Milhar\n");
            break;
        default:
            printf("Milhao\n");
    }

    return 0;
}