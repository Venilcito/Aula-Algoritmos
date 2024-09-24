#include <stdio.h>

int main(){

    double matriz[3][3] = {
        {9.1, 2.4, 3.2},
        {9.9, 8.8, 7.7},
        {1.2, 3.4, 5.6}
    };
    double *ponteiro;
    ponteiro = &matriz[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: endereco %p\n", i + 1, j + 1, (void*)(ponteiro + 1 * 3 + j));
        }
    }

    return 0;
}