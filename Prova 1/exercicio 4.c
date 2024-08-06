#include <stdio.h>

int main(){

    printf("Diferenca de salario entre mulheres e homens no Brasil (por estado).\n");
    printf("Intervalo | Porcentagem\n");
    printf("    6     |      > 30%%\n");
    printf("    5     |   25 - 30%%\n");
    printf("    4     |   20 - 25%%\n");
    printf("    3     |   15 - 20%%\n");
    printf("    2     |   10 - 15%%\n");
    printf("    1     |   00 - 10%%\n\n");

    int interv;
    printf("Insira um intervalo: ");
    scanf("%d", &interv);

    switch(interv){
        case 1:
            printf("\nEstados com menos de 10%% de diferenca:\n");
            printf("Acre     - 8.9%%\n");
            printf("Amapa    - 5.7%%\n");
            printf("Amazonas - 8.6%%\n");
            printf("Maranhao - 9.5%%\n");
            printf("Sergipe  - 9.9%%\n");
            break;
        case 2:
            printf("\nEstados entre 10%% e 15%% de diferenca:\n");
            printf("Alagoas         - 13.4%%\n");
            printf("Bahia           - 11.6%%\n");
            printf("Ceara           - 11.7%%\n");
            printf("Pernambuco      - 13.4%%\n");
            printf("Rio G. do Norte - 13.7%%\n");
            printf("Roraima         - 11.7%%\n");
            break;
        case 3:
            printf("\nEstados entre 15%% e 20%% de diferenca:\n");
            printf("Para     - 15.1%%\n");
            printf("Paraiba  - 19.6%%\n");
            printf("Piaui    - 18.1%%\n");
            printf("Rondonia - 18.7%%\n");
            break;
        case 4:
            printf("\nEstados entre 20%% e 25%% de diferenca:\n");
            printf("Espirito Santo   - 20.4%%\n");
            printf("Minas Gerais     - 23.1%%\n");
            printf("Rio de Janeiro   - 22.6%%\n");
            printf("Rio G. do Sul    - 22.8%%\n");
            printf("Santa Catarina   - 23.5%%\n");
            printf("Sao Paulo        - 24.0%%\n");
            printf("Tocantins        - 21.3%%\n");
            break;
        case 5:
            printf("\nEstados entre 25%% e 30%% de diferenca:\n");
            printf("Dist. Federal  - 28.5%%\n");
            printf("Goias          - 28.1%%\n");
            printf("Mato G. do Sul - 27.3%%\n");
            printf("Parana         - 25.2%%\n");
            break;
        case 6:
            printf("\nEstados com mais de 30%% de diferenca:\n");
            printf("Mato Grosso - 30.5%%");
            break;
        default:
            printf("\nNumero Invalido\n");
    }

    return 0;
}