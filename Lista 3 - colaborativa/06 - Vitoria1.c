#include <stdio.h>

int main(){

    int ano;
    printf("Insira um ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("Esse ano e bissexto ");

        if(ano >= 1896 && ano != 2020){
            printf("e teve olimpiadas\n");
        } else{
            printf("e nao teve olimpiadas\n");
        }
    } else{
        printf("Esse ano nao e bissexto ");

        if(ano == 2021){
            printf("e teve olimpiadas\n");
        } else{
            printf("e nao teve olimpiadas\n");
        }
    }

    return 0;
}