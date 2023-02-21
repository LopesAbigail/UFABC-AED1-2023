#include "qtd_palavras_frase.h"
#include<stdio.h>

int ehLetra(char x) {
    if((x >= 56 && x <= 90) || (x >= 97 && x <= 122)) {
        return 1;
    }
    return 0;
}

int ehPalavra(char x) {
    if((x == ';') || (x == '.') || (x == ',') || (x == ' ')) { // ou (x == ':')
        return 1;
    }
    return 0;
}

void imprimir_qtd_palavras(char texto[]) {
    int indice = 0;
    int qtdPalavras = 0;
    int qtdEspacos = 0;
    
    while(texto[indice] != '\n') {
        if( (ehLetra(texto[indice]) == 1) && (ehPalavra(texto[indice+1]) == 1) ) {
            qtdPalavras++;
        }
        if(texto[indice] == '.') {
            printf("%d", qtdPalavras);
            printf("\n");
            qtdPalavras = 0;
        }
        indice++;
    }
}