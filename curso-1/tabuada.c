#include <stdio.h>

int main() {
    int numero = 0;

    // espera o usuário digitar um número inteiro
    while(numero <= 0) {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
    }

    // monta a tabuada
    int contador = 1;

    for(; contador <= 10; contador++) {
        printf("%d x %d = %d\n", numero, contador, (numero * contador));
    }
}