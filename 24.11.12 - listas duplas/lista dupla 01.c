#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct clientes{
    int id;
    char nome[100];
    char sobrenome[100];
    char nascimento[12];
    char email[100];
    char telefone[15];
    struct clientes *proximo;
    struct clientes *anterior;
};

void insertfim(struct lista **ponteiro, int id, char nome[100], char sobrenome[100], char nascimento[12], char email[100], char telefone[15]){
    struct clientes *novo = (struct clientes*)malloc(sizeof(struct clientes));

    novo->id = id;
    strcpy(novo->nome, nome);
    strcpy(novo->sobrenome, sobrenome);
    strcpy(novo->nascimento, nascimento);
    strcpy(novo->email, email);
    strcpy(novo->telefone, telefone);

    novo -> proximo = NULL;

    if(*ponteiro == NULL){
        novo->anterior = NULL;
        *ponteiro = novo;
        return;
    }

    struct clientes *temp = *ponteiro;
    while(temp->proximo != NULL){
        temp = temp->proximo;
    }
    temp->proximo = novo;
    novo->anterior = temp;
}

void insertinicio(struct lista **ponteiro, int id, char nome[100], char sobrenome[100], char nascimento[12], char email[100], char telefone[15]){
    struct clientes *novoin = (struct clientes*)malloc(sizeof(struct clientes));

    novoin->id = id;
    strcpy(novoin->nome, nome);
    strcpy(novoin->sobrenome, sobrenome);
    strcpy(novoin->nascimento, nascimento);
    strcpy(novoin->email, email);
    strcpy(novoin->telefone, telefone);

    novoin->anterior = NULL;
    novoin->proximo = *ponteiro;

    if(*ponteiro != NULL){
        (*ponteiro)->anterior = novoin;
    }

    *ponteiro = novoin;
}

void mostrar(struct clientes *ponteiro){
    struct clientes *print = ponteiro;

    while(print != NULL){
        printf("%d <-> ", print->id);
        printf("%s <-> ", print->nome);
        printf("%s <-> ", print->sobrenome);
        printf("%s <-> ", print->nascimento);
        printf("%s <-> ", print->email);
        printf("%s <-> ", print->telefone);
    }
    printf("NULL\n");
}

//nao ta pronto e nao funciona
