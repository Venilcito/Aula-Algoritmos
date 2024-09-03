#include <stdio.h>

int main(){

    int n, zero = 0, uma = 0, duas = 0, tres = 0;
    printf("Insira o tamanho do cubo: ");
    scanf("%d", &n);

    if(n > 1){
        tres = 8;
        duas = (n - 2) * 12;
        uma = (n - 2) * (n - 2) * 6;
        zero = (n - 2) * (n - 2) * (n - 2);

        printf("\n0 faces pintadas: %d\n", zero);
        printf("1 face pintada:   %d\n", uma);
        printf("2 faces pintadas: %d\n", duas);
        printf("3 faces pintadas: %d\n", tres);
    }else if(n == 1){
        printf("\n0 faces pintadas: 0\n");
        printf("1 face pintada:   0\n");
        printf("2 faces pintadas: 0\n");
        printf("3 faces pintadas: 0\n");
    } else{
        printf("Cubo com tamanho invalido!\n");
    }

    return 0;
}