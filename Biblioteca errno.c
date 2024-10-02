/* 
Samuel Moreira de Souza e Vinícius Castamann Giongo
Biblioteca <errno.h>

A biblioteca errno não possui funções e serve para identificar erros que acontecem num código
Ela faz isso usando uma variável "errno" que recebe um valor inteiro referente ao código de erro detectado
Quando é usada a função "strerror()" na variável, ela retorna uma breve explicação sobre o erro
*/

#include <stdio.h>									
#include <math.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

// Erro EDOM: Valor fora do domínio dos reais
void erro_EDOM(){
    double raiz = sqrt(-1);
    printf("Erro EDOM: %d, %s\n", errno, strerror(errno));
}

// Erro ERANGE: Valor muito grande ou infinito
void erro_ERANGE(){
    double infinito = log(0.0);
    printf("Erro ERANGE: %d, %s\n", errno, strerror(errno));
}

// Erro ENOENT: Arquivo não existe
void erro_ENOENT(){
    FILE *arquivo = fopen("miottopelado.mp4", "r");
    printf("Erro ENOENT: %d, %s\n", errno, strerror(errno));
}

// Erro ENOMEM: Sem memória suficiente
void erro_ENOMEM(){
    size_t muitacoisa = (size_t) -1;
    void *ponteiro = malloc(muitacoisa);
    printf("Erro ENOMEM: %d, %s\n", errno, strerror(errno));
}

int main(){
    erro_EDOM();
    erro_ERANGE();
    erro_ENOENT();
    erro_ENOMEM();
    return 0;
}