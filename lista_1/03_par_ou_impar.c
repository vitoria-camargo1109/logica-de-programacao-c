//* 3- Leia um número e diga se é par ou ímpar.

#include <stdio.h>
#include <stdlib.h> //* Biblioteca de funções utilitárias gerais.

int main() {
    system("chcp 65001 > nul"); //* Formata acentos no código
    int numero;
    int resto;

    printf("Digite um número: ");
    scanf("%d", &numero);

    resto = numero % 2;
    
    if (resto == 0) {
        printf("O número é par.");
    } else {
        printf("O número é ímpar.");
    }
}