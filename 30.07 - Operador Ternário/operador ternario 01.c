#include <stdio.h>

int main(){

    int a, b, c, d;
    printf("Insira 4 notas: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    double media = (a + b + c + d) / 4;
    printf("Media: %.1lf\n", media);

    (media < 70) ? printf("Aluno reprovado\n") : printf("Aluno aprovado\n");

    return 0;
}