#include <stdio.h>
#include <string.h>

int main(){

    double preco;
    char nacional[4];
    printf("Insira o valor da sua compra: ");
    scanf("%lf", &preco);
    printf("Produto nacional? (sim/nao) ");
    scanf("%s", nacional);

    if(strcmp(nacional, "sim") == 0){
        printf("Imposto de 15%%: %.2lf\n", preco * 1.15);
    } else{
        printf("Imposto de 30%%: %.2lf\n", preco * 1.3);
    }

    return 0;
}