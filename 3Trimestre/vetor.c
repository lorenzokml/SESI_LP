#include <stdio.h>

int main() {
	int valores[5];

	// Entrada de valores
	for (int i = 0; i < 5; i++) {
		printf("Digite o valor de %d: ", i + 1);
		scanf("%d", &valores[i]);
	}

	// ImpressC#o dos valores
	int con = 0;
	while (con < 5) {
		printf("Valor de %d: %d\n", con + 1, valores[con]);
		con++;
	}


}
