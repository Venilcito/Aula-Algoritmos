#include <stdio.h>

int main(){
    int a, soma = 0;
    printf("Insira um inteiro: ");
    scanf("%d", &a);

    for(int j = 1; j < a; j++){
        if(a % j == 0){
            soma += j;
        }
    }

    if(soma == a){
        printf("%d e perfeito\n", a);
    } else{
        printf("%d nao e perfeito\n", a);
    }

    return 0;
}