#include <stdio.h>

int main(){

    int secreto, tentativa;
    printf("Digite o numero secreto (1 - 100): ");
    scanf("%d", &secreto);

    if(secreto >= 1 && secreto <= 100){
        printf("\n\n\n\n\n\n\n\n\n\nJogador 2, descubra o numero secreto! Voce tem 5 tentativas\n");

        for(int i = 1; i <= 5; i++){
            printf("Tentativa %d: ", i);
            scanf("%d", &tentativa);

            if(i < 5 && tentativa < secreto){
                printf("Tente um numero maior...\n");
            } else if(tentativa > secreto){
                printf("Tente um numero menor...\n");
            } else if(tentativa == secreto){
                printf("Voce acertou! Parabens!\n");
                break;
            } else if(tentativa != secreto){
                printf("Que pena, voce nao conseguiu acertar... O numero e %d", secreto);
            }
        }

    } else{
        printf("Ta de sacanagem po?\n");
    }

    return 0;
}