#include <stdio.h>

int main(){

    double joao = 1.7, jose = 1.1;
    int ano = 0;

    while(jose < joao){
        joao += 0.02;
        jose += 0.03;
        ano++;
    }

    printf("Vao se passar %d anos ate Jose ser maior que Joao\n", ano);

    return 0;
}