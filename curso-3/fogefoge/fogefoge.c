#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* f;
	char mapa[5][10+1];
	int i;

	f = fopen("mapa.txt", "r");
	if(f == 0) {
		printf("Erro na leitura do mapa");
		exit(1);
	}

	for(i = 0; i < 5; i++) {
		fscanf(f, "%s", mapa[i]);
	}

	for(i = 0; i < 5; i++) {
		printf("%s\n", mapa[i]);
	}

	fclose(f);

}