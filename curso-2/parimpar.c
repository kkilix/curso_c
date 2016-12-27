#include <stdio.h>

int parimpar(int numero) {
    return numero % 2;
}

main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (!parimpar(numero)) {
        printf("O número %d é par\n", numero);
    } else {
        printf("O número %d é impar\n", numero);
    }
}
