#include <stdio.h>

int main(){

    double graus;
    printf("Insira a temperatura: ");
    scanf("%lf", &graus);

    (graus <= 20) ? printf("Bah, mas que frio!\n") : printf("Nossa, muito calor!\n");

    return 0;
}