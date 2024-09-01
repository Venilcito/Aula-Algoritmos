#include <stdio.h>
#include <string.h>

int main(){

    int idade, cont;
    char genero[2];

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Tempo de contribuicao: ");
    scanf("%d", &cont);
    printf("Genero (F/M): ");
    scanf("%s", genero);

    if(strcmp(genero, "M") == 0){
        if(cont < 35){
            printf("O tempo de contribuicao minimo para se aposentar e de 35 anos!\n");
        } else if(idade + cont >= 101){
            printf("Parabens, voce possui %d pontos e pode se aposentar!\n", idade + cont);
        } else{
            printf("Que pena, voce possui %d pontos, ainda nao pode se aposentar\n", idade + cont);
        }
    }
    if(strcmp(genero, "F") == 0){
        if(cont < 30){
            printf("O tempo de contribuicao minimo para se aposentar e de 35 anos!\n");
        } else if(idade + cont >= 91){
            printf("Parabens, voce possui %d pontos e pode se aposentar!\n", idade + cont);
        } else{
            printf("Que pena, voce possui %d pontos, ainda nao pode se aposentar\n", idade + cont);
        }
    }

    return 0;
}