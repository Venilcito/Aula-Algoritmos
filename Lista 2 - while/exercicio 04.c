#include <stdio.h>

int main(){

    int i = 1;
    double valor, maior = 0;

    while(i <= 10){
        printf("Insira o valor %d: ", i);
        scanf("%lf", &valor);

        if(valor > maior){
            maior = valor;
        }

        i++;
    }

    printf("\nMaior valor: %.2lf\n", maior);

    return 0;
}