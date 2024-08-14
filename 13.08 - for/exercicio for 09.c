#include <stdio.h>

int main(){

    double nota, media = 0;

    for(int i = 1; i <= 10; i++){
        printf("Insira a nota %d: ", i);
        scanf("%lf", &nota);

        media += nota;
    }

    media = media / 10;
    printf("Media: %.2lf", media);

    return 0;
}