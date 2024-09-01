#include <stdio.h>

int main(){

    int codigo = 0, filme = 0, comida = 0;
    double p1 = 15, p2 = 12, p3 = 10;
    printf("Cinema East Side - Bem vindo!\n");
    
    while(codigo != 1 && codigo != 2){
        printf("\n1 - Cliente\n");
        printf("2 - Moderador\n\n");
        printf("Digite seu codigo (1/2): ");
        scanf("%d", &codigo);
    }

    switch(codigo){
        case 1:
            while(filme < 1 || filme > 4){
                printf("\nFilmes em cartaz:\n");
                printf("1 - Filme Ruim\n");
                printf("2 - Filme Ruim 2: pior ainda\n");
                printf("3 - O Massacre da Prova de Calculo\n");
                printf("4 - Meu Amigo Pedro (Miotto)\n\n");
                printf("Digite o codigo (1-4): ");
                scanf("%d", &filme);
            }
            while(comida < 1 || comida > 4){
                printf("\nComidas:\n");
                printf("1 - Pipoca grande  - R$ %.2lf\n", p1);
                printf("2 - Pipoca media   - R$ %.2lf\n", p2);
                printf("3 - Pipoca pequena - R$ %.2lf\n", p3);
                printf("4 - Almoco / Janta - R$  4.00\n");
                printf("Digite o codigo (1-4): ");
                scanf("%d", &comida);
            }
            printf("\nIngresso gerado! Codigo F%dC%d, bom filme!\n", filme, comida);
            break;
        default:
            while(comida < 1 || comida > 3){
                printf("\nEditar Precos:\n");
                printf("1 - Pipoca grande  - R$ %.2lf\n", p1);
                printf("2 - Pipoca media   - R$ %.2lf\n", p2);
                printf("3 - Pipoca pequena - R$ %.2lf\n", p3);
                printf("Digite o codigo (1-3): ");
                scanf("%d", &comida);
            }
            switch(comida){
                case 1:
                    printf("Insira o novo preco para Pipoca grande: ");
                    scanf("%lf", &p1);
                    break;
                case 2:
                    printf("Insira o novo preco para Pipoca media: ");
                    scanf("%lf", &p1);
                    break;
                default:
                    printf("Insira o novo preco para Pipoca pequena: ");
                    scanf("%lf", &p1);
            }

    }

    return 0;
}