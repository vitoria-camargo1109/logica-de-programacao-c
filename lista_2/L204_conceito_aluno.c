//* Peça a nota de um aluno (0 a 10) e mostre o conceito: "Aprovado" (nota ≥ 7), 
//* "Recuperação" (nota entre 5 e 6.9), ou "Reprovado" (nota < 5).

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    float nota;

    printf("Digite uma nota de 0 à 10: ");
    scanf("%f", &nota);

    if (nota >= 7){
        printf("Você está aprovado(a). Parabéns!");
    } else if (nota >= 5) {
        printf("Você está de recuperação, tente de novo...");
    } else {
        printf("Você está reprovado(a). Não desanime, você consegue!");
    }

    return 0; 
    
}