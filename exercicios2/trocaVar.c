#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int temp;

    printf("Antes da troca:\na = %d, b = %d\n", a, b);

    // Troca dos valores
    temp = a;
    a = b;
    b = temp;

    printf("Depois da troca:\na = %d, b = %d\n", a, b);

    return 0;
}