#include <stdio.h>

int main(){

    int a = 10, b = 20;
    int *pont1, *pont2;

    pont1 = &a;
    pont2 = &b;

    if((void*)pont1 > (void*)pont2){
        printf("Maior endereco: %p (ponteiro 1)\n", (void*)pont1);
    } else{
        printf("Maior endereco: %p (ponteiro 2)\n", (void*)pont2);
    }

    return 0;
}