#include <stdio.h>

int main() {
    int base, alt;
    printf("Base do triangulo: ");
    scanf("%d", &base);
    printf("Altura do triangulo: ");
    scanf("%d", &alt);
    int area = (base* alt) /2;
    printf("AREA: %d",area);
}