#include <stdio.h>

int main() {
    int x, y;

    printf("Digite o valor de x ");
    scanf("%d", &x);

    printf("Digite o valor de y ");
    scanf("%d", &y);

    printf("A multiplicação de %d por %d é %d\n", x, y, (x * y));
}