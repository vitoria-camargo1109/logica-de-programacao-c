#include <stdio.h>

int main() {
    float saldo = 1000.00;
    int saque;
    int n100, n50, n20, n10, n5;
    int resto;
    int valor;
    
    printf("Digite o valor do seu saque: ");
    scanf("%d", &saque);
    
    
    while (!(saque % 5 == 0 && saque <= saldo)) {
        if (saque > saldo) {
            printf("O valor de saque ultrapassa o saldo atual.\n");
            printf("Digite um valor válido para o saque: ");
            scanf("%d", &saque);
        } else {
            printf("Valor de saque inválido, digite um valor múltiplo de 5.\n");
            printf("Digite um valor válido para o saque: ");
            scanf("%d", &saque);
        }
    }
    
    if (saque % 5 == 0 && saque <= saldo) {
        valor = saldo - saque;
        printf("Saque aprovado!\n");
        printf("Seu saldo atual é de: %d\n", valor);
        
        n100 = saque / 100;
        resto = saque % 100;
        if (n100 >= 1) {
            printf("%d ""nota(s) de 100\n", n100);
        }
        
        n50 = resto / 50;
        resto = resto % 50;
        
        if (n50 >= 1) {
            printf("%d ""nota(s) de 50\n", n50);
        }
        
        n20 = resto / 20;
        resto = resto % 20;
        
        if (n20 >= 1) {
            printf("%d ""nota(s) de 20\n", n20);
        }
        
        n10 = resto / 10;
        resto = resto % 10;
        
        if (n10 >= 1) {
            printf("%d ""nota(s) de 10\n", n10);
        }
        
        n5 = resto / 5;
        resto = resto % 5;
        
        if (n5 >= 1) {
            printf("%d ""nota(s) de 5\n", n5);
        }
        
    return 0;
}
}
