#include <stdio.h>

int main(){

    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);

    (senha == 1234) ? printf("Acesso Liberado\n") : printf("Acesso negado, tente novamente\n");

    return 0;
}