#include <stdio.h>

struct alunos{
    char nome[50];
    int matricula;
    char curso[50];
};

int main(){

    struct alunos vetor[5];

    for(int i = 0; i < 5; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Nome completo: ");
        scanf("%[^\n]", vetor[i].nome);
        getchar();
        printf("Num. matricula: ");
        scanf("%d", &vetor[i].matricula);
        getchar();
        printf("Curso: ");
        scanf("%[^\n]", vetor[i].curso);
        getchar();
    }

    printf("\nListagem dos alunos:\n");
    for(int i = 0; i < 5; i++){
        printf("Aluno %d:\t%s\t%d\t%s\n", i + 1, vetor[i].nome, vetor[i].matricula, vetor[i].curso);
    }

    return 0;
}