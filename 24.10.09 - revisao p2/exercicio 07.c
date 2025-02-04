#include <stdio.h>

int main(){

    int tami, tamj;
    printf("Insira a altura da matriz:  ");
    scanf("%d", &tami);
    printf("Insira a largura da matriz: ");
    scanf("%d", &tamj);
    printf("\n");

    int matriz[tami][tamj], soma[tami];

    for(int i = 0; i < tami; i++){
        soma[i] = 0;
        printf("Insira os %d valores da linha %d: ", tamj, i + 1);
        for(int j = 0; j < tamj; j++){
            scanf("%d", &matriz[i][j]);
            soma[i] += matriz[i][j];
        }
    }
    printf("\n");

    for(int i = 0; i < tami; i++){
        printf("Soma dos elementos da linha %d: %d\n", i + 1, soma[i]);
    }

    return 0;
}
