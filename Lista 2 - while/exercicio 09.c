#include <stdio.h>

int main(){

    int a, i = 0, ant2 = 0, ant = 1, b;
    printf("Insira a quantidade de valores: ");
    scanf("%d", &a);

    if(a >= 2){
        printf("%d\n%d\n", ant2, ant);
    } else{
        printf("%d\n", ant2);
    }

    while(i < a - 2){
        b = ant2 + ant;
        ant2 = ant;
        ant = b;
        printf("%d\n", b);

        i++;
    }

    return 0;
}