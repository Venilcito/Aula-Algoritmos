#include <stdio.h>

int main(){

    int a, i = 0;
    printf("Insira um valor: ");
    scanf("%d", &a);

    while(i <= a){
        printf("%d\n", a - i);
        i += 5;
    }

    return 0;
}