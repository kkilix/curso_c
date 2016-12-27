#include <stdio.h>

int soma(int* numeros, int tamanho) {
    int i = 0, resultado = 0;

    for(;i < tamanho; i++) {
        resultado += numeros[i];
    }

    return resultado;
}

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

    printf("A soma dos números é: %d\n", soma(numeros, 10));
}