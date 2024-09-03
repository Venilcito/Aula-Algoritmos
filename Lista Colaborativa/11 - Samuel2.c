#include <stdio.h>

int main(){

    int x, z, somas = 1;

    printf("Insira o valor X: ");
    scanf("%d", &x);
    printf("Insira o valor Z: ");
    scanf("%d", &z);

    int aux = x;

    while(z <= x){
        printf("Valor invalido para Z! (Precisa ser maior que X)\n");
        printf("Insira o valor Z: ");
        scanf("%d", &z);
    }

    while(x <= z){
        x += aux + 1;
        somas++;
        aux++;
    }

    printf("Somas para X ultrapassar Z: %d\n", somas);

    return 0;
}
