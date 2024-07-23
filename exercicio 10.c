#include <stdio.h>
int main(){ 

    double peso, altura; 
    printf("Insira seu peso: ");
    scanf("%lf", &peso); 
    printf("Insira sua altura: "); 
    scanf("%lf", &altura); 

    double imc = peso / (altura * altura); 

    if(imc < 18.5){ 
        printf("Peso abaixo do normal\n"); 
    } 
    if(imc >= 18.5 && imc < 25){ 
        printf("Peso normal\n"); 
    } 
    if(imc >= 25 && imc < 30){ 
        printf("Sobrepeso\n"); 
    } 
    if(imc >= 30 && imc < 35){ 
        printf("Obesidade leve\n"); 
    } 
    if(imc >= 35 && imc < 40){ 
        printf("Obesidade moderada\n"); 
    } 
    if(imc >= 40){ 
        printf("Obesidade morbida\n"); 
    } 

 return 0; 
}