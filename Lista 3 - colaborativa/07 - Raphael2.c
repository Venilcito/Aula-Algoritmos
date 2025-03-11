#include <stdio.h>
#include <string.h>

int main(){

    int idade = 1, i = 1, velho = 1;
    char nome[50], profissao[50], idoso[50];

    while(idade != 0){
        printf("Cadastro %d\n", i);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Profissao: ");
        scanf("%s", profissao);
        printf("Idade: ");
        scanf("%d", &idade);

        i++;

        if(idade > velho){
            velho = idade;
            strcpy(idoso, nome);
        }
    }

    printf("Codigo encerrado! (idade = 0)\n\n");
    printf("Quantidade de cadastros: %d\n", i - 2);
    printf("Pessoa mais velha: %s, %d anos\n", idoso, velho);

    return 0;
}