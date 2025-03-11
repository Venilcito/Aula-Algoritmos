#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100];
    char *ponteiro = palavra;
    int vogais = 0, consoantes = 0;

    printf("Insira uma palavra: ");
    scanf("%s", ponteiro);

    int tamanho = strlen(ponteiro);
    for(int i = 0; i < tamanho; i++){
        if(ponteiro[i] == 'a' || ponteiro[i] == 'e' || ponteiro[i] == 'i' || ponteiro[i] == 'o' || ponteiro[i] == 'u' ||
           ponteiro[i] == 'A' || ponteiro[i] == 'E' || ponteiro[i] == 'I' || ponteiro[i] == 'O' || ponteiro[i] == 'U'){
            vogais++;
        } else{
            consoantes++;
        }
    }

    printf("Sua palavra tem %d consoantes e %d vogais\n", consoantes, vogais);

    return 0;
}