#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} aluno;

void selectionsort(aluno alunos[], int n){
    int menor;
    aluno temp;
    for (int i = 0; i < n - 1; i++){
        menor = i;
        for (int j = i + 1; j < n; j++){
            if (alunos[j].nota < alunos[menor].nota){
                menor = j;
            }
        }
        if (menor != i){
            temp = alunos[i];
            alunos[i] = alunos[menor];
            alunos[menor] = temp;
        }
    }
}

int main(){
    
    aluno alunos[3] = {
        {"miotto", 6.2}, 
        {"samuel", 5.5}, 
        {"vinicius", 7.1}
    };
    
    selectionsort(alunos, 3);
    printf("Alunos ordenados:\n");
    for (int i = 0; i < 3; i++){
        printf("%s: %.1f\n", alunos[i].nome, alunos[i].nota);
    }

    return 0;
}