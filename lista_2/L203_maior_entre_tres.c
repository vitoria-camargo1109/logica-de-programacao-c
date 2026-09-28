//* 3- Peça três números e mostre qual é o maior (usando if/else if/else).

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int n1;
    int n2;
    int n3;
    int maior;
    int menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3){
        printf("O maior número é o primeiro: %d", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("O maior número é o segundo: %d", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("O maior número é o terceiro: %d", n3);
    } else {
        printf("Todos os números são iguais.");
    }
    
    return 0;
    
}