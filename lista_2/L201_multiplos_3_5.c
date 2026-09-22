//* 1- Imprima os números de 1 a 100 que são múltiplos de 3 ou 5.

#include <stdio.h>

int main() {

    for (int contador = 1; contador <= 100; contador++) {

        if(contador % 3 == 0 || contador % 5 == 0) {         //* || significa OU em C
            printf("%d\n", contador);
        }
    }

}
