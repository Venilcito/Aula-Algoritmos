#include <stdio.h>

int main(){

    double saldo;
    printf("Insira seu saldo medio: ");
    scanf("%lf", &saldo);

    int saldoint = saldo;

    switch(saldoint){
        case 0 ... 200:
            printf("Credito: R$ 0.00\n");
            break;
        case 201 ... 400:
            printf("Credito: R$ %.2lf\n", saldo * 0.2);
            break;
        case 401 ... 600:
            printf("Credito: R$ %.2lf\n", saldo * 0.3);
            break;
        default:
            printf("Credito: R$ %.2lf\n", saldo * 0.4);
    }

    return 0;
}