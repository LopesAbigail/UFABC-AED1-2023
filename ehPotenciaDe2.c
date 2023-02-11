#include<stdio.h>

int ehPotencia2(int numero) {
    if(numero >= 1) {
        while (numero > 1) {
            if(numero % 2 != 0) {
                return 0;
            }
            numero = numero / 2;
        }
        return 1;
    }
    
    return 0;
    
}

int main() {
    
    int quantidadeNumeros = 0;
    int numero = 0;
    int quantidadePotencia2 = 0;
    
    scanf("%d", &quantidadeNumeros);
    
    for(int i = 0; i < quantidadeNumeros; i++) {
        scanf("%d", &numero);
        
        if(ehPotencia2(numero) == 1) {
            quantidadePotencia2++;
        }
    }
    
    printf("%d", quantidadePotencia2);
    
    return 0;
}