#include <stdio.h>

int main(){

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int *ponteiro;
    ponteiro = &matriz[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: %d, armazenado em %p\n", i, j, *(ponteiro + i * 3 + j), (void*)(ponteiro + 1 * 3 + j));
        }
    }

    return 0;
}
