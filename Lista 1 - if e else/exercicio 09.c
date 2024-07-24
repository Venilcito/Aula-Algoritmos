#include <stdio.h>

int main(){ 

    double raio; 
    printf("Insira o raio: "); 
    scanf("%lf", &raio); 

    if(raio >= 0){ 
        double area = 3.141592 * raio * raio; 
        printf("Area = %.2lf\n", area); 
    } else{ 
        printf("Erro: raio negativo\n"); 
    } 

 return 0; 
}