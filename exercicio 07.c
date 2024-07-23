#include <stdio.h>

int main(){ 

    double peso; 
    printf("Insira o peso: "); 
    scanf("%lf", &peso); 

    if(peso <= 50.8){ 
        printf("Categoria Peso Mosca\n"); 
    } else if(peso <= 57.15){ 
        printf("Categoria Peso Pena\n"); 
    } else if(peso <= 61.23){ 
        printf("Categoria Peso Leve\n"); 
    } else if(peso <= 72.58){ 
        printf("Categoria Peso Medio\n"); 
    } else{ 
        printf("Categoria Peso Pesado\n"); 
    } 

 return 0; 
} 
