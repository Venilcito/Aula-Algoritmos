#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

typedef struct{
    char itens[MAX];
    int topo;
} Pilha;

void iniciar(Pilha *ponteiro){
    ponteiro->topo = -1;
}

int vazio(Pilha *ponteiro){
    return ponteiro->topo == -1;
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

int topo(Pilha *ponteiro){
    return ponteiro->itens[ponteiro->topo];
}

int remover(Pilha *ponteiro){
    if(vazio(ponteiro)){
        return -1;
    }
    return ponteiro->itens[ponteiro->topo--];
}

int main(){
    
    Pilha pilha;
    iniciar(&pilha);

    char palavra[MAX];
    bool palindromo = true;
    printf("Insira uma palavra: ");
    scanf(" %[^\n]", palavra);

    int tamanho = strlen(palavra);
    for(int i = 0; i < tamanho; i++){
        inserir(&pilha, palavra[i]);
    }

    for(int i = 0; i < tamanho; i++){
        if(topo(&pilha) != palavra[i]){
            palindromo = false;
        }
        remover(&pilha);
    }

    mostrar(&pilha);
    palindromo ? printf("Sua palavra e um palindromo\n") : printf("Sua palavra nao e um palindromo\n");

    return 0;
}