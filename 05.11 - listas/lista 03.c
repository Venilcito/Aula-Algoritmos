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

void inserir(struct cliente **ponteiro, int id, const char *nome, int idade) {
    struct cliente *novo = (struct cliente*)malloc(sizeof(struct cliente));
    novo -> id = id;
    strcpy(novo -> nome, nome);
    novo -> idade = idade;
    novo -> next = NULL;

    if (*ponteiro == NULL) {
        *ponteiro = novo;
    } else {
        struct cliente *temp = *ponteiro;
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = novo;
    }
}

void mostrar(struct cliente *ponteiro){
    struct cliente *temp = ponteiro;

    while(temp != NULL){
        printf("ID: %d\t\tNome: %s\t\tIdade: %d\n", temp -> id, temp -> nome, temp -> idade);
        temp = temp -> next;
    }
}

struct cliente* buscar(struct cliente *ponteiro, int id){
    struct cliente *temp = ponteiro;

    while(temp != NULL){
        if(temp -> id == id){
            return temp;
        }
        temp = temp -> next;
    }
    return NULL;
}

void editar(struct cliente *ponteiro, int id){
    struct cliente *client = buscar(ponteiro, id);

    if(client != NULL){
        printf("Insira o novo nome do cliente: ");
        scanf(" %[^\n]", client -> nome);
        printf("Insira a nova idade do cliente: ");
        scanf("%d", &client -> idade); 
        printf("Cliente editado com sucesso!\n");
    } else{
        printf("Cliente com ID %d nao encontrado.\n", id);
    }
}

void excluir(struct cliente **ponteiro, int id){
    struct cliente *temp = *ponteiro, *prev = NULL;
    
    if (temp != NULL && temp -> id == id){
        *ponteiro = temp->next;
        free(temp);
        printf("Cliente com ID %d excluido com sucesso.\n", id);
        return; 
    }

    while (temp != NULL && temp -> id != id){
        prev = temp;
        temp = temp -> next;
    }
    if (temp == NULL) {
        printf("Cliente com ID %d nao encontrado.\n", id);
        return;
    }

    prev -> next = temp -> next;
    free(temp); 
    printf("Cliente com ID %d excluido com sucesso.\n", id);
}

int main(){
    struct cliente *lista = NULL;
    int id, idade, opcao;
    char nome[50];
    char add;

    do{
        printf("\nInsira o ID do cliente: ");
        scanf("%d", &id);
        printf("Insira o nome do cliente: ");
        scanf(" %[^\n]", nome);
        printf("Insira a idade do cliente: ");
        scanf("%d", &idade);

        inserir(&lista, id, nome, idade);

        printf("Deseja inserir outro cliente? (s/n): ");
        scanf(" %c", &add);

    } while (add == 's');

    do{
        printf("\nLista de Clientes:\n");
        mostrar(lista);

        printf("\nEscolha uma operacao:\n");
        printf("1. Buscar Cliente\n");
        printf("2. Editar Cliente\n");
        printf("3. Excluir Cliente\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nInsira o ID do cliente que deseja buscar: ");
                scanf("%d", &id);
                struct cliente *cliente = buscar(lista, id);
                if (cliente != NULL) {
                    printf("Cliente encontrado!\nID: %d\t\tNome: %s\t\tIdade: %d\n", cliente->id, cliente->nome, cliente->idade);
                } else {
                    printf("Cliente com ID %d nao encontrado.\n", id);
                }
                break;
            case 2:
                printf("\nInsira o ID do cliente que deseja editar: ");
                scanf("%d", &id);
                editar(lista, id);
                break;
            case 3:
                printf("\nInsira o ID do cliente que deseja excluir: ");
                scanf("%d", &id);
                excluir(&lista, id);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
