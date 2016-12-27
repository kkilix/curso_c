#include <stdio.h>

void potencia(int* resultado, int a, int b) {
    int i = 1;
    
    *resultado = 1;

    // se for elevado ao expoente 0 o resultado e 1
    if(b != 0) {
        for(;i <= b; i++) {
            *resultado *= a;
        }
    }

}

int main() {
    int fator, expoente, resultado;

    printf("Digite o fator: ");
    scanf("%d", &fator);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    potencia(&resultado, fator, expoente);

    printf("A potencia de %d elevado a %d é %d\n", fator, expoente, resultado);
}
