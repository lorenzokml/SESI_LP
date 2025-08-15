#include <stdio.h>
int main() {
    int c;
    printf("Digite o valor em Celsius: ");
    scanf("%d", &c);
    int f = (c * 9/5) + 32;
    printf("O valor em Fahrenheit é: %d", f);
}