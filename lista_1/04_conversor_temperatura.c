//* Converta temperatura: Celsius para Fahrenheit e vice-versa.
//* Fórmula F =  C * 9/5 + 32
//* Fórmula C = (F - 32) * 5/9

#include <stdio.h>
#include <stdlib.h> //* Biblioteca de funções utilitárias gerais.

int main() {
    system("chcp 65001 > nul" );
    float numero;
    int opcao;
    float celsius;
    float fahrenheit; 

    printf("Digite um número: ");
    scanf("%f", &numero);

    printf("Escola uma opção de temperatura: \n"
        "1- Conversão para Fahrenheit.\n"
        "2- Conversão para Celsius.\n");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        celsius = numero;
        fahrenheit = celsius * 9/5 + 32;

        printf("A temperatura em Fahrenheit é: %.1f", fahrenheit);
    } else if (opcao == 2) {
        fahrenheit = numero;
        celsius = (fahrenheit - 32) * 5/9;

        printf("A temperatura em Celsius é: %.1f", celsius);
    } else {
        printf("Opção inválida, tente novamente.");
    }
    
}