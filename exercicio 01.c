#include <stdio.h>

int main(){ 

    double a, b, c, d; 
    printf("Escreva 4 notas: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double media = (a + b + c + d) / 4.0;

    if(media < 7){ 
        printf("ALUNO REPROVADO. Media %.1lf\n", media); 
    } else{ 
        printf("ALUNO APROVADO. Media %.1lf\n", media); 
    } 

    return 0;
}