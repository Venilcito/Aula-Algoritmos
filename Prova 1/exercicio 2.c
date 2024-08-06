#include <stdio.h>

int main(){

    double preco;
    printf("Insira o valor da compra:\nR$ ");
    scanf("%lf", &preco);

    if(preco >= 400){
        printf("Desconto de 20%%\n");
        printf("R$ %.2lf", preco * 0.8);
    } else if(preco >= 200){
        printf("Desconto de 10%%\n");
        printf("R$ %.2lf", preco * 0.9);
    } else if(preco >= 100){
        printf("Desconto de 5%%\n");
        printf("R$ %.2lf", preco * 0.95);
    } else {
        printf("Sem desconto\n");
        printf("R$ %.2lf", preco);
    }

    return 0;
}