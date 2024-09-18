#include <stdio.h>

struct alunos{
    char horario[7];
    char data[12];
    char evento[100];
};

int main(){

    int quant = 0;
    while(quant < 5){
        printf("Quantos eventos quer salvar? (min 5)\n");
        scanf("%d", &quant);
    }

    struct alunos vetor[quant];

    for(int i = 0; i < quant; i++){
        printf("\nEvento %d:\n", i + 1);
        printf("Insira o horario: ");
        scanf("%6s", vetor[i].horario);
        getchar();
        printf("Insira a data: ");
        scanf("%11s", vetor[i].data);
        getchar();
        printf("Insira o evento: ");
        scanf("%[^\n]", vetor[i].evento);
        getchar();
    }

    printf("\nListagem dos eventos:\n");
    for(int i = 0; i < quant; i++){
        printf("Evento %d:\t%s\t%s\t%s\n", i + 1, vetor[i].horario, vetor[i].data, vetor[i].evento);
    }

    return 0;
}