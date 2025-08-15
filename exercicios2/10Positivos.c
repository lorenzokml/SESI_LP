#include <stdio.h>

int main() {
    int cont = 0; // Inicialize cont como 0
    float num;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1); // Corrigido para usar %d e o número ordinal
        scanf("%f", &num);
        
        if (num > 0) {
            cont++;
        }
    }

    printf("Quantidade de números positivos: %d\n", cont); // Corrigido para "Quantidade"
    return 0;
}