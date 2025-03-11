#include <stdio.h>

int main(){

    int a, b;
    printf("Insira o valor 1: ");
    scanf("%d", &a);
    printf("Insira o valor 2: ");
    scanf("%d", &b);

    if(a > b){
        int temp = b;
        b = a;
        a = temp;
    }

    int mdc = a, b2 = b;

    while(b != 0){
        int temp = b;
        b = mdc % b;
        mdc = temp;
    }

    int mmc = (a * b2) / mdc;

    printf("MDC = %d\n", mdc);
    printf("MMC = %d\n", mmc);

    return 0;
}