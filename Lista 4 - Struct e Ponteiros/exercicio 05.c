#include <stdio.h>

int main(){

    int    a = 5  , *pa;
    double b = 6.8, *pb;
    char   c = 'C', *pc;

    pa = &a;
    pb = &b;
    pc = &c;

    printf("Antes:\n\n");
    printf("Valor inteiro: %d\n", *pa);
    printf("Endereco: %p\n", (void*)pa);
    printf("Valor real: %.1lf\n", *pb);
    printf("Endereco: %p\n", (void*)pb);
    printf("Valor char: %c\n", *pc);
    printf("Endereco: %p\n\n", (void*)pc);

    *pa = 2;
    *pb = 8.3;
    *pc = 'F';

    printf("Depois:\n\n");
    printf("Valor inteiro: %d\n", *pa);
    printf("Endereco: %p\n", (void*)pa);
    printf("Valor real: %.1lf\n", *pb);
    printf("Endereco: %p\n", (void*)pb);
    printf("Valor char: %c\n", *pc);
    printf("Endereco: %p\n", (void*)pc);

    return 0;
}