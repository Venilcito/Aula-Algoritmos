#include <stdio.h>

int main(){ 

    double a, b, c; 
    printf("Escreva 3 valores: "); 
    scanf("%lf %lf %lf", &a, &b, &c); 

    if(a > b && a > c){ 
        printf("O primeiro e o maior numero\n"); 
    } 
    if(b > a && b > c){ 
        printf("O segundo e o maior numero\n"); 
    } 
    if(c > a && c > b){ 
        printf("O terceiro e o maior numero\n"); 
    } 
    if(a == b && b == c){ 
        printf("Os 3 valores sao iguais\n"); 
    } 

 return 0; 
}