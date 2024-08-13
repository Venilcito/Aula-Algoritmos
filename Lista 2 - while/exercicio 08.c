#include <stdio.h>

int main(){

    int anos, idoso = 0, i = 1;
    
    while(i <= 10){
        printf("Insira a idade %d: ", i);
        scanf("%d", &anos);

        if(anos >= 18){
            idoso++;
        }

        i++;
    }

    printf("\n%d pessoas sao maiores de idade\n", idoso);

    return 0;
}