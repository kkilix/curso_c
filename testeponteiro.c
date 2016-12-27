#include <stdio.h>

int main() {
    int numeros[3];

    // declarando um ponteiro que aponta pro
    // mesmo lugar que o array/ponteiro numeros
    int* ponteiro = numeros;

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;

    int i = 0;
    for(; i < 3; i++) {
        printf("%d ", numeros[0]);

        // repare na soma que fazemos com o ponteiro
        printf("%d ", *(ponteiro + i));

        printf("\n");
    }
}