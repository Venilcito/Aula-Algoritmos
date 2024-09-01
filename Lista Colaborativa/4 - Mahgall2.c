#include <stdio.h>

int main(){

    int a, b, c;
    printf("Insira 3 inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    (a > b && a > c) ? printf("Maior: %d\n", a) : (b > a && b > c) ? printf("Maior: %d\n", b) : printf("Maior: %d\n", c);
    (a < b && a < c) ? printf("Menor: %d\n", a) : (b < a && b < c) ? printf("Menor: %d\n", b) : printf("Menor: %d\n", c);

    return 0;
}