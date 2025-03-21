#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
    int itens[MAX];
    int topo;
} Pilha;

void iniciarPilha(Pilha *ponteiro){
    ponteiro->topo = -1;
}

int estaCheia(Pilha *ponteiro){
    return ponteiro->topo == MAX - 1;
}

int estaVazia(Pilha *ponteiro){
    return ponteiro->topo == -1;
}

void push(Pilha *ponteiro, int valor){
    if(estaCheia(ponteiro)){
        printf("Pilha cheia! Nao foi possivel inserir o valor %d\n", valor);
        return;
    }

    ponteiro->itens[++ponteiro->topo] = valor;
    printf("Elemento %d inserido\n", valor);
}

int pop(Pilha *ponteiro){
    if(estaVazia(ponteiro)){
        printf("Pilha vazia! Nao ha elementos para remover\n");
        return -1;
    }

    return ponteiro->itens[ponteiro->topo--];
}

int topo(Pilha *ponteiro){
    if(estaVazia(ponteiro)){
        printf("Pilha vazia!\n");
        return -1;
    }

    return ponteiro->itens[ponteiro->topo];
}

int main(){
    
    Pilha pilha;
    iniciarPilha(&pilha);

    printf("Topo da pilha: %d\n", topo(&pilha));

    push(&pilha, 10);
    push(&pilha, 15);
    push(&pilha, 20);
    push(&pilha, 25);
    push(&pilha, 30);

    printf("Topo da pilha: %d\n", topo(&pilha));

    printf("Removendo %d...\n", pop(&pilha));
    printf("Topo da pilha: %d\n", topo(&pilha));

    printf("Removendo %d...\n", pop(&pilha));
    printf("Topo da pilha: %d\n", topo(&pilha));

    return 0;
}
