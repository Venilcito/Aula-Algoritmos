#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct{
    char itens[MAX];
    int topo;
} Pilha;

void iniciar(Pilha *ponteiro){
    ponteiro->topo = -1;
}

void mostrar(Pilha *ponteiro){
    for(int i = ponteiro->topo; i >= 0; i--){
        printf("%c", ponteiro->itens[i]);
    }
    printf("\n");
}

void inserir(Pilha *ponteiro, char valor){
    ponteiro->itens[++ponteiro->topo] = valor;
}

int main(){
    
    Pilha pilha;
    iniciar(&pilha);

    char palavra[MAX];
    printf("Insira uma palavra: ");
    scanf("%[^\n]", palavra);

    int tamanho = strlen(palavra);
    for(int i = 0; i < tamanho; i++){
        inserir(&pilha, palavra[i]);
    }

    printf("Palavra invertida:  ");
    mostrar(&pilha);

    return 0;
}
