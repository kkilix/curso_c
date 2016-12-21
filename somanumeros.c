#include <stdio.h>

int main() {
    int numero = 1, soma = 0;

    while(numero <= 100) {
        soma += numero++;
    }

    printf("A soma dos números de 1 até 100 é %d.\n", soma);
}