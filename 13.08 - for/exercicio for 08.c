#include <stdio.h>

int main(){

    int a, ant2 = 0, ant = 1, b;
    printf("Insira a quantidade de valores: ");
    scanf("%d", &a);

    (a >= 2) ? printf("%d\t%d\t", ant2, ant) : printf("%d\t", ant2);

    for(int i = 0; i < a - 2; i++){
        b = ant2 + ant;
        ant2 = ant;
        ant = b;
        printf("%d\t", b);
    }

    return 0;
}