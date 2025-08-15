#include <stdio.h>

int main() {
    int num, i, isPrimo = 1;

    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrimo = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrimo = 0;
                break;
            }
        }
    }

    if (isPrimo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}