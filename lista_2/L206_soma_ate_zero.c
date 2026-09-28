//* Peça vários números inteiros até o usuário digitar 0, e mostre a soma total no final (use while).

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int numero = 0;
    int soma = 0;

    printf("Digite um número (Digite 0 para parar.): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;
        printf("Digite um número (Digite 0 para parar.): ");
        scanf("%d", &numero);
    }

    printf("O resultado é igual à: %d", soma);

    return 0;
}