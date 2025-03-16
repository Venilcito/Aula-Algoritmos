#include <stdio.h>

int main(){

    double salario;
    printf("Insira seu salario: ");
    scanf("%lf", &salario);

    (salario < 2500) ? printf("Voce vai receber um aumento!\n") : printf("Voce nao vai receber um aumento\n");

    return 0;
}