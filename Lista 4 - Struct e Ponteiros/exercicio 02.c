#include <stdio.h>

struct alunos{
    char nome[100];
    int idade;
    char endereco[100];
};

int main(){

    struct alunos vetor[3];

    for(int i = 0; i < 3; i++){
        printf("Aluno %d:\n", i + 1);
        printf("Nome completo: ");
        scanf("%[^\n]", vetor[i].nome);
        getchar();
        printf("Idade: ");
        scanf("%d", &vetor[i].idade);
        getchar();
        printf("Endereco: ");
        scanf("%[^\n]", vetor[i].endereco);
        getchar();
        printf("\n");
    }

    printf("Dados armazenados com sucesso.\n");

    return 0;
}