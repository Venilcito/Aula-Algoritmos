#include <stdio.h>

int main(){

    int intervalo;
    printf("Insira um intervalo: ");
    scanf("%d", &intervalo);

    for(int i = 0; i < intervalo; i++){
        printf("%d\n", 100 - i);
    }

    return 0;
}