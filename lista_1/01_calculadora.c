//* 1- Leia dois números inteiros e imprima soma, subtração, multiplicação e divisão (inteira e resto).

#include <stdio.h>
#include <stdlib.h> //* Biblioteca de funções utilitárias gerais

int main() {
    system("chcp 65001 > nul"); //* Formata acentos no código
    int primeiro_numero;
    int segundo_numero;
    int soma;
    int subtracao;
    int multiplicador;
    int divisao;
    int resto;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiro_numero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundo_numero);

    soma = primeiro_numero + segundo_numero;
    subtracao = primeiro_numero - segundo_numero;
    multiplicador = primeiro_numero * segundo_numero;
    divisao = primeiro_numero / segundo_numero;
    resto = primeiro_numero % segundo_numero;

    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", subtracao);
    printf("Multiplicação: %d \n", multiplicador);
    printf("Divisão: %d", divisao);
    printf(" Com resto igual a: %d", resto);
}