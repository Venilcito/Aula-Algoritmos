#include <stdio.h>

int main(){

    int pato;
    printf("Responda com sabedoria: Quantos filhotes a mamae pato tem?\n");
    scanf("%d", &pato);

    for(int i = pato; i >= 1; i--){
        (i == 1) ? printf("\n1 patinho foi passear\n") : printf("\n%d patinhos foram passear\n", i);
        printf("Alem das montanhas para brincar\n");
        printf("A mamae gritou: Qua, qua, qua, qua!\n");
        
        if(i == 2){
            printf("Mas so 1 patinho voltou de la...\n");
        } else if(i == 1){
            printf("Mas nenhum patinho voltou de la...\n");
        } else{
            printf("Mas so %d patinhos voltaram de la...\n", i - 1);
        }
    }

    printf("\nA mamae patinha foi procurar\n");
    printf("Alem das montanhas, na beira do mar\n");
    printf("A mamae gritou: Qua, qua, qua, qua!\n");
    printf("E os %d patinhos voltaram de la\n", pato);

    return 0;
}