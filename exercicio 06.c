#include <stdio.h>

int main(){ 

    double a, b, c; 
    printf("Insira 3 valores: "); 
    scanf("%lf %lf %lf", &a, &b, &c);

    double soma = a + b + c; 

    if(soma >= 1000){ 
        double desconto = soma - soma * 0.08; 
        printf("Soma = %.2lf\n", soma); 
        printf("Desconto de 8%% = %.2lf\n", desconto); 
    } else{ 
        double desconto = soma - soma * 0.05; 
    printf("Soma = %.2lf\n", soma); 
        printf("Desconto de 5%% = %.2lf\n", desconto); 
    } 
    
    return 0;
}