#include <stdio.h>

int main() {
    int tamanho;
    printf("Insira o tamanho do triangulo: ");
    scanf("%d", &tamanho);

    // Calcular o número máximo de dígitos de um número na última linha
    int largura = tamanho;

    for(int i = 1; i <= tamanho; i++) {
        // Imprimir os espaços em branco à esquerda
        for(int j = 1; j <= (tamanho - i); j++) {
            printf(" ");
        }
        
        // Imprimir os números
        for(int i2 = 1; i2 <= i; i2++) {
            // Imprimir cada número com largura de campo de 'largura'
            printf("%*d ", largura, i2);
        }
        printf("\n");
    }

    return 0;
}
