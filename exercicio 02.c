#include <stdio.h>

int main(){ 

    char nome[50]; 
    double salario, vendas; 

    printf("Nome do funcionario: "); 
    scanf("%s", nome); 
    printf("Salario: R$ "); 
    scanf("%lf", &salario); 
    printf("Vendas: R$ "); 
    scanf("%lf", &vendas); 

    if((vendas * 0.3) >= salario){ 
        printf("%s ganhou um bonus de folga", nome); 
    } else{ 
        printf("%s nao ganhou um bonus de folga", nome); 
    } 
    return 0; 
} 
