#include <stdio.h>

int main() {
    int notas[5];
    notas[0] = 1;
    notas[1] = 4;
    notas[2] = 7;
    notas[3] = 5;
    notas[4] = 10;

    int i = 0;
    for(;i < 5; i++) {
        printf("%d ", notas[i]);
    }

    printf("\n");
}