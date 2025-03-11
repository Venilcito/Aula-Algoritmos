#include <stdio.h>

int main(){

    int operacao;
    printf("1 - Quadrado\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo equilatero\n");
    printf("4 - Triangulo retangulo\n");
    printf("5 - Circulo\n");
    printf("6 - Fechar calculadora\n\n");
    
    do{
        printf("Insira um codigo de operacao: ");
        scanf("%d", &operacao);
        double lado, base, altura, raio;

        switch(operacao){
            case 1:
                printf("Insira o tamanho do lado: ");
                scanf("%lf", &lado);
                printf("Area: %.2lf\n\n", lado * lado);
                break;
            case 2:
                printf("Insira a largura: ");
                scanf("%lf", &base);
                printf("Insira a altura: ");
                scanf("%lf", &altura);
                printf("Area: %.2lf\n\n", base * altura);
                break;
            case 3:
                printf("Insira o tamanho do lado: ");
                scanf("%lf", &lado);
                printf("Area: %.2lf\n\n", (lado * lado * 1.732051) / 4);
                break;
            case 4:
                printf("Insira a largura: ");
                scanf("%lf", &base);
                printf("Insira a altura: ");
                scanf("%lf", &altura);
                printf("Area: %.2lf\n\n", (base * altura) / 2);
                break;
            case 5:
                printf("Insira o raio: ");
                scanf("%lf", &raio);
                printf("Area: %.2lf\n\n", 3.141592 * raio * raio);
                break;
        }
    } while(operacao != 6);

    return 0;
}