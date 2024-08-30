#include <stdio.h>

int main(){

    double velocidade;
    printf("Insira a velocidade do carro: ");
    scanf("%lf", &velocidade);

    if(velocidade > 200){
        printf("Multa Gravissima!\n");
    } else if(velocidade > 150){
        printf("Multa Grave\n");
    } else if(velocidade > 120){
        printf("Multa Media\n");
    } else if(velocidade > 100){
        printf("Multa Leve\n");
    } else{
        printf("Sem multa, pode acelerar\n");
    }

    return 0;
}