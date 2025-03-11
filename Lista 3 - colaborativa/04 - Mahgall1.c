#include <stdio.h>

int main() {
    int tamanho;
    printf("Insira o tamanho do triangulo: ");
    scanf("%d", &tamanho);

    for(int i = 1; i <= tamanho; i++){
        for(int i2 = 1; i2 <= tamanho - i; i2++) {
            printf("  ");
        }
        
        for(int i3 = 1; i3 <= i; i3++) {
            printf("%d ", i3);
        }

        printf("\n");
    }

    return 0;
}
