#include <stdio.h>

int main(){
    
    int a, b;
    char operacao;
    printf("Insira uma conta entre 2 inteiros:\n");
    scanf("%d %c %d", &a, &operacao, &b);

    switch (operacao){
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        printf("%d\n", a / b);
        break;
    default:
        printf("Nao e uma operacao valida\n");
    }

    return 0;
}