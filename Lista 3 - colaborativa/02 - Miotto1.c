#include <stdio.h>

int main(){

    int rep;
    printf("Insira a quantidade de casos de teste: ");
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        int a, b, rep2 = 0, soma = 0;
        printf("Insira um numero e a quantidade de impares: ");
        scanf("%d %d", &a, &b);

        while(rep2 < b){
            if(a % 2 != 0){
                soma += a;
                rep2++;
            }
            a++;
        }

        printf("Soma dos %d proximos impares: %d\n", b, soma);
    }

    return 0;
}