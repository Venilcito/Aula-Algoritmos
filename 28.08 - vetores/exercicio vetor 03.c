#include <stdio.h>

int main(){

    double vetor[10];
    double media = 0;

    for(int v = 0; v <= 9; v++){
        printf("Insira o valor %d: ", v + 1);
        scanf("%lf", &vetor[v]);
    }

    for(int i = 0; i <= 9; i++){
        media += vetor[i];
    }
    
    printf("\nMedia dos valores: %.2lf\n", media / 10);

    return 0;
}