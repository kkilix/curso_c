#include <stdio.h>

void soma(int* num, int a, int b) {
    *num = a + b;
}

int main() {
    int n1, n2, total;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma(&total, n1, n2);

    printf("A soma de %d + %d é %d\n", n1, n2, total);
}