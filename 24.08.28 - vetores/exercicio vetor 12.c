#include <stdio.h>

int main(){

    int razao, pa[10];
    printf("Insira o termo inicial: ");
    scanf("%d", &pa[0]);
    printf("Insira a razao: ");
    scanf("%d", &razao);

    printf("Progressao aritmetica: ");
    for(int i = 0; i < 10; i++){
        pa[i + 1] = pa[i] + razao;
        printf("%d ", pa[i]);
    }
    printf("\n");

    return 0;
}