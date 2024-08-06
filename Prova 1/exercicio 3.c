#include <stdio.h>

int main(){

    double secreto = 7.53;
    double chute;
    printf("Adivinhe o numero certo entre 1.00 e 10.00:\n");
    scanf("%lf", &chute);

    if(chute < secreto){
        printf("Tente um numero maior...\n");
    } else if(chute > secreto){
        printf("Tente um numero menor...\n");
    } else {
        printf("Voce acertou!\n");
    }

    return 0;
}