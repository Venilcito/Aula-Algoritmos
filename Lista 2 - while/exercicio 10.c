#include <stdio.h>
#include <string.h>

int main(){

    double saldo = 0;
    char codigo[2];

    printf("Codigo | Opcao\n");
    printf("   a   | Consulta Saldo\n");
    printf("   b   | Saque\n");
    printf("   c   | Deposito\n");
    printf("   d   | Sair\n");

    while(1){
        printf("\nInsira o Codigo de Opcao: ");
        scanf("%s", codigo);

        if(strcmp(codigo, "a") == 0){
            printf("Consulta saldo\n");
            printf("Seu saldo e de R$ %.2lf\n", saldo);
        }
        else if(strcmp(codigo, "b") == 0){
            double saque;
            printf("Saque\n");
            printf("Digite o valor do saque: ");
            scanf("%lf", &saque);

            if(saque > saldo){
                printf("Impossivel sacar, voce nao tem dinheiro!\n");
            } else{
                saldo = saldo - saque;
                printf("Saque de R$ %.2lf realizado. Novo saldo: R$ %.2lf\n", saque, saldo);
            }
        }
        else if(strcmp(codigo, "c") == 0){
            double deposito;
            printf("Deposito\n");
            printf("Digite o valor do deposito: ");
            scanf("%lf", &deposito);

            saldo = saldo + deposito;
            printf("Deposito de R$ %.2lf realizado. Novo saldo: R$ %.2lf\n", deposito, saldo);
        }
        else if(strcmp(codigo, "d") == 0){
            printf("Adeus!\n");
            break;
        }
        else{
            printf("Codigo Invalido!\n");
        }
    }

    return 0;
}
