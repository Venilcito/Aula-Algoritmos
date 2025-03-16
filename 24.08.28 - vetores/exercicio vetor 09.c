#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[50], palavra2[50];
    printf("Insira a palavra 1: ");
    scanf("%s", palavra1);
    printf("Insira a palavra 2: ");
    scanf("%s", palavra2);

    if(strcmp(palavra1, palavra2) == 0){
        printf("\nAs duas palavras sao iguais!\n");
    } else{
        printf("\nAs duas palavras sao diferentes!\n");
    }

    return 0;
}