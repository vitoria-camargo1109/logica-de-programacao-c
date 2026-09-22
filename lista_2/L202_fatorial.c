//* 2- Calcule o fatorial de um número digitado.

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int numero;
    int fatorial = 1;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;

    }

printf("O fatorial é igual a: %d", fatorial);

}