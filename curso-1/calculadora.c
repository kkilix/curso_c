#include <stdio.h>

int main() {
    int operacao, numero1, numero2;

    printf("Escolha a operação: 1 = soma, 2 = subtração, 3 = divisão, 4 = multiplicação: ");
    scanf("%d", &operacao);

    if(operacao < 1 || operacao > 4) {
        printf("Operacação inválida!\n");
    } else {
        printf("Digite o valor do 1º número: ");
        scanf("%d", &numero1);

        printf("Digite o valor do 2º número: ");
        scanf("%d", &numero2);

        if(operacao == 1) {
            printf("O resultado de %d + %d é : %d\n", numero1, numero2, (numero1 + numero2));
        } else if(operacao == 2) {
            printf("O resultado de %d - %d é : %d\n", numero1, numero2, (numero1 - numero2));
        } else if(operacao == 3) {
            printf("O resultado de %d / %d é : %.2f\n", numero1, numero2, ((double)numero1 / numero2));
        } else  {
            printf("O resultado de %d * %d é : %d\n", numero1, numero2, (numero1 * numero2));
        }
    }
}