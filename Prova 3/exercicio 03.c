#include <stdio.h>

void bubblesort(float lista[], int tam){
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam - i - 1; j++){
            if(lista[j] < lista[j+1]){
                float temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
}

int main(){

    float notas[] = {7.5, 8.0, 6.2, 9.1, 5.8, 7.0, 8.7};
    int tam = sizeof(notas)/sizeof(notas[0]);

    bubblesort(notas, tam);

    printf("Ranking das notas:\n");
    for(int i = 0; i < tam; i++){
        printf("%.1f\t", notas[i]);
    }
    printf("\n");

    return 0;
}