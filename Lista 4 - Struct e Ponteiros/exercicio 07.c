#include <stdio.h>

int main(){

    int a, b;
    int *pont1, *pont2;
    
    printf("Insira dois inteiros: ");
    scanf("%d %d", &a, &b);

    pont1 = &a;
    pont2 = &b;

    if((void*)pont1 > (void*)pont2){
        printf("Maior endereco: %p (variavel 1)\n", (void*)pont1);
    } else{
        printf("Maior endereco: %p (variavel 2)\n", (void*)pont2);
    }

    return 0;
}