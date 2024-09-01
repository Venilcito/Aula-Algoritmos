#include <stdio.h>

int main(){

    int editora;
    double quant;

    printf("      Editora        |  Codigo\n");
    printf("Companhia das Letras |    1\n");
    printf("Intrinseca           |    2\n");
    printf("Darkside             |    3\n\n");
    printf("De qual editora deseja comprar?\n");
    scanf("%d", &editora);

    printf("Quantos livros vai comprar?\n");
    scanf("%lf", &quant);

    switch (editora)
    {
    case 1:
        printf("Valor total a ser pago com desconto: R$ %.2lf\n", quant * 55 * 0.7);
        break;
    case 2:
        printf("Valor total a ser pago com desconto: R$ %.2lf\n", quant * 64 * 0.8);
        break;
    case 3:
        printf("Valor total a ser pago com desconto: R$ %.2lf\n", quant * 70 * 0.95);
        break;
    default:
        printf("Codigo de editora invalido!\n");
    }

    return 0;
}