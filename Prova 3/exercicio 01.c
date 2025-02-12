#include <stdio.h>

int main(){

    int notas[] = {85, 42, 78, 90, 66, 74, 50, 88, 95, 60};
    int tam = sizeof(notas)/sizeof(notas[0]);

    int aprovados = 0, media = 0;

    //busca sequencial (valores maiores que 70)
    for(int i = 0; i < tam; i++){
        media += notas[i];

        if(notas[i] >= 70){
            aprovados++;
        }
    }

    printf("%d alunos aprovados\n", aprovados);
    printf("Media Geral: %d\n", media / tam);

    return 0;
}