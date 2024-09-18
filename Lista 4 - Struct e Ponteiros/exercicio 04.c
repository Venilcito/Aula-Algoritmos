#include <stdio.h>

struct alunos{
    char nome[50];
    int matricula;
    int nota1, nota2, nota3;
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
        printf("Nota (prova 1): ");
        scanf("%d", &vetor[i].nota1);
        getchar();
        printf("Nota (prova 2): ");
        scanf("%d", &vetor[i].nota2);
        getchar();
        printf("Nota (prova 3): ");
        scanf("%d", &vetor[i].nota3);
        getchar();
    }

    int maiorp1 = 0, pos;
    for(int i = 0; i < 5; i++){
        if(vetor[i].nota1 > maiorp1){
            maiorp1  = vetor[i].nota1;
            pos = i;
        }
    }
    printf("\nAluno com maior nota na p1: %s, nota %d\n", vetor[pos].nome, maiorp1);

    int media, maiormedia = 0, menormedia = 100, pos1, pos2;
    for(int i = 0; i < 5; i++){
        media = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3) / 3;
        if(media > maiormedia){
            maiormedia = media;
            pos1 = i;
        }
        if(media < menormedia){
            menormedia = media;
            pos2 = i;
        }
    }
    printf("Aluno com maior media: %s, media %d\n", vetor[pos1].nome, maiormedia);
    printf("Aluno com menor media: %s, media %d\n", vetor[pos2].nome, menormedia);

    return 0;
}