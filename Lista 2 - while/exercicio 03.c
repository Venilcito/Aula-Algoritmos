#include <stdio.h>

int main(){

    int alunos, i = 1;
    double total = 0, nota;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &alunos);

    while(i <= alunos){
        printf("Insira a nota do aluno %d: ", i);
        scanf("%lf", &nota);
        total += nota;
        i++;
    }

    double media = total / alunos;
    printf("Media da turma: %.1lf", media);

    return 0;
}