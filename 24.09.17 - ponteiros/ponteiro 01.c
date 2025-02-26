#include <stdio.h>

int main(){

    int x = 10;
    int *ponteiro;
    ponteiro = &x;
    
    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);

    printf("Endereco armazenado no ponteiro: %p\n", (void*)ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
