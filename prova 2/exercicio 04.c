#include <stdio.h>

struct jogos{
    char nome[100];
    char genero[100];
    char plataf[100];
    int ano;
};

int main(){

    struct jogos vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Jogo %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", &vetor[i].nome);
        printf("Genero: ");
        scanf(" %[^\n]", &vetor[i].genero);
        printf("Plataforma: ");
        scanf(" %[^\n]", &vetor[i].plataf);
        printf("Lancamento: ");
        scanf("%d", &vetor[i].ano);
        printf("\n");
    }

    printf("\nLista completa de jogos:\n");
    for(int i = 0; i < 5; i++){
        printf("Jogo %d:\n", i + 1);
        printf("%s\t%s\t%s\t%d\n\n", vetor[i].nome, vetor[i].genero, vetor[i].plataf, vetor[i].ano);
    }

    return 0;
}