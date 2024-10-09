#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char palavra[50];
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    bool palindromo = true;

    for(int i = 0; i < tamanho / 2; i++){
        if(palavra[i] != palavra[tamanho - 1 - i]){
            palindromo = false;
        }
    }

    if(palindromo){
        printf("A palavra e um palindromo\n");
    } else{
        printf("A palavra nao e um palindromo\n");
    }

    return 0;
}