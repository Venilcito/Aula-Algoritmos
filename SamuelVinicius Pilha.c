#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Declarando structs

struct node { // struct da arvore
    int conteudo;
    struct node *esquerda;
    struct node *direita;
};

typedef struct{ // struct da pilha
    int itens[MAX];
    int topo;
} Pilha;

// FUNÇÕES PARA A PILHA

void iniciar_pilha(Pilha *ponteiro);
int vazio_pilha(Pilha *ponteiro);
int cheio_pilha(Pilha *ponteiro);
void mostrar_pilha(Pilha *ponteiro);
void inserir_pilha(Pilha *ponteiro, int valor);

// FUNÇÕES PARA A ARVORE

struct node* inserir_arvore(struct node *raiz, int valor);
void imprimir_arvore(struct node *raiz);
void pegarNUMEROS(struct node *raiz, Pilha *ponteiroImpar, Pilha *ponteiroPar);
void cortarArvore(struct node **raiz);

// CONTROLADOR MAIN

int main() {

    // declarando as pilhas;
    // usamos o mesmo struct pilha para guardar os elementos pares e impares;

    Pilha pilhapar;
    Pilha pilhaimpar;

    // inicializando pilhas
    iniciar_pilha(&pilhapar);
    iniciar_pilha(&pilhaimpar);

    // declarando e inicializando a arvore;
    struct node *arvore = NULL;
    int x, valor;

    do { // MENU DAS OPÇÕES;

        printf(".................................................\n");
        printf("..............ESCOLHE UM BUTAO AI................\n");
        printf(".................................................\n");

        printf("\n1 - Inserir valor na Arvore\n");
        printf("2 - Imprimir Arvore\n");
        printf("3 - Empilhar pares e impares\n");
        printf("4 - Mostrar pilha par\n");
        printf("5 - Mostrar pilha impar\n");
        printf("6 - Cortar arvore\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &x);
    
        printf("\n....................SIM SENHOR...................\n\n");

        switch(x){
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                arvore = inserir_arvore(arvore, valor);

                printf("\n.................................................\n");
                printf("..................TA PRONTO UÉ...................\n");

                break;

            case 2:
                printf("CALMA-LA, Imprimindo arvore: ");
                imprimir_arvore(arvore);
                printf("\n\n.................................................\n");
                printf(".................PRONTO PATRAO...................\n");
                break;

            case 3:
            
                printf("LOADING pares e impares...\n");
                printf("loADinG...\n");
                printf("loading...\n");
                printf("ERROR REINICIANDO...\n");
                printf("........\n");
                printf("FOI MAL!! arrumado ja\n");
                printf("\n");

                // zerando as duas pilhas antes de empilhar as pilhas --> BOA PRATICA PARA EVITAR ERROS;

                iniciar_pilha(&pilhapar);
                iniciar_pilha(&pilhaimpar);
                pegarNUMEROS(arvore, &pilhaimpar, &pilhapar);
                
                printf("\n.................................................\n");
                printf(".................FEITO SENHORES..................\n");
                
                break;

            case 4:
                printf("Mostrando pilha par:\n");
                mostrar_pilha(&pilhapar);

                printf("\n.................................................\n");
                printf(".....................TA AI NEH...................\n");
                break;

            case 5:
                printf("Mostrando pilha impar:\n");
                mostrar_pilha(&pilhaimpar);

                printf("\n.................................................\n");
                printf(".....................TA AI NEH...................\n");
                break;
                
            case 6:
                cortarArvore(&arvore);
                printf("Desmatando...\n");
                printf("desMATaNDo...\n");
                printf("desmaTADORES...\n");
                printf("\n.................................................\n");
                printf(".................MADERAAAAAAAAAAAA...............\n");
                break;
            case 7:

                printf("\n......................VOLTE......................\n");
                printf(".....................SEMPRE......................\n");
                printf(".....................SENHOR......................\n");

                break;

			default:
				printf("Opcao invalida!\n");
			}
    } while (x != 7);

    return 0;
}

//////////////////////////////////////////////////////////////////////
//////////////////// METODOS PARA A ARVORE ///////////////////////////
//////////////////////////////////////////////////////////////////////

struct node* inserir_arvore(struct node *raiz, int valor) { // inserir novos elementos a arvore;
    if (raiz == NULL) {
        struct node *novo = (struct node*)malloc(sizeof(struct node));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        return novo;
    }
    if (valor < raiz->conteudo) {
        raiz->esquerda = inserir_arvore(raiz->esquerda, valor);
    } else if (valor > raiz->conteudo) {
        raiz->direita = inserir_arvore(raiz->direita, valor);
    }
    return raiz;
}

void imprimir_arvore(struct node *raiz) { // imprimir a arvore completa;
    if (raiz != NULL) {
        imprimir_arvore(raiz->esquerda);
        printf("%d ", raiz->conteudo);
        imprimir_arvore(raiz->direita);
    }
}

void pegarNUMEROS(struct node *raiz, Pilha *ponteiroImpar, Pilha *ponteiroPar) {    // Função para pegar os elementos pares da arvore;
    if (raiz != NULL) {                                    // e adicionar a pilha de impares;
        pegarNUMEROS(raiz->esquerda, ponteiroImpar, ponteiroPar);
        if (raiz->conteudo % 2 == 0){
            inserir_pilha(ponteiroPar, raiz->conteudo);
        }else{
            inserir_pilha(ponteiroImpar, raiz->conteudo);
        }
        pegarNUMEROS(raiz->direita, ponteiroImpar, ponteiroPar);
    }
}

void cortarArvore(struct node **raiz) { // Apaga toda a árvore;
    if (*raiz != NULL) {
        cortarArvore(&(*raiz)->esquerda);
        cortarArvore(&(*raiz)->direita);
        free(*raiz); // Libera o nó atual.
        *raiz = NULL; // coloca nulo;
    }
}

//////////////////////////////////////////////////////////////////////
//////////////////// METODOS PARA A PILHA ////////////////////////////
//////////////////////////////////////////////////////////////////////

void iniciar_pilha(Pilha *ponteiro){ //funçao para inicializar uma pilha / zerar uma pilha existente;
    ponteiro->topo = -1;
}

int vazio_pilha(Pilha *ponteiro){ // verificar se a pilha esta vazia;
    return ponteiro->topo == -1;
}

int cheio_pilha(Pilha *ponteiro){ // verificar se ta cheia;
    return ponteiro->topo == MAX - 1;
}

void mostrar_pilha(Pilha *ponteiro){ // mostrar a pilha completo;
    if(vazio_pilha(ponteiro)){
        printf("Pilha vazia! Faz as conta direito po\n");
        return;
    }

    for(int i = ponteiro->topo; i >= 0; i--){
        printf("%d\t", ponteiro->itens[i]);
    }
    printf("\n");
}

void inserir_pilha(Pilha *ponteiro, int valor){ // inserir novo elemento a pilha;
    if(cheio_pilha(ponteiro)){
        printf("Pilha cheia! Chega pelo amor de Deus\n");
        return;
    }

    ponteiro->itens[++ponteiro->topo] = valor;
    printf("Inserindo %d...\n", valor);
}