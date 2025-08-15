#include <stdio.h>

int main() {
    int n1;
    printf("Digite um valor: ");
    scanf("%d", &n1);

    if (n1 > 0) {
        printf("Positivo");
    } else if (n1 < 0) {
        printf("Negativo");
    } else {
        printf("Zero");
    }

    return 0;
}