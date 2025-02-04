#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50];
    printf("Escreva uma palavra:  ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("Palavra ao contrario: ");
    for(int i = tamanho; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
