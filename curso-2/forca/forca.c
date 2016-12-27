#include <stdio.h>
#include <string.h>
#include "forca.h"

// variáveis globais
char palavrasecreta[20];
char chutes[26];
int chutesdados = 0;

int enforcou() {
	int erros = 0;

	int i = 0;
	for(; i < chutesdados; i++) {
		int existe = 0;

		int j = 0;
		for(; j < strlen(palavrasecreta); j++) {
			if(chutes[i] == palavrasecreta[j]) {
				existe = 1;
				break;
			}
		}

		if(!existe) erros++;
	}

	return erros >= 5;
}

void abertura() {
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");
}

void chuta() {
	char chute;
	printf("Qual letra? ");
	scanf(" %c", &chute);

	chutes[chutesdados] = chute;
	chutesdados++;
}

int jachutou(char letra) {
	int achou = 0;

	int j = 0;
	for(; j < chutesdados; j++) {
		if(chutes[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}

int ganhou() {
	int i = 0;
	for(; i < strlen(palavrasecreta); i++) {
		if(!jachutou(palavrasecreta[i])) {
			return 0;
		}
	}

	return 1;
}

void desenhaforca() {

	printf("Você já deu %d chutes\n", chutesdados);
	
	int i = 0;
	for(; i < strlen(palavrasecreta); i++) {

		if(jachutou(palavrasecreta[i])) {
			printf("%c ", palavrasecreta[i]);
		} else {
			printf("_ ");
		}

	}
	printf("\n");

}

void escolhepalavra() {
	sprintf(palavrasecreta, "MELANCIA");
}

int main() {

	abertura();
	escolhepalavra();

	do {

		desenhaforca();
		chuta();

	} while (!ganhou() && !enforcou());

}