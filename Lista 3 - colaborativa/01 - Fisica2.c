#include <stdio.h>

int main(){

    int n;
    printf("Insira um inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d * %d = %d\n", i, i, i * i);
    }

    return 0;
}