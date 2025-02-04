#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); //coloquei isso pra gerar uma matriz diferente toda vez

    int matriz[5][5], pares = 0, impares = 0;

    printf("Matriz gerada aleatoriamente:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
            printf("%d\t", matriz[i][j]);

            if(matriz[i][j] % 2 == 0){
                pares++;
            } else{
                impares++;
            }
        }
        printf("\n");
    }

    printf("\nQuantidade de valores pares:   %d", pares);
    printf("\nQuantidade de valores impares: %d", impares);

    return 0;
}
