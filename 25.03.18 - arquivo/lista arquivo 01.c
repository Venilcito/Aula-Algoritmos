#include <stdio.h>
#include <string.h>

int main(){
    
    FILE *arquivo;
    char linha[100];
    
    int linhas = 0, palavras = 0, caracteres = 0;
    
    arquivo = fopen("texto.txt", "r");
    
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        int tam = strlen(linha);
        
        linhas++;
        for(int i = 0; i < tam; i++){
            caracteres++;
            if(linha[i] == ' ' || linha[i] == '\n'){
                palavras++;
            }
        }
    }
    
    printf("%d linhas\n%d palavras\n%d caracteres\n", linhas, palavras+1, caracteres);
    fclose(arquivo);

    return 0;
}