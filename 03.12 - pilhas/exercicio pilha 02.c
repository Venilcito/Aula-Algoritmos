#include <stdio.h>
#include <stdlib.h>
#define MAX 512

typedef struct{
    int itens[MAX];
    int topo;
} Pilha;

void iniciar(Pilha *ponteiro){
    ponteiro->topo = -1;
}

void mostrar(Pilha *ponteiro){
    for(int i = ponteiro->topo; i >= 0; i--){
        printf("%d", ponteiro->itens[i]);
    }
    printf("\n");
}

void inserir(Pilha *ponteiro, int valor){
    ponteiro->itens[++ponteiro->topo] = valor;
}

int main(){
    
    Pilha pilha;
    iniciar(&pilha);

    int numero;
    printf("Insira um inteiro: ");
    scanf("%d", &numero);

    while(numero != 0){
        inserir(&pilha, numero % 2);
        numero /= 2;
    }

    printf("Numero binario: ");
    mostrar(&pilha);

    return 0;
}