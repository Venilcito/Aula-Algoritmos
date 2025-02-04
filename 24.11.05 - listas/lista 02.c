#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente{
    int id;
    char nome[50];
    float preco;
    struct cliente *next;
};

void inserir(struct cliente **ponteiro, int id, char *nome, float preco){
    struct cliente *novo = (struct cliente *)malloc(sizeof(struct cliente));

    novo -> id = id;
    strcpy(novo -> nome, nome);
    novo -> preco = preco;
    novo -> next = *ponteiro;
    *ponteiro = novo;
}

void mostrar(struct cliente *ponteiro){
    struct cliente *temp = ponteiro;

    while(temp != NULL){
        printf("ID: %d\n", temp -> id);
        printf("Nome: %s\n", temp -> nome);
        printf("Preco: %.2f\n\n", temp -> preco);
        temp = temp -> next;
    }
}

int main(){
    struct cliente *lista = NULL;

    inserir(&lista, 1, "Miotto", 25.99);
    inserir(&lista, 2, "Thiago", 4.80);
    inserir(&lista, 3, "Samuel", 5.32);

    mostrar(lista);

    return 0;
}
