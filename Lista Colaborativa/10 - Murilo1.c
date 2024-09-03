#include <stdio.h>

int main(){

    int n;
    printf("Insira um inteiro maior que 3: ");
    scanf("%d", &n);

    if(n > 3){
        printf("\nLista dos primos ate %d:\n", n);

        for(int i = 2; i <= n; i++){
            int naoprimo = 0;

            for(int j = 1; j <= i/2; j++){
                if(i % j == 0){
                    naoprimo++;
                }
            }

            if(naoprimo == 1){
                printf("%d ", i);
            }
        }
    }

    return 0;
}