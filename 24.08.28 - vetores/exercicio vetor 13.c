#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50], letra1, letra2;
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    printf("Insira uma letra para substituir: ");
    scanf(" %c", &letra1);
    printf("Substituir \"%c\" por: ", letra1);
    scanf(" %c", &letra2);

    int tamanho = strlen(palavra);
    for(int i = 0; i <= tamanho; i++){
        if(palavra[i] == letra1){
            palavra[i] = letra2;
        }
    }

    printf("Palavra com letra substituida: ");
    printf("%s", palavra);

    return 0;
}