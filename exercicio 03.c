#include <stdio.h>

int main(){ 

    double a, b, c; 
    printf("Escreva 3 notas: "); 
    scanf("%lf %lf %lf", &a, &b, &c); 

    double media = (a + b + c) / 3.0; 

    if(media >= 7){ 
        printf("ALUNO APROVADO. Media %.2lf", media); 
    } 
    if(media < 7 && media >= 5){ 
        printf("ALUNO EM RECUPERACAO. Media %.2lf", media); 
    } 
    if(media < 5){ 
        printf("ALUNO REPROVADO. Media %.2lf", media); 
    } 

    return 0; 
} 
