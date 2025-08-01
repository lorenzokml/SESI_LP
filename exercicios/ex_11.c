#include <stdio.h>
// area triangulo

void main(){
    int base, alt;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite a altura: ");
    scanf("%d", &alt);
    int f = base * alt;
    printf("A area do triangulo é %d", f);
}
