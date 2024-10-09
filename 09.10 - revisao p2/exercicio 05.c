#include <stdio.h>

int main(){

    int tami, tamj;
    printf("Insira a altura da matriz:  ");
    scanf("%d", &tami);
    printf("Insira a largura da matriz: ");
    scanf("%d", &tamj);
    printf("\n");

    int matriz[tami][tamj], maior = matriz[0][0];

    for(int i = 0; i < tami; i++){
        printf("Insira os %d valores da linha %d: ", tamj, i + 1);
        for(int j = 0; j < tamj; j++){
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    printf("\n");

    printf("Maior elemento da matriz: %d\n", maior);

    return 0;
}