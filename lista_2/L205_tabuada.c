//* Faça um programa que mostre a tabuada de um número digitado pelo usuário, de 1 a 10 (use for).

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int numero;
    int resultado;

    printf("Digite um número de 0 à 10: ");
    scanf("%d", &numero);

    for (int tabuada = 1; tabuada <= 10; tabuada++) {
        resultado = tabuada * numero;
        printf("%d X %d = %d \n", numero, tabuada, resultado);
    }

    return 0;
    
}