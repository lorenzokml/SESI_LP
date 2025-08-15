#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite 5 números:\n");

    scanf("%d", &num);
    maior = menor = num;

    for (int i = 1; i < 5; i++) {
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}