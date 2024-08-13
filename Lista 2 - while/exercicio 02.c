#include <stdio.h>

int main(){

    int a, i = 1;
    printf("Insira um valor: ");
    scanf("%d", &a);

    printf("Impar | Par\n");

    while(i <= a){
        printf("%d\t", i);
        if(i + 1 <= a){
            printf("%d\n", i + 1);
        }
        i += 2;
    }

    return 0;
}