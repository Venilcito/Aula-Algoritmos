#include <stdio.h>

double soma();
double subtracao();
double multiplicacao();
double divisao();

int main(){

    double x, y;
    char operacao;

    printf("Calculadora basica para 2 valores (+ - * /)\n\n");
    printf("Insira uma expressao (ex: 1 + 1): ");
    scanf("%lf %c %lf", &x, &operacao, &y);

    switch(operacao){
        case '+':
            printf("\nResultado: %.2lf\n", soma(x, y));
            break;
        case '-':
            printf("\nResultado: %.2lf\n", subtracao(x, y));
            break;
        case '*':
            printf("\nResultado: %.2lf\n", multiplicacao(x, y));
            break;
        case '/':
            printf("\nResultado: %.2lf\n", divisao(x, y));
            break;
        default:
            printf("\nOperacao invalida!\n");
    }

    return 0;
}

double soma(double x, double y){
    double res = x + y;
    return res;
}

double subtracao(double x, double y){
    double res = x - y;
    return res;
}

double multiplicacao(double x, double y){
    double res = x * y;
    return res;
}

double divisao(double x, double y){
    double res = x / y;
    return res;
}