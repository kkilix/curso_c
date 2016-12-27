#include <stdio.h>
#include <string.h>

void abertura() {
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");
}

void chuta(char chutes[26], int* tentativas) {
	char chute;
	printf("Qual letra? ");
	scanf(" %c", &chute);

	chutes[*tentativas] = chute;
	(*tentativas)++;
}

int jachutou(char letra, char* chutes, int tentativas) {
	int achou = 0;

	int j = 0;
	for(; j < tentativas; j++) {
		if(chutes[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}

void desenhaforca(char* palavrasecreta, char* chutes, int tentativas) {

	printf("Você já deu %d chutes\n", tentativas);
	
	int i = 0;
	for(; i < strlen(palavrasecreta); i++) {

		if(jachutou(palavrasecreta[i], chutes, tentativas)) {
			printf("%c ", palavrasecreta[i]);
		} else {
			printf("_ ");
		}

	}
	printf("\n");

}

int main() {

	char palavrasecreta[20];
	sprintf(palavrasecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;

	char chutes[26];
	int tentativas = 0;

	abertura();

	do {

		desenhaforca(palavrasecreta, chutes, tentativas);
		chuta(chutes, &tentativas);

	} while (!acertou && !enforcou);

}