#include <stdio.h>

int main(){

    char conceito;

    printf("Conceito | Significado \n");
    printf("    A    |   Excelente \n");
    printf("    B    |   Otimo     \n");
    printf("    C    |   Bom       \n");
    printf("    D    |   Regular   \n");
    printf("    E    |   Ruim      \n");
    printf("    F    |   Insuficiente\n");

    printf("\nDigite o conceito de seu aluno\n");
    scanf("%c", &conceito);

    switch (conceito) {
        case 'A':
            printf("Um aluno Excelente\n");
            break;
        case 'B':
            printf("Um aluno Otimo\n");
            break;
        case 'C':
            printf("Um aluno Bom\n");
            break;
        case 'D':
            printf("Um aluno Regular\n");
            break;
        case 'E':
            printf("Um aluno Ruim\n");
            break;
        case 'F':
            printf("Nos vemos novamente ano que vem\n");
        default:
            printf("Valor indisponivel\n");
    }

    return 0;
}