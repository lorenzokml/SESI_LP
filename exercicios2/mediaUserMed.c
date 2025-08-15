#include <stdio.h>

int main() {
    int n;
    float num, soma = 0;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    printf("A média dos números é: %.2f\n", soma / n);

    return 0;
}