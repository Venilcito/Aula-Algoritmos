#include <stdio.h>
#include <string.h>

void contrario(char palavra[100]){
    int tamanho = strlen(palavra);

    for(int i = tamanho - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
}

int main(){

    char palavra[100];
    printf("Insira uma palavra: ");
    scanf("%[^\n]", palavra);

    printf("\nPalavra ao contrario: ");
    contrario(palavra);

    return 0;
}