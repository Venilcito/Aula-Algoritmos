#include <stdio.h>
#include <stdlib.h>

int main(){

    int dado[10];
    int um = 0, dois = 0, tres = 0, quat = 0, cinc = 0, seis = 0;

    for(int d = 0; d <= 9; d++){
        dado[d] = rand() % 6;
    }

    for(int i = 0; i <= 9; i++){
        if(dado[i] == 1){
            um++;
        }
        if(dado[i] == 2){
            dois++;
        }
        if(dado[i] == 3){
            tres++;
        }
        if(dado[i] == 4){
            quat++;
        }
        if(dado[i] == 5){
            cinc++;
        }
        if(dado[i] == 6){
            seis++;
        }
    }

    printf("Resultados 1: %d\n", um);
    printf("Resultados 2: %d\n", dois);
    printf("Resultados 3: %d\n", tres);
    printf("Resultados 4: %d\n", quat);
    printf("Resultados 5: %d\n", cinc);
    printf("Resultados 6: %d\n", seis);

    return 0;
}