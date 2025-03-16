#include <stdio.h>

int main(){

    int a, b, c, d;
    printf("Insira 4 notas: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    double media = (a + b + c + d) / 4.0;
    printf("Media: %.1lf\n", media);

    switch((int)media){
        case 0 ... 4:
            printf("Aluno reprovado\n");
            break;
        case 5 ... 6:
            printf("Aluno em exame\n");
            break;
        default:
            printf("Aluno aprovado\n");
    }

    return 0;
}