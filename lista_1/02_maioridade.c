//* 2- Leia a idade de uma pessoa e diga se ela é maior de idade (>= 18).

#include <stdio.h>
#include <stdlib.h> //* Biblioteca de funções utilitárias gerais

int main() {
    system("chcp 65001 > nul"); //* Formata acentos no código
    int idade;

    printf("Digite sua idade: "); 
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.");
    } else {
        printf("Você é menor de idade.");
    }
}
