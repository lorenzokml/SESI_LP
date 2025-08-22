#include <stdio.h>

void main() {
    int vetor[6];
    int i, soma = 0;

    for(i = 1; i < 6; i++){
        printf("Digite o valor da posição %d: \n",i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("SOMA: %d", soma);
}