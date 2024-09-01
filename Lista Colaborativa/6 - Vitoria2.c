#include <stdio.h>

int main(){

    int numero = 1, i = 1;
    double par = 0, imp = 0, media = 0, mediapar = 0, mediaimp = 0;

    while(numero != 0){
        printf("Insira o valor %d: ", i);
        scanf("%d", &numero);

        if(numero > 0 && numero % 2 == 0){
            par++;
            mediapar += numero;
        } else if(numero > 0 && numero % 2 != 0){
            imp++;
            mediaimp += numero;
        } else if(numero < 0){
            printf("Numero negativo! Desconsiderado\n");
        }

        i++;
        media += numero;
    }

    printf("Codigo encerrado! Entrada = 0\n\n");
    printf("Quantidade de pares:   %.0lf\n", par);
    printf("Quantidade de impares: %.0lf\n\n", imp);
    printf("Media dos pares:   %.2lf\n", mediapar / par);
    printf("Media dos impares: %.2lf\n\n", mediaimp / imp);
    printf("Media geral: %.2lf\n", media / i);

    return 0;
}