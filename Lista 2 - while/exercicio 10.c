#include <stdio.h>

int main(){

    double saldo = 0;
    int codigo;

    printf("Codigo | Opcao\n");
    printf("   1   | Consulta Saldo\n");
    printf("   2   | Saque\n");
    printf("   3   | Deposito\n");
    printf("   4   | Sair\n");

    while(1){
        printf("\nInsira o Codigo de Opcao: ");
        scanf("%d", &codigo);

        if(codigo == 1){
            printf("Consulta saldo\n");
            printf("Seu saldo e de R$ %.2lf\n", saldo);
        }
        if(codigo == 2){
            double saque;
            printf("Saque\n");
            printf("Digite o valor do saque: ");
            scanf("%lf", &saque);

            if(saque > saldo){
                printf("Impossivel sacar, voce nao tem dinheiro!\n");
            } else{
                saldo = saldo - saque;
            }
        }
        if(codigo == 3){
            double deposito;
            printf("Deposito\n");
            printf("Digite o valor do deposito: ");
            scanf("%lf", &deposito);

            saldo = saldo + deposito;
        }
        if(codigo == 4){
            break;
        }
    }

    return 0;
}