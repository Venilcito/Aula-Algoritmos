#include <stdio.h> 
#include <stdlib.h>

struct lista{
    int valor;
    struct lista *next;
};

void insertinicio(struct lista **ponteiro, int valor) {
    struct lista *novo = (struct lista*)malloc(sizeof(struct lista));  
    novo->valor = valor;
    novo->next = *ponteiro;
    *ponteiro = novo;
}

void insertfim(struct lista **ponteiro, int valor){
    struct lista *novo = (struct lista*)malloc(sizeof(struct lista));  
    novo->valor = valor;
    novo->next = NULL;

    if (*ponteiro == NULL) {
        *ponteiro = novo;
    } else {
        struct lista *temp = *ponteiro;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = novo;
    }
}

void excluinicio(struct lista **ponteiro) {
    if (*ponteiro == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }
    
    struct lista *temp = *ponteiro;
    *ponteiro = (*ponteiro)->next;
    free(temp);
}

void excluifim(struct lista **ponteiro) {
    if (*ponteiro == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }

    if ((*ponteiro)->next == NULL) {
        free(*ponteiro);
        *ponteiro = NULL;
        return;
    }

    struct lista *temp = *ponteiro;
    while (temp->next && temp->next->next != NULL) {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;
}

void mostrar(struct lista *ponteiro) {
    struct lista *temp = ponteiro;
    if (ponteiro == NULL){
        printf("A lista esta vazia\n");
    }
    while (temp != NULL) {
        printf("%d\t", temp->valor);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct lista *ponteiro = NULL;
    
    printf("Inserindo numeros no final da lista:\n");
    insertfim(&ponteiro, 1);
    insertfim(&ponteiro, 2);
    insertfim(&ponteiro, 3);
    mostrar(ponteiro);

    printf("Inserindo numeros no inicio da lista:\n");
    insertinicio(&ponteiro, 4);
    insertinicio(&ponteiro, 5);
    insertinicio(&ponteiro, 6);
    mostrar(ponteiro);

    printf("Excluindo numeros do final da lista:\n");
    excluifim(&ponteiro);
    mostrar(ponteiro);

    printf("Excluindo numeros do inicio da lista:\n");
    excluinicio(&ponteiro);
    mostrar(ponteiro);

    return 0;
}
 