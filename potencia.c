#include <stdio.h>

int potencia(int a, int b) {
    int i = 1, resultado = 1;

    // se for elevado ao expoente 0 o resultado e 1
    if(b != 0) {
        for(;i <= b; i++) {
            resultado *= a;
        }
    }

    return resultado;
}

int main() {
    int fator, expoente;

    printf("Digite o fator: ");
    scanf("%d", &fator);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("A potencia de %d elevado a %d é %d\n", fator, expoente, potencia(fator, expoente));
}
