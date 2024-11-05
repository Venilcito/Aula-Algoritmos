#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente{
    int id;
    char nome[50];
    int idade;
    struct cliente *next;
};

void inserir(struct cliente **ponteiro, int id, char *nome, int idade){
    struct cliente *novo = (struct cliente *)malloc(sizeof(struct cliente));

    novo -> id = id;
    strcpy(novo -> nome, nome);
    novo -> idade = idade;
    novo -> next = *ponteiro;
    *ponteiro = novo;
}

void mostrar(struct cliente *ponteiro){
    struct cliente *temp = ponteiro;

    while(temp != NULL){
        printf("ID: %d\n", temp -> id);
        printf("Nome: %s\n", temp -> nome);
        printf("Idade: %d\n\n", temp -> idade);
        temp = temp -> next;
    }
}

int main(){
    struct cliente *lista = NULL;
    int codigo;

    int id, idade;
    char nome[50];
    printf("Codigo | Funcao\n");
    printf("   1   | Inserir\n");
    printf("   2   | Remover\n");
    printf("   3   | Mostrar\n");
    printf("   4   | Sair\n\n");
    printf("Insira o codigo: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            printf("\nInserir Cliente:\n");
            printf("Nome: ");
            scanf("%s", nome);
            printf("Idade: ");
            scanf("%d", &idade);
            printf("ID: ");
            scanf("%d", &id);
            inserir(&lista, &id, nome, &idade);
            printf("\nCliente adicionado!\n");
            break;
    }

    mostrar(lista);

    return 0;
}