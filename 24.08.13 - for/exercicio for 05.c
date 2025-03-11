#include <stdio.h>

int main(){

    int idade, mais18 = 0;
    
    for(int i = 1; i <= 10; i++){
        printf("Insira a idade %d: ", i);
        scanf("%d", &idade);

        if(idade >= 18){
            mais18++;
        }
    }

    printf("\nTem %d pessoas maiores de idade\n", mais18);

    return 0;
}