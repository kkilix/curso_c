#include <stdio.h>

int soma(int numeros[10]) {
    int i = 0, resultado = 0;

    for(;i < 10; i++) {
        resultado += numeros[i];
    }

    return resultado;
}

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

    printf("A soma dos números é: %d\n", soma(numeros));
}