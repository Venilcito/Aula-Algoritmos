#include <stdio.h>

int main(){

    printf("Numero de homicidios a cada 100 mil habitantes no Brasil (por estado).\n");
    printf("Intervalo | Taxa\n");
    printf("    6     | 50 >\n");
    printf("    5     | 40 - 49\n");
    printf("    4     | 30 - 39\n");
    printf("    3     | 20 - 29\n");
    printf("    2     | 10 - 19\n");
    printf("    1     | 00 - 09\n\n");

    int interv;
    printf("Insira um intervalo: ");
    scanf("%d", &interv);

    switch(interv){
        case 1:
            printf("\nEstados com menos de 9 homicidios:\n");
            printf("Santa Catarina - 8.9\n");
            printf("Sao Paulo      - 7.8\n");
            break;
        case 2:
            printf("\nEstados entre 10 e 19 homicidios:\n");
            printf("Dist. Federal - 11.1\n");
            printf("Minas Gerais  - 14.8\n");
            printf("Parana        - 19.8\n");
            printf("Rio G. do Sul - 18.0\n");
            break;
        case 3:
            printf("\nEstados entre 20 e 29 homicidios:\n");
            printf("Acre           - 25.8\n");
            printf("Roraima        - 27.8\n");
            printf("Rondonia       - 29.9\n");
            printf("Maranhao       - 28.0\n");
            printf("Piaui          - 22.5\n");
            printf("Paraiba        - 26.9\n");
            printf("Tocantins      - 29.6\n");
            printf("Goias          - 22.8\n");
            printf("Mato G. do Sul - 21.9\n");
            printf("Espirito Santo - 28.5\n");
            printf("Rio de Janeiro - 26.6\n");
            break;
        case 4:
            printf("\nEstados entre 30 e 39 homicidios:\n");
            printf("Amazonas        - 35.6\n");
            printf("Para            - 32.8\n");
            printf("Mato Grosso     - 31.7\n");
            printf("Ceara           - 35.4\n");
            printf("Rio G. do Norte - 31.6\n");
            printf("Alagoas         - 38.5\n");
            printf("Sergipe         - 31.1\n");
            break;
        case 5:
            printf("\nEstados entre 40 e 49 homicidios:\n");
            printf("Bahia      - 46.5\n");
            printf("Pernambuco - 40.2\n");
            break;
        case 6:
            printf("\nEstados com mais de 50 homicidios:\n");
            printf("Amapa - 69.9\n");
            break;
        default:
            printf("\nNumero Invalido\n");
    }

    return 0;
}