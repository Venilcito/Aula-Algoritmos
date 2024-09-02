#include <stdio.h>

int main() {
    char romano;
    int total = 0, atual = 0, proximo = 0;

    printf("Digite um numero romano: ");

    romano = getchar();

    while (romano != '\n') {
        switch (romano) {
            case 'I': atual = 1; break;
            case 'V': atual = 5; break;
            case 'X': atual = 10; break;
            case 'L': atual = 50; break;
            case 'C': atual = 100; break;
            case 'D': atual = 500; break;
            case 'M': atual = 1000; break;
            default: atual = 0; break; // Caso de caractere inválido
        }

        romano = getchar();

        switch (romano) {
            case 'I': proximo = 1; break;
            case 'V': proximo = 5; break;
            case 'X': proximo = 10; break;
            case 'L': proximo = 50; break;
            case 'C': proximo = 100; break;
            case 'D': proximo = 500; break;
            case 'M': proximo = 1000; break;
            default: proximo = 0; break; // Caso de caractere inválido ou fim de string
        }

        if (atual < proximo) {
            total -= atual;
        } else {
            total += atual;
        }
    }

    printf("Valor normal: %d\n", total);

    return 0;
}