#include <stdio.h>

int main(){

    int numero, i = 1;
    printf("Insira um inteiro positivo: ");
    scanf("%d", &numero);

    for(numero = numero; numero > 0; numero--){
        i = numero * i;
    }

    if(numero < 0){
        printf("Numero negativo!\n");
    } else{
        printf("Fatorial = %d\n", i);
    }

    return 0;
}