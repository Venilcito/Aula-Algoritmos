#include <stdio.h>
#include <string.h>

struct cliente{
    char codigo[3];
    char nome[30];
    char sobrenome[30];
    char email[50];
    char telefone[30];
};


int main(){

    struct cliente matriz[2][2];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Insira o codigo do cliente %d: ", i + j + 1);
            scanf("%2s", matriz[i][j].codigo);
            printf("Insira o nome do cliente %d: ", i + j + 1);
            scanf("%29s", matriz[i][j].nome);
            printf("Insira o sobrenome do cliente %d: ", i + j + 1);
            scanf("%29s", matriz[i][j].sobrenome);
            printf("Insira o email do cliente %d: ", i + j + 1);
            scanf("%49s", matriz[i][j].email);
            printf("Insira o telefone do cliente %d: ", i + j + 1);
            scanf("%29s", matriz[i][j].telefone);
            printf("\n");
        }
    }

    return 0;
}