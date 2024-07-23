#include <stdio.h>

int main(){ 

    int idade; 
    printf("Insira a idade: "); 
    scanf("%d", &idade); 

    if(idade >= 18){ 
        printf("Categoria Adulto\n"); 
    } else if(idade >= 14){ 
        printf("Categoria Juvenil\n"); 
    } else if(idade >= 9){ 
        printf("Categoria Infantil\n"); 
    } else{ 
        printf("Categoria Mirim\n"); 
    } 

 return 0; 
} 
