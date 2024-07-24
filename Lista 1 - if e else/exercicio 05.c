#include <stdio.h>

int main(){ 

    double a, b, c; 
    printf("Insira 3 numeros: "); 
    scanf("%lf %lf %lf", &a, &b, &c); 

    if(a > b && a > c){ 
        printf("%.2lf e o maior numero\n", a); 
    } 
    if(b > a && b > c){ 
        printf("%.2lf e o maior numero\n", b); 
    } 
    if(c > a && c > b){ 
        printf("%.2lf e o maior numero\n", c); 
    } 

    return 0; 
} 
