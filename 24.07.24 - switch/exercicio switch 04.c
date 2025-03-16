#include <stdio.h>

int main(){

    int codigo, quarto = 0;
    char nome[50];

    printf("Insira seu nome: ");
    scanf("%s",nome);
    printf("Insira o codigo da opcao desejada: ");
    scanf("%d",&codigo);

    if(codigo != 1){
        printf("Insira o numero do seu quarto: ");
        scanf("%d",&quarto);
    }
    
    switch(codigo){
        case 1:
            printf("\nO cliente \"%s\" deseja fazer Check-in\n", nome);
            break;
        case 2:
            printf("\nO hospede \"%s\", quarto %d, deseja Servico de Quarto\n", nome, quarto);
            break;
        case 3:
            printf("\nO hospede \"%s\", quarto %d, deseja Fazer Pedido\n", nome, quarto);
            break;
        case 4:
            printf("\nO hospede \"%s\", quarto %d, deseja Solicitar Outro Servico\n", nome, quarto);
            break;
        default:
            printf("\nO hospede \"%s\", quarto %d, inseriu um Codigo Invalido\n", nome, quarto);
    }

    return 0;
}