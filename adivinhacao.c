#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime cabecalho do nosso jogo
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int chute;
	int acertou = 0;
	int tentativas = 1;
	double pontos = 1000;

	srand(time(0));
	int numerosecreto = rand() % 100;

	while(!acertou) {

		printf("Qual é o seu %do. chute? ", tentativas);
		scanf("%d", &chute);

		if(chute < 0) {
			printf("Você não pode chutar números negativos!\n");
			continue;
		}

		printf("Seu %do. chute foi %d\n", tentativas, chute);

		acertou = chute == numerosecreto;
		int maior = chute > numerosecreto;

		if(acertou) {
			printf("Parabéns! Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!\n");
		} else if(maior) {
			printf("Seu chute foi maior que o número secreto\n");
		} else {
			printf("Seu chute foi menor que o número secreto\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}

	printf("Você fez %.2f pontos\n", pontos);
	printf("Obrigado por jogar!\n");
}