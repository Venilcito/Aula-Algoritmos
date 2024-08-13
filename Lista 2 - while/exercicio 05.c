#include <stdio.h>

int main(){

    int a, i = 1;
    printf("Insira um valor: ");
    scanf("%d", &a);

    while(i <= 10){
        printf("%d * %d = %d\n", a, i, a * i);
        i++;
    }

    return 0;
}